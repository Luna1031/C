/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 [구구단]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    for (int i = 9; i > 1; i--)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d \n", i, j, (i * j));
        }
    }
	system("pause");
	return EXIT_SUCCESS;
}