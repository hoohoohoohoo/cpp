#include <iostream>
using namespace std;
int *getarray(int x);

int main()
{
	int i;
	int *pary;
	pary = getarray(5);
	for (i = 0; i < 5; i++)
		cout << pary[i] << " ";
	cout << endl;
	delete[]pary;
	return 0;
}
int *getarray(int x)
{
	int *p = new int[x];
	int i;
	for (i = 0; i < x; i++)
		p[i] = i;
	return p;
}