/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 [정수의  합]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("%d \n", sum);
	system("pause");
	return EXIT_SUCCESS;
}