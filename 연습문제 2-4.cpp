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
	int x, y; // ���� ���� ����
	double c; // ���� ������
	int ho;
	cout << "���Ϸ��� ������ ��� 1 ���簢��, 2 ��" << endl;
	cin >> ho;

	if (ho == 1)

	{
		cout << "���� ���� ���̸� ���������� �Է��Ͻÿ� " << endl;
		cin >> x >> y;
		cout << "���簢�� ���� = " << GetArea(x, y);
	}
	else if (ho == 2)
	{
		cout << "�������� �Է��Ͻÿ�." << endl;
		cin >> c;
		cout << "���� ���� = " << GetArea(c);
	}
}