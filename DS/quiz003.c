/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� [if-else]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int N;
    printf("N?");
    scanf("%d", &N);

    if (N <= 100 && N >= 90)
        printf("A�����Դϴ�. \n");
    else if (N < 90 && N >= 80)
        printf("B�����Դϴ�. \n");
    else if (N < 80 && N >= 70)
        printf("C�����Դϴ�. \n");
    else if (N < 70 && N >= 60)
        printf("D�����Դϴ�. \n");
    else
        printf("F�����Դϴ�. \n");
    
    

	system("pause");
	return EXIT_SUCCESS;
}