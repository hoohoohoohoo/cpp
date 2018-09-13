#include<iostream>
using namespace std;

int main()
{
	int var1 = 2, var2 = 3;
	int &ref1 = var1; //int &ref1 처음에는 선언만 되었고 초기화가 되어있지 않아 오류가 발생했었다.
	int &ref2 = var2; //int &ref2 처음에는 선언만 되었고 초기화가 되어있지 않아 오류가 발생했었다.
	                  //

    //ref1 = var1; 참조변수 선언과 초기화를 따로 해줘서 오류가 발생했다.
	//ref2 = var2; 참조변수 선언과 초기화를 따로 해줘서 오류가 발생했다.

	int var3 = ref1;
	ref1 = ref2;
	ref2 = var3;

	cout << "var1 : " << var1 << endl;
	cout << "var2 : " << var2 << endl;

	return 0;
}