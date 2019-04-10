#include <iostream>

//입력한 숫자 출력
void prob1(void)
{
	int val1, val2, val3, val4, val5;

	std::cout << "1번째 정수 입력: ";
	std::cin >> val1;

	std::cout << "2번째 정수 입력: ";
	std::cin >> val2;

	std::cout << "3번째 정수 입력: ";
	std::cin >> val3;

	std::cout << "4번째 정수 입력: ";
	std::cin >> val4;

	std::cout << "5번째 정수 입력: ";
	std::cin >> val5;

	std::cout << "합계: " << val1 + val2 + val3 + val4 + val5 << std::endl;
}

//입력한 문자열 출력
void prob2(void)
{
	char name[100], phonenum[100];

	std::cout << "이름을 입력해주세요: ";
	std::cin >> name;

	std::cout << "전화번호를 입력해주세요: ";
	std::cin >> phonenum;

	std::cout << "이름은 " << name << "이고, 전화번호는 " << phonenum << "입니다.";
}

//입력한 숫자의 구구단 출력
void prob3(void)
{
	int num;
	
	std::cout << "숫자를 입력해주세요: ";
	std::cin >> num;

	for (int i = 1; i <= 9; i++)
		std::cout << num << " x " << i << " = " << num * i << std::endl;
}

void prob4(void)
{
	int price;

	std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
	std::cin >> price;

	while (price != -1)
	{
		std::cout << "이번 달 급여 : " << 50 + price * 0.12 << "만원" << std::endl;
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> price;
	}

	std::cout << "프로그램을 종료합니다." << std::endl;
}

//확인
int main(void)
{
//	prob1();
//	prob2();
//	prob3();
	prob4();
	return 0;
}