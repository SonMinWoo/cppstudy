#include <iostream> // In standard header, skip extension(.h)

int helloworld(void)
{
  int num = 10;
  std::cout << "Hello World" << std::endl;
  std::cout << "Hello " << "World" << std::endl;
  std::cout << num << ' ' << 'X';
  std::cout << ' ' << 1.23 << std::endl;
  return 0;
}

int main(void)
{
	helloworld();
	return 0;
}