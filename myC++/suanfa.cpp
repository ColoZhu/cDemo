
#include <iostream>
#include <float.h>

//阶乘
int Factorical(int num) {
    if (num == 0) {
        return 1;
    }
    if (num > 0) {
        return num * Factorical(num - 1);
    }
}

   