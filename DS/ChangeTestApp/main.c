/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.17
  writer - YEL
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void)
{
	/*int a, b, temp;

	scanf("%d %d", &a, &b);

	temp = a;
	a = b;
	b = temp;

	printf("%d %d \n", a, b);*/

	/*int num = 0;
	for (int i = 0; i <= 100; i++)
	{
		num += i;
	}
	printf("%d \n", num);*/

	/*int width, height;
	double area;

	scanf("%d %d", &width, &height);

	area = (width * height) / 2;

	printf("%.1lf \n", area);*/

	/*int n, res = 0;
	scanf("%d", &n);

	while (n != 0)
	{
		res += (n % 10);
		n /= 10;
	}

	printf("%d \n", res);*/

	/*int num;
	scanf("%d", &num);

	for (int i = 0; i <(num/2)+1; i++)
	{
		for (int j = 0; j <= i; j+2)
		{
			printf(" ");
		}
		for (int j = 0; j > i; j+2)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
	}*/

	/*int n, com;
	scanf("%d", &n);

	for (int i = 1; i < n ; i++)
	{
		com = i * i;
		if (n == com)
		{
			printf("%d \n", (i + 1) * (i + 1));
			break;
		}
	}
	if (n != com)
	{
		return -1;
	}*/

	/*int n, num, size = 0;

	scanf("%d", &n);

	num = n;

	while (n > 0)
	{
		n = n / 10;
		size++;
	}

	int *arr = (int*)malloc(sizeof(int) * size);

	for (int i = 0; i < size ; i++)
	{
		arr[i] = num % 10;
		num /= 10;
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	*/

	/*int cnt = 0;

	for (int i = 2; i <= 100; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0 && i % 1 == 0)
			{
				cnt++;
			}
		}
		if (cnt == 1)
		{
			printf("%d ", i);
		}
		cnt = 0;
	}*/




	system("pause");
	return EXIT_SUCCESS;
}