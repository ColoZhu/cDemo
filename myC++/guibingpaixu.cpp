
#include <iostream>
#include <float.h>

//归并排序
/*
 * A  数组
 * p,q,r 是下标, 满足 p<=q<r
 * */
void MergeSort(int A[], int p, int r) {
    int q;
    if (q < r) {
        q = (p + r) / 2;            //找中间位置的数据
        MergeSort(A, p, q);         //排序左边的
        MergeSort(A, q + 1, r);     //排序右边的
        Merge(A, p, q, r);          //最终排序
    }
}


void Merge(int A[], int p, int q, int r) {
    int n1 = p - q + 1, n2 = r - q, i, j, k;

    //n1 : 左边序列个数
    //n2 : 右边序列个数

    int L[50], R[50];
    for (i = 0; i < n1; i++) {
        L[i] = A[p + i]
        p + i;
    }
    for (j = 0; j < n2; j++) {
        R[j] = A[q + j + 1];
    }
    L[n1] = INTMAX_MAX;
    R[n2] = INTMAX_MAX;
    i = 0;
    j = 0;

    for (k = p; k < r + 1; k++) {
        if (L[i] < R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }

}