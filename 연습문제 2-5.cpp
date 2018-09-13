#include <iostream>
using namespace std;
int sum(int a, int b, int c, int d = 2) // d는 매개변수
{
	return a + b + c + d;
}
int main()
{
	int a, b, c, d;
	cout << "a, b, c의 값을 입력하시오." << endl;
	cin >> a >> b >> c;
	cout << "a + b + c + d의 값 = " << sum(a, b, c) << endl;

	cout << "a, b, c, d의 값을 입력하시오." << endl;
	cin >> a >> b >> c >> d;
	cout << "a + b + c +d의 값 = " << sum(a, b, c, d) << endl;
	cout << sum(a, b, c); // d는 디폴트 매개변수여서 자동으로 더해짐
}