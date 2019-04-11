//call by address? call by reference!
//call by reference란, 주소 값을 전달받아 함수 외부에 선언된 변수에 접근하는 형태의 함수호출
//address를 이용할 수도 있고, reference를 이용할 수도 있다.

#include <iostream>
using namespace std;

void swapbyref(int &ref1, int &ref2)
{
	int tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

//reference type return, can be saved in reference, variable
int& refretfunc(int &ref)
{
	ref++;
	return ref;
}

// this nust be saved in variable
int refretfuncv(int &ref)
{
	ref++;
	return ref;
}
/*
int main(void)
{
	int num = 1234;
//	int &ref = 20; (x) . reference는 변수에 또 다른 이름을 붙이는 것
	int &ref = num; // reference의 선언 방식
	int *ptr = &num; // 포인터에도 reference 선언 가능
	int *(&pref) = ptr;

	int arr[] = { 2,3,4 };
	int &aref1 = arr[0];
	int &aref2 = arr[1];
	int &aref3 = arr[2];
*/
	/*
	cout << "value : num -> " << num << ", ref -> " << ref << ", ptr -> " << *ptr << endl;
	cout << "address : num -> " << &num << ", ref -> " << &ref << ", ptr -> " << ptr << endl;

	ref = 4321;
	cout << "value : num -> " << num << ", ref -> " << ref << ", ptr -> " << *ptr << endl;
	cout << "address : num -> " << &num << ", ref -> " << &ref << ", ptr -> " << ptr << endl;

	cout << "ref1 : " << aref1 << ", ref2 : " << aref2 << ", ref3 : " << aref3 << endl;
	*/

	/*
	int v1 = 10, v2=20;
	swapbyref(v1, v2);
	cout << "v1 : " << v1 << ", v2 : " << v2 << endl;
	*/
/*
	const int &cref = 50; // const reference can refer consistant
	int num1 = 1;
	int num2 = refretfunc(num1); // just return value
	int &num3 = refretfunc(num1); // return reference
	int num4 = refretfuncv(num1); // return value in variable

	num2 += 100;
	num3 += 10;

	cout << "num1 : " << num1 << ", num2 : " << num2 << ", num3 : " << num3 << ", num4 : " << num4 << endl;

	return 0;
}
*/