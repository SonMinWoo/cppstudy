//boxval을 overloading 형태로 재구현
#include <iostream>

int boxval(int leng, int width, int height)
{
	return leng * width * height;
}

int boxval(int leng, int width)
{
	return leng * width * 1;
}

int boxval(int leng)
{
	return leng * 1 * 1;
}

int main(void)
{
	std::cout << boxval(2, 2, 2) << std::endl;
	std::cout << boxval(3, 3) << std::endl;
	std::cout << boxval(10) << std::endl;
	return 0;
}

/*
2. 밑의 오버로딩의 문제는? : simplefunc()을 호출하게 되면 둘 다 조건을 만족한다. = 컴파일에러
int simplefunc(int a=10)
{
	return a+1;
}

int simplefunc(void)
{
	return 10;
}

*/