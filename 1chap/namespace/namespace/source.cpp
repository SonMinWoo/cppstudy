//함수와 변수의 이름의 충돌이 일어나지 않도록 namespace라는 문법이 정의되었다.

#include <iostream>
/*
namespace acom
{
	void simple(void);
	void addsim(void);

	//namespace는 중첩될 수 있다.
	namespace ccom
	{
		void simple(void);
	}
}

namespace bcom
{
	void simple(void);
}

int main(void)
{
	acom::addsim();
	return 0;
}

void acom::simple(void)
{
	std::cout << "acom이 정의한 함수" << std::endl;
}

void bcom::simple(void)
{
	std::cout << "bcom이 정의한 함수" << std::endl;
}

//같은 namespace에 정의된 함수 호출 시 namespace를 명시할 필요가 없다.
void acom::addsim(void)
{
	simple();
	bcom::simple();
	acom::ccom::simple();
}

void acom::ccom::simple(void)
{
	std::cout << "ccom이 정의한 함수" << std::endl;
}
*/
//전역변수같이 모든 범위에서 유효하다. 이름공간의 생략을 명령하는 기능을 한다.
using namespace std;
int glb = 100;
/*
using std::cin;
using std::cout;
using std::endl;
*/
namespace hybrid
{
	void hyfunc(void)
	{
		char x[100];
		cout << "출력할 문자열을 입력하세요 : ";
		cin >> x;
		cout<<"simple function! " << x << endl;
	}
}

int main(void)
{
	using hybrid::hyfunc; //hyfunc은 함수의 이름이 될 수 있고, 변수의 이름도 될 수 있다. 지금은 main 안에서만 유효하다.
	hyfunc();
	int glb = 10;
	cout << "local variable: " << glb << ", global variable: " << ::glb << endl; //::변수이름 과 같이 전역변수에 접근이 가능하다.
	return 0;
}