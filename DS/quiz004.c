/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� [������ȯ]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int a, b, t;
    scanf("%d %d", &a, &b);
    t = a; a = b; b = t;
    printf("%d %d \n", a, b);

    system("pause");
	return EXIT_SUCCESS;
}