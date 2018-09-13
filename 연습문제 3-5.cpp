#include <iostream>
using namespace std;

void sum_x(int a[], int n, int &sum, int &x)
{
	int i;
	sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + a[i];

	x = 1;
	for (i = 0; i < n; i++)
	x = x * a[i];
}
int main()
{
	int sum;
	int x;
	int a[5] = {1, 2, 3, 4, 5};
	sum_x(a, 5, sum, x);

	cout << sum << "    " << x;

}