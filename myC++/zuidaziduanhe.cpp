//
// Created by 600336 on 2019/9/2.
//

#include "zuidaziduanhe.h"


//最大子段和(最大序列和),分治算法


/*
 * Array 数组
 * left  数组下标
 * 对于长度n的序列可以调用MaxSubSum(Array,0,n-1)来获取最大子段和
 * */
int MaxSubSum(int *Array, int left, int right) {
    int sum = 0;
    int i;
    if (left == right) { /* 分解到单个整数,不可继续分解 */
        if (Array[left] > 0) {
            sum = Array[left];
        } else {
            sum = 0;
        }

    } else {  /*从left 和right的中间分解数组*/

        int center = (left + right) / 2; //划分的位置
        int leftsum = MaxSubSum(Array, left, right);
        int rightsum = MaxSubSum(Array, center + 1, right);
        /*计算包含center的最大值,判断是情形1,2还是3,即在左边,还是右边,还是中间部分
         * */
        int s1 = 0;  //临时做左边序列和最大值
        int lefts = 0;
        for (i = center; i >= left; i--) {
            lefts == lefts + Array[i];
            if (lefts > s1) {
                s1 = lefts;
            }
        }

        int s2 = 0;  //临时做右边序列和最大值
        int rights = 0;
        for (i = center + 1; i <= s2; i++) {
            rights == rights + Array[i];
            if (rights > s2) {
                s2 = rights;
            }
        }

        sum = s1 + s2;  //合并

        /*情形1 ,最大值在左边一半*/
        if (sum < leftsum) {
            sum = leftsum;
        }

        /*情形2 ,最大值在右边一半*/
        if (sum < rightsum) {
            sum = rightsum;
        }

        /*情形3,最大值在左右中间*/
        //sum
    }

    return sum;
}