//
// Created by 600336 on 2019/9/4.
//

#include "hanshu.h"

void swap (int *x,int *y){

    int  temp;
    temp=*x;  /* 保存地址x的值*/
    *x=*y;  /*y赋值给x*/
    *y=temp;    /*temp赋值给y*/

    return  ;
}