// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class MOVE
{
private:
	int array[20];
	int n;//数组中的元素个数
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
	//我初始化的时候直接传一个长度为20的数组进去，不然不能体现溢出的
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

