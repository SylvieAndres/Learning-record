#include <stdio.h>

int MaxSubsequenceSum(const int A[], int N) {
    int ThisSum, MaxSum;
    int i, j, k;

    MaxSum = 0; /* 初始化最大子列和 */

    /* i是子列左端位置 */
    for (i = 0; i < N; i++) {
        /* j是子列右端位置 */
        for (j = i; j < N; j++) {
            ThisSum = 0; /* ThisSum是从A[i]到A[j]的子列和 */
            /* k是从i到j的遍历 */
            for (k = i; k <= j; k++) {
                ThisSum += A[k];
            }
            /* 如果刚得到的这个子列和更大，则更新结果 */
            if (ThisSum > MaxSum) {
                MaxSum = ThisSum;
            }
        }
    }

    return MaxSum; /* 返回最大子列和 */
}

int main() {
    int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 }; /* 示例数组 */
    int N = sizeof(A) / sizeof(A[0]); /* 计算数组长度 */
    int result;

    result = MaxSubsequenceSum(A, N); /* 调用函数计算最大子序列和 */

    printf("最大子序列和是: %d\n", result); /* 输出结果 */

    return 0;
}
