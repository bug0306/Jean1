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
	bool addNode(Node*pNode);//��ͼ����ӽڵ�
	void resetNode();//���ýڵ�
	bool setValueToDirectedGrapph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���
	bool setValueToUnDirectGraph(int row, int col, int val = 1);//Ϊ����ͼ�����ڽӾ���
	void printMatrix();//��ӡ�ڽӾ���
	void depthFirstTraverse(int nodeIndex);//������ȱ���
	void breadthFirstTraverse(int nodeIndex);//������ȱ���
private:
	bool getvaluefromMatrix(int row, int col, int &val);//�Ӿ����л�ȡȨֵ
	void breadthFirstTreaverseImpl(vector<int> preVec);//������ȱ������� 
private:
	int m_icapacity;//ͼ�����������ɵĶ�����
	int m_iNodecount;//�Ѿ���ӵĶ������
	Node*m_pNodearray;//������Ŷ�������
	int*m_pMatrix;//��������ڽӾ���
};