/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 피보나치수열
  --------------------------------------------------------------------------------
  first created - 2020.02.17
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

int Fib(int);

// 메인함수
int main(void) 
{
    int n, f;
    
    scanf("%d", &n);
    f = (n - 1) + (n - 2);
    printf("%d \n", f);

	system("pause");
	return EXIT_SUCCESS;
}

int Fib(int f)
{
    
}