#include"CMap.h"
CMap::CMap(int capacity)
{
	m_icapacity = capacity;
	m_iNodecount = 0;
	m_pNodearray = new Node[capacity];
	m_pMatrix = new int[capacity*capacity];
	memset(m_pMatrix, 0, m_icapacity*m_icapacity * sizeof(int));
	/*for (int i = 0; i < 0; i++)
	{
		m_pMatrix[i] = 0;
	}*/
}
CMap::~CMap()
{
	delete[]m_pMatrix;
	delete[]m_pNodearray;
}
bool CMap::addNode(Node *pNode)
{
	if (pNode == NULL)
	{
		return false;
	}
	m_pNodearray[m_iNodecount].m_cdate = pNode->m_cdate;
	m_iNodecount++;
	return true;
}
void CMap::resetNode()
{
	for (int i = 0; i < m_iNodecount; i++)
	{
		m_pNodearray[i].m_bisvisit = false;
	}
}
bool CMap::setValueToDirectedGrapph(int row, int col, int val)
{
	if (row < 0 || row >= m_icapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_icapacity)
	{
		return false;
	}
	m_pMatrix[row*m_icapacity + col] = val;
	return true;
}
bool CMap::setValueToUnDirectGraph(int row, int col, int val )
{
	if (row < 0 || row >= m_icapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_icapacity)
	{
		return false;
	}
	m_pMatrix[row*m_icapacity + col] = val;
	m_pMatrix[col*m_icapacity + row] = val;
	return true;
}
bool CMap::getvaluefromMatrix(int row, int col, int&val)
{
	if (row < 0 || row >= m_icapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_icapacity)
	{
		return false;
	}
	val = m_pMatrix[row*m_icapacity + col];
	return true;
}
void CMap::printMatrix()
{
	for (int i = 0; i < m_icapacity; i++)
	{
		for (int j = 0; j < m_icapacity; j++)
		{
			cout << m_pMatrix[i*m_icapacity+j] << "  ";
		}
		cout << endl;
	}
}
void CMap::depthFirstTraverse(int nodeIndex)
{
	int value = 0;
	cout << m_pNodearray[nodeIndex].m_cdate << "  ";
	m_pNodearray[nodeIndex].m_bisvisit = true;
	for (int i = 0; i < m_icapacity; i++)
	{
		getvaluefromMatrix(nodeIndex, i, value);
		if (value == 1)
		{
			if (m_pNodearray[i].m_bisvisit == true)
			{
				continue;
			}
			else
			{
				depthFirstTraverse(i);
			}
		}
		else
		{
			continue;
		}
	}
}
//广度优先遍历
void CMap::breadthFirstTraverse(int nodeIndex)
{
	cout << m_pNodearray[nodeIndex].m_cdate << "  ";
	m_pNodearray[nodeIndex].m_bisvisit = true;
	vector<int>curVec;
	curVec.push_back(nodeIndex);
	breadthFirstTreaverseImpl(curVec);
}
void CMap::breadthFirstTreaverseImpl(vector<int>preVec)
{
	int value = 0;
	vector<int>curVec;
	for (int j = 0; j < (int)preVec.size(); j++)
	{
		for (int i=0;i<m_icapacity;i++)
		{
			getvaluefromMatrix(preVec[j], i, value);
			if (value != 0)
			{
				if (m_pNodearray[i].m_bisvisit)
				{
					continue;
				}
				else
				{
					cout << m_pNodearray[i].m_cdate << "  ";
					m_pNodearray[i].m_bisvisit = true;
					curVec.push_back(i);
				}
			}
		}
	}
	if (curVec.size() == 0)
	{
		return;
	}
	else
	{
		breadthFirstTreaverseImpl(curVec);
	}
}