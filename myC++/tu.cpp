
#include <iostream>
#include <float.h>

//1.定义图 邻接矩阵表示法
# define MaxN   30  /*图中顶点数最大值*/
typedef int AdjMatrix[MaxN][MaxN]; /*邻接矩阵*/
typedef struct {
    int Vnum; //图中顶点数目
    AdjMatrix arcs;
} Graph;


//2.定义图  邻接链表表示法
// # define MaxN   30  /*图中顶点数最大值*/
//typedef int AdjMatrix[MaxN][MaxN];tu.cpp /*邻接矩阵*/
typedef struct ArcNode {   //邻接链表的表结点

    int adjvex;    //邻接顶点的顶点序号
    double weight;  //边/弧的权值
    int Vnum; //图中顶点数目
    struct ArcNode.*nextarc;  //指向下一个邻接顶点的指针
    AdjMatrix arcs;

} EdgeNode;

typedef struct VNode {   //邻接链表的头结点
    char data;    //顶点表示的数据,以一个字符表示
    struct ArcNode.*firstarc; //指向第一条依附于该顶点的边或弧的指针
} AdjList[MaxN];


typedef struct {
    int Vnum; //图中顶点数目
    AdjList Vertices;
} Graph;