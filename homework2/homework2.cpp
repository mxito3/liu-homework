// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//


#include "iostream"
#include <algorithm> 
#include <vector>
#include "string"
using namespace std;
class MOVE
{
private:
	char *array;
	int n;//数组中的元素个数
public:
	MOVE(char b[], int m);
	void change();
	void print();
	bool myfunction(int i, int j);
	~MOVE();

};

bool MOVE::myfunction(int i, int j) { return (i<j); }

MOVE::MOVE(char b[], int m)
{
	array = new char(m);
	for (int i = 0; i < m; i++)
	{
		array[i] = b[i];
	}
	n = m;
}

MOVE::~MOVE()
{
	delete array;
	array = NULL;
}

void MOVE::change()
{
	vector<char> little;
	vector<char> big;
	vector<char> result;
	for (int i = 0; i < n; i++)
	{
		char temp = array[i];
		if (islower(temp))
		{
			little.push_back(temp);
		}
		else if (isupper(temp))
		{
			big.push_back(temp);
		}
	}
	for (unsigned int i = 0; i < little.size(); i++)
	{
		result.push_back(little[i]);
	}

	for (unsigned int j = 0; j < big.size(); j++)
	{
		result.push_back(big[j]);
	}
	for (int i = 0; i < n; i++)
	{
		 array[i]=result[i];
	}


}
void MOVE::print()
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "     ";
	}
	cout<<endl;
}


int main()
{
	char arr[17] = {'f','d','s','U','F','f','s','T','j','f','s','K','F','E','k','W','C'};
	MOVE test(arr, 17);
	test.change();
	test.print();
	return 0;
}


