//mecro vs inline. 매그로처럼 함수의 몸체부분이 호출 문장을 완전히 대체했을때, '함수가 인라인화' 되었다 표현.
#include <iostream>
//mecro는 자료형에 의존적이지 않다. 단, 정의하기 복잡하다.
#define SQUARE(x) ((x)*(x))

template <typename T>
//template를 활용해 데이터 손실을 방지한다.
inline T insqure(T x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(3.5) << std::endl;
	std::cout << insqure(4) << std::endl;
	std::cout << insqure(2.1) << std::endl;
	return 0;
}