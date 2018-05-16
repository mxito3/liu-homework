// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

class MOVE
{
private:
	int array[20];
	int n;//�����е�Ԫ�ظ���
public:
	MOVE(int b[],int m);
	void change();
	void print();
};


MOVE::MOVE(int b[],int m)
{
	for (int i = 0; i < m; i++)
	{
		array[i] = b[i];
	}
	n = m;
}

void MOVE::change()
{
	int temp[20];
	for (int i = 0; i < n; i++)
	{
		temp[i] = array[i];
	}
	for (int i = 0; i < n; i++)
	{
		array[(i + 3) % n] = temp[i];
	}
}
void MOVE::print()
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "     ";
	}
}
int main()
{
	//�ҳ�ʼ����ʱ��ֱ�Ӵ�һ������Ϊ20�������ȥ����Ȼ�������������
	int arr[20] = { 0 };
	for (int i = 0; i < 20; i++)
	{
		arr[i] = i;
	}
	MOVE move(arr, 20);
	move.print();
	cout << endl;
	move.change();
	move.print();
    return 0;
}

