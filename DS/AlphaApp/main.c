/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.17
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90 ; j++)
        {
            for (int k = 65; k <= 90 ; k++)
            {
                printf("%c%c%c ", i, j, k);
            }
        }
    }

	system("pause");
	return EXIT_SUCCESS;
}