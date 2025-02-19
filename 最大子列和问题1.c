#include <stdio.h>

int MaxSubsequenceSum(const int A[], int N) {
    int ThisSum, MaxSum;
    int i, j, k;

    MaxSum = 0; /* ��ʼ��������к� */

    /* i���������λ�� */
    for (i = 0; i < N; i++) {
        /* j�������Ҷ�λ�� */
        for (j = i; j < N; j++) {
            ThisSum = 0; /* ThisSum�Ǵ�A[i]��A[j]�����к� */
            /* k�Ǵ�i��j�ı��� */
            for (k = i; k <= j; k++) {
                ThisSum += A[k];
            }
            /* ����յõ���������к͸�������½�� */
            if (ThisSum > MaxSum) {
                MaxSum = ThisSum;
            }
        }
    }

    return MaxSum; /* ����������к� */
}

int main() {
    int A[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 }; /* ʾ������ */
    int N = sizeof(A) / sizeof(A[0]); /* �������鳤�� */
    int result;

    result = MaxSubsequenceSum(A, N); /* ���ú���������������к� */

    printf("��������к���: %d\n", result); /* ������ */

    return 0;
}
