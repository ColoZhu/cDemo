//
// Created by 600336 on 2019/9/4.
//

#include <malloc.h>
#include <cstdio>
#include "zuichanggonggongzixulie.h"

/*动态规划  求解两个字符串的最大公共子序列(可不连续)*/
int **Lcs_Length(const char *str1, const char *str2, int str1_length, int str2_length) {
    int i, j;
    /*为矩阵l.b分配空间*/
    int **l = (int **) malloc((sizeof(int *) * (str1_length + 1)));
    int **b = (int **) malloc((sizeof(int *) * (str1_length + 1)));

    for (i = 0; i <= str1_length; i++) {
        l[i] = (int *) malloc(sizeof(int) * (str2_length));
        b[i] = (int *) malloc(sizeof(int) * (str2_length));

    }

    //初始化矩阵
    for (i = 1; i <= str1_length; i++) {
        l[i][0] = 0;
    }
    for (i = 1; i <= str2_length; i++) {
        b[0][i] = 0;
    }
    for (i = 1; i <= str1_length; i++) {
        for (j = 1; j <= str2_length; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                l[i][j] = l[i - 1][j - 1] + 1;
                b[i][j] = 0;  /*0代表指向右上方的箭头*/
            } else if (l[i - 1][j] >= l[i][j - 1]) {
                l[i][j] = l[i - 1][j];
                b[i][j] = 1;  /*1代表指向上方的箭头*/
            } else {
                l[i][j] = l[i][j - 1];
                b[i][j] = 2;  /*2代表指向右方的箭头*/
            }
        }
    }

    return b;
}


/**构造最优解**/
void OutputLcs(const char *str1, const int **b, int str1_length, int str2_length) {
    if (str1_length == 0 || str2_length == 0)/**两个字符串中任何一个长度为0**/
        return;
    if (b[str1_length][str2_length] == 0) {/**箭头指向右上**/
        OutputLcs(str1, b, str1_length - 1, str2_length - 1);
        printf("%c", str1[str1_length - 1]);
    } else if (b[str1_length][str2_length] == 1)/**箭头指向上**/
        OutputLcs(str1, b, str1_length - 1, str2_length);
    else
        OutputLcs(str1, b, str1_length, str2_length - 1);
}