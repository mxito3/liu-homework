#include "iostream"
#include <vector>
using namespace std;
class Array
{
private:
	int a[4][4];
	int n;  //行数
public:
	Array(int a1[][4], int n);
	void show();
	void xuanzhuan();
};

Array::Array(int a1[][4], int n)
{
	this->n = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = a1[i][j];
		}
	}
}

void Array::xuanzhuan()
{
	int temp[100];
	vector<int> result;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[j] = a[i][j];
		}
		//temp是每一行
		
		for (int j = 3; j >=0; j--)  //将结果压栈
		{
			result.push_back(temp[j]);
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = result[i + 4 * j];
		}
		
	}
}

void Array::show()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << a[i][j] << "      ";
		}
		cout << endl;
	}
	
}
int main()
{
	int b[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	Array test(b,4);
	test.xuanzhuan();
	test.show();

	return 0;
}

