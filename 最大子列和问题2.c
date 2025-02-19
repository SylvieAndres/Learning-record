#include <stdio.h>

int MaxSubsequenceSum(const int A[], int N) {
    int ThisSum, MaxSum;
    int i, j;

    MaxSum = 0; /* ��ʼ��������к� */

    /* i���������λ�� */
    for (i = 0; i < N; i++) {
        ThisSum = 0; /* ThisSum�Ǵ�A[i]��ʼ�����к� */
        /* j�������Ҷ�λ�� */
        for (j = i; j < N; j++) {
            ThisSum += A[j]; /* �ۼ����еĺ� */
            /* ����յõ���������к͸�������½�� */
            if (ThisSum > MaxSum) {
                MaxSum = ThisSum;
            }
        }
    }

    return MaxSum; /* ����������к� */
}

int main() {
    int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; /* ʾ������ */
    int N = sizeof(A) / sizeof(A[0]); /* �������鳤�� */
    int result;

    printf("����Ԫ��Ϊ: ");
    int i; 
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    result = MaxSubsequenceSum(A, N); /* ���ú���������������к� */

    printf("��������к���: %d\n", result); /* ������ */

    return 0;
}
