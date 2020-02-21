/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 [넓이 구하기]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int width, height;
    scanf("%d %d", &width, &height);

    int area = (width * height) / 2;
    printf("%d \n", area);

	system("pause");
	return EXIT_SUCCESS;
}