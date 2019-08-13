//广度遍历和深度遍历
#include<iostream>
using namespace std;
#include"CMap.h"
int main()
{
	CMap *pmap = new CMap(8);//CMap*pmap=new CMap[8]{CMap(2),CMap(6)}动态申请类数组

	Node*pNodeA = new Node('A');
	Node*pNodeB = new Node('B');
	Node*pNodeC = new Node('C');
	Node*pNodeD = new Node('D');
	Node*pNodeE = new Node('E');
	Node*pNodeF = new Node('F');
	Node*pNodeG = new Node('G');
	Node*pNodeH = new Node('H');

	pmap->addNode(pNodeA);
	pmap->addNode(pNodeB);
	pmap->addNode(pNodeC);
	pmap->addNode(pNodeD);
	pmap->addNode(pNodeE);
	pmap->addNode(pNodeF);
	pmap->addNode(pNodeG);
	pmap->addNode(pNodeH);

	pmap->setValueToUnDirectGraph(0, 1);
	pmap->setValueToUnDirectGraph(0, 3);
	pmap->setValueToUnDirectGraph(1, 2);
	pmap->setValueToUnDirectGraph(1, 5);
	pmap->setValueToUnDirectGraph(3, 6);
	pmap->setValueToUnDirectGraph(3, 7);
	pmap->setValueToUnDirectGraph(6, 7);
	pmap->setValueToUnDirectGraph(2, 4);
	pmap->setValueToUnDirectGraph(4, 5);

	pmap->printMatrix();
	cout << endl;

	pmap->depthFirstTraverse(0);
	//深度遍历时全部标记为false
	pmap->resetNode();
	cout << endl;

	pmap->breadthFirstTraverse(0);
	cout << endl;

	system("pause");
	return 0;
 }