
#include <iostream>
#include <float.h>

//定义图
# define MaxN   30  /*图中顶点数最大值*/
typedef int AdjMatrix[MaxN][MaxN]; /*邻接矩阵*/
typedef struct {


    int Vnum; //图中顶点数目
    AdjMatrix arcs;
} Graph;
