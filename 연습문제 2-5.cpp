#include <iostream>
using namespace std;
int sum(int a, int b, int c, int d = 2) // d�� �Ű�����
{
	return a + b + c + d;
}
int main()
{
	int a, b, c, d;
	cout << "a, b, c�� ���� �Է��Ͻÿ�." << endl;
	cin >> a >> b >> c;
	cout << "a + b + c + d�� �� = " << sum(a, b, c) << endl;

	cout << "a, b, c, d�� ���� �Է��Ͻÿ�." << endl;
	cin >> a >> b >> c >> d;
	cout << "a + b + c +d�� �� = " << sum(a, b, c, d) << endl;
	cout << sum(a, b, c); // d�� ����Ʈ �Ű��������� �ڵ����� ������
}