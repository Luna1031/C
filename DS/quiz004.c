/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 [변수교환]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a, b, t;
    scanf("%d %d", &a, &b);
    t = a; a = b; b = t;
    printf("%d %d \n", a, b);

    system("pause");
	return EXIT_SUCCESS;
}