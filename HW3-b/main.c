#include <stdio.h>
#include <time.h>

typedef struct my_mm {
    size_t total_size;  // 已分配內存的總大小
    size_t used_size;   // 已使用內存的大小
} my_mm_t;
int g_mem[10] = {0};
my_mm_t mms;
int* my_calloc(int n, int size) {
    size_t req_size = n * size;
    size_t total_size = mms.total_size + req_size;
    if (total_size > sizeof(g_mem)) {
        // 如果需要的內存塊大小超過了可用內存塊的總大小，分配失敗
        return NULL;
    }
    // 查找第一個大小大於等於 req_size 的可用內存塊
    int i;
    for (i = 0; i < 10; i++) {
        if (g_mem[i] >= req_size) {
            break;
        }
    }
    if (i == 10) {
        // 如果沒有符合要求的內存塊，分配失敗
        return NULL;
    }
    // 更新 my_mm_t 結構體的內容
    mms.total_size = total_size;
    mms.used_size += req_size;
    // 更新 g_mem 數組的內容
    g_mem[i] -= req_size;
    // 返回分配的內存塊的地址
    return (int*)(&g_mem[9] - i + 1);
}

void my_free(int *p) {
    if (p == NULL) {
        return;
    }
    // 計算釋放的內存塊的大小
    int i = &g_mem[9] - p + 1;
    size_t free_size = g_mem[i];
    // 更新 my_mm_t 結構體的內容
    mms.used_size -= free_size;
    // 更新 g_mem 數組的內容
    g_mem[i] += free_size;
}


int main(){
    int* np1=my_calloc(1,1);
    int* np2=my_calloc(1,2);
    int* np3=my_calloc(1,3);
    int* np4=my_calloc(1,4);
    my_free(np1);
    int* np5 = my_calloc(1,3);
    return 0;
}