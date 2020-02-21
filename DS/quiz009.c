/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 [정렬]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

void sort(int data[])
{
	int tmp;

	for (int i = 0; i < 7; i++)
	{
		for (int j = i + 1; j < 7; j++)
		{
			if (data[i] >= data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}
		}
		printf("%3d", data[i]);
	}
	printf("\n");
}

// 메인함수
int main(void)
{
	int data[7] = { 6,2,1,3,5,4,7 };

	sort(data);

	system("pause");
	return EXIT_SUCCESS;
}