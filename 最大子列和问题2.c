#include <stdio.h>

int MaxSubsequenceSum(const int A[], int N) {
    int ThisSum, MaxSum;
    int i, j;

    MaxSum = 0; /* 初始化最大子列和 */

    /* i是子列左端位置 */
    for (i = 0; i < N; i++) {
        ThisSum = 0; /* ThisSum是从A[i]开始的子列和 */
        /* j是子列右端位置 */
        for (j = i; j < N; j++) {
            ThisSum += A[j]; /* 累加子列的和 */
            /* 如果刚得到的这个子列和更大，则更新结果 */
            if (ThisSum > MaxSum) {
                MaxSum = ThisSum;
            }
        }
    }

    return MaxSum; /* 返回最大子列和 */
}

int main() {
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; /* 示例数组 */
    int N = sizeof(A) / sizeof(A[0]); /* 计算数组长度 */
    int result;

    printf("数组元素为: ");
    int i; 
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    result = MaxSubsequenceSum(A, N); /* 调用函数计算最大子序列和 */

    printf("最大子序列和是: %d\n", result); /* 输出结果 */

    return 0;
}
