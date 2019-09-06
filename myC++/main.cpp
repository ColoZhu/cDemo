#include <iostream>
//#include "suanfa.cpp"

#include "zuichanggonggongzixulie.cpp"

/* 函数声明 */
//void swap(int *x, int *y);

int main() {
    std::cout << "Hello, World!" << std::endl;

    //测试阶乘
    //int res = Factorical(6);
    // printf("res\r\n");
    // printf("Number = %d", res);  //整数格式化输出


    //测试函数swap
    /* 局部变量定义 */
    /*  int a = 100;
      int b = 200;
      printf("交换前，a 的值： %d\n", a );
      printf("交换前，b 的值： %d\n", b );*/
    /* 调用函数来交换值
      * &a 表示指向 a 的指针，即变量 a 的地址
      * &b 表示指向 b 的指针，即变量 b 的地址
     */
    /* swap(&a, &b);

     printf("交换后，a 的值： %d\n", a );
     printf("交换后，b 的值： %d\n", b );*/


    /*测试最长公共字符串*/
    const char *str1;
    const char *str2;

    str1 = "ABCBDAB";
    str2 = "BDCABA";
    // int **s = Lcs_Length(str1, str2, 7, 6);
    Lcs_Length(str1, str2, 7, 6);

    //OutputLcs(str1, str2, 7, 6);
    //printf(" s 的值： %d\n", s);


    return 0;
}