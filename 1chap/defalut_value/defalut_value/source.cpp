// 매개변수에 default value를 설정할 수 있으며, function의 선언 부분에만 표현하면 된다.
#include <iostream>
int adder(int num1 = 1, int num2 = 2);
//int boxval(int leng, int width = 1, int height = 1);

/*
int main(void)
{
	
	std::cout << adder() << std::endl;
	std::cout << adder(3) << std::endl;
	std::cout << adder(7, 8) << std::endl;
	
	std::cout << boxval(2,2,2) << std::endl;
	std::cout << boxval(3,3) << std::endl;
	std::cout << boxval(10) << std::endl;
	return 0;
}
*/

int adder(int num1, int num2)
{
	return num1 + num2;
}

//defalut value는 오른쪽부터 채운다. 이유는 parameter가 왼쪽부터 채워지기 때문이다.
/*
int boxval(int leng, int width, int height)
{
	return leng * width*height;
}
*/