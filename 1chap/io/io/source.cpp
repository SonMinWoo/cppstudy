#include <iostream> // In standard header, skip extension(.h)

using namespace std;
int prthelloworld(void)
{
	int num = 10;
	std::cout << "Hello World" << std::endl;
	std::cout << "Hello " << "World" << std::endl;
	std::cout << num << ' ' << 'X';
	std::cout << ' ' << 1.23 << std::endl;
	return 0;
}

int ipnum(void)
{
	int num1;
	std::cout << "첫번째 숫자 : ";
	std::cin >> num1;

	int num2;
	std::cout << "두번째 숫자 : ";
	std::cin >> num2;

	std::cout << num1 << '+' << num2 << '=' << num1 + num2;
	return 0;
}

int btwadd(void)
{
	int val1, val2, result;
	result = 0;
	std::cout << "숫자 2개를 입력해주세요 : ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) // local variable can be declared in everywhere.
		{
			result += i;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	
	std::cout << "두 수 사이 정수들의 합은? " << result << std::endl;
	return 0;
}

int ptrstr(void)
{
	char name[100], lang[100];

	std::cout << "당신의 이름과 사용하는 언어를 입력해주세요." << std::endl;
	std::cin >> name >> lang;
	std::cout << "당신의 이름은 " << name << "이고, 당신의 언어는 " << lang << "입니다." << std::endl;
	return 0;
}
/*
int main(void)
{
	//prthelloworld();
	//ipnum();
	//btwadd();
	ptrstr();
	return 0;
}
*/