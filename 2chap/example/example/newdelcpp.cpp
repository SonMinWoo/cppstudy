//new-delete is similar with malloc-free, but different.

#include <iostream>
#include <string.h> // = <cstring>
#include <stdlib.h> // = <cstdlib>
using namespace std;

char *makestradr(int len)
{
	//char *str = (char*)malloc(sizeof(char)*len);
	char *str = new char[len];
	return str;
}

int main(void)
{
	char *str = makestradr(20);
	strcpy(str, "I am happy");
	cout << str << endl;
	//free(str);
	delete []str;
	return 0;
}