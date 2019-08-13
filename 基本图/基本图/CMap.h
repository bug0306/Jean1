#pragma once
#include"Node.h"
#include<vector>
#include<iostream>
#include<string.h>
using namespace std;
class CMap
{
public:
	CMap(int capacity=0);
	~CMap();
	bool addNode(Node*pNode);//向图中添加节点
	void resetNode();//重置节点
	bool setValueToDirectedGrapph(int row, int col, int val = 1);//为有向图设置邻接矩阵
	bool setValueToUnDirectGraph(int row, int col, int val = 1);//为无向图设置邻接矩阵
	void printMatrix();//打印邻接矩阵
	void depthFirstTraverse(int nodeIndex);//深度优先遍历
	void breadthFirstTraverse(int nodeIndex);//广度优先遍历
private:
	bool getvaluefromMatrix(int row, int col, int &val);//从矩阵中获取权值
	void breadthFirstTreaverseImpl(vector<int> preVec);//广度优先遍历函数 
private:
	int m_icapacity;//图中最多可以容纳的顶点数
	int m_iNodecount;//已经添加的顶点个数
	Node*m_pNodearray;//用来存放顶点数组
	int*m_pMatrix;//用来存放邻接矩阵
};