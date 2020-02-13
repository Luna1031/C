#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int age = 25, chest = 95;
	char size;

	if (age < 20)
	{
		if (chest < 85)
			size = 'S';
		else if (chest >= 85 || chest < 95)
			size = 'M';
		else
			size = 'L';
	}
	else
	{
		if (chest < 90)
			size = 'S';
		else if (chest >= 90 || chest < 100)
			size = 'M';
		else
			size = 'L';
	}
	printf("사이즈는 %c입니다. \n", size);

	system("pause");
	return 0;
}