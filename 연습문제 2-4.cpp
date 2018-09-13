#include <iostream>
using namespace std;

int GetArea(int x, int y)
{
	return x * y;
}
double GetArea(double c)
{
	return c * c * 3.14;
}
int main()
{
	int x, y; // 가로 세로 길이
	double c; // 원의 반지름
	int ho;
	cout << "구하려는 넓이의 모양 1 직사각형, 2 원" << endl;
	cin >> ho;

	if (ho == 1)

	{
		cout << "가로 세로 길이를 순차적으로 입력하시오 " << endl;
		cin >> x >> y;
		cout << "직사각형 넓이 = " << GetArea(x, y);
	}
	else if (ho == 2)
	{
		cout << "반지름을 입력하시오." << endl;
		cin >> c;
		cout << "원의 넓이 = " << GetArea(c);
	}
}