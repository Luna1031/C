/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int arr[4] = { 157,209,251,312 };

    for (int i = 0; i < 4; i++)
    {
        printf("%u \n", &arr[i]);
    }
    printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

