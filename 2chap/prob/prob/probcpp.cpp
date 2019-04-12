#include <iostream>
using namespace std;

//prob 2-1-1
/*
void prob2111(int &ref1)
{
	ref1++;
}

void prob2112(int &ref2)
{
	ref2 = ref2 * -1;
}

int main()
{
	int num = 3;
	prob2111(num);
	cout << num << endl;
	prob2112(num);
	cout << num << endl;
	return 0;
}
*/

//prob 2-1-2 : 참조자는 변수에 대해서만 선언이 가능하고, 선언된가 동시에 누군가를 참조해야만 한다.
// 변수에 또다른 이름을 붙이는 것이기 때문에 상수 대상으로 선언할 수 없다.

//prob 2-1-3
/*
void swappointer(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;
	cout << num1 << ", " << num2 << endl;
	swappointer(ptr1, ptr2);
	cout << num1 << ", " << num2 << endl;
	return 0;
}
*/

//prob 2-2
/*
int main(void)
{
	const int num = 10;
	const int *ptr = &num;
	const int &ref = *ptr;

	cout << *ptr << ", " << ref << endl;

	return 0;
}
*/

//prob 2-3 복습 필요
/*
typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *ptr = new Point;
	ptr->xpos = p1.xpos + p2.xpos;
	ptr->ypos = p1.ypos + p2.ypos;
	return *ptr;
}

int main(void)
{
	Point *ptr1 = new Point;
	Point *ptr2 = new Point;

	ptr1->xpos = 1;
	ptr1->ypos = 10;
	ptr2->xpos = 2;
	ptr2->ypos = 20;

	Point &rptr = PntAdder(*ptr1, *ptr2);
	cout << rptr.xpos << ", " << rptr.ypos << endl;

	delete ptr1, ptr2, &rptr;
	return 0;
}
*/

//prob 2-4-1
/*
#include <cstring>
int main()
{
	int len;
	char a[100], b[100];
	cin >> a;
	cin >> b;

	len = strlen(a);
	strcat(a, b);
	cout << len << ", " << a << ", " << b<<endl;

	cin >> a;
	cin >> b;
	strcpy(a, b);
	len = strcmp(a, b);
	cout << len << ", " << a << ", " << b << endl;
}
*/
//prob 2-4-2
#include <ctime>
#include <cstdlib>
int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		cout << rand() % 100 << endl;
	return 0;
}