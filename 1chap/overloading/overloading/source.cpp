//C++은 함수호출 시 전달되는 인자와 function의 이름으로 함수를 구분한다. 인자는 인자의 type과 개수로 구분된다.
//return type과 인자의 이름은 함수 호출 구분 기준이 될 수 없다!
#include <iostream>

int func0(int num)
{
	num--;
	return num;
}

int func0(int a, int b)
{
	return a - b;
}

/*
int main(void)
{
	std::cout << func0(4) << std::endl;
	std::cout << func0(2, 1) << std::endl;
	return 0;
}
*/