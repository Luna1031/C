/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.18
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*int n;
    scanf("%d", &n);

    for (int i = n; i <= 9; i++)
    {
        printf("-------------------------------\n");
        for (int j = 1; j <= 9; j++)
        {
            printf("%d*%d=%d \n", i, j, i * j);
        }
        printf("-------------------------------");
    }*/

    int n;
    scanf("%d", &n);

    int arr[10][10];
    int num = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }






	system("pause");
	return EXIT_SUCCESS;
}