#include<iostream>
using namespace std;

int main()
{
	int var1 = 2, var2 = 3;
	int &ref1 = var1; //int &ref1 ó������ ���� �Ǿ��� �ʱ�ȭ�� �Ǿ����� �ʾ� ������ �߻��߾���.
	int &ref2 = var2; //int &ref2 ó������ ���� �Ǿ��� �ʱ�ȭ�� �Ǿ����� �ʾ� ������ �߻��߾���.
	                  //

    //ref1 = var1; �������� ����� �ʱ�ȭ�� ���� ���༭ ������ �߻��ߴ�.
	//ref2 = var2; �������� ����� �ʱ�ȭ�� ���� ���༭ ������ �߻��ߴ�.

	int var3 = ref1;
	ref1 = ref2;
	ref2 = var3;

	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;

	return 0;
}