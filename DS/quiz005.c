/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� [������]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
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