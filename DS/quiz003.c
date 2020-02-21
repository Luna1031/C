/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 [if-else]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int N;
    printf("N?");
    scanf("%d", &N);

    if (N <= 100 && N >= 90)
        printf("A학점입니다. \n");
    else if (N < 90 && N >= 80)
        printf("B학점입니다. \n");
    else if (N < 80 && N >= 70)
        printf("C학점입니다. \n");
    else if (N < 70 && N >= 60)
        printf("D학점입니다. \n");
    else
        printf("F학점입니다. \n");
    
    

	system("pause");
	return EXIT_SUCCESS;
}