/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.18
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{int arr[8] = { 69,10,30,2,16,8,31,22 };
    
    int min, temp;

    for (int i = 0; i < 8; i++)
    {
        printf("[%d]�ܰ� ���� :", i+1);
        for (int j = i+1; j < 8; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
        for (int j = 0; j < 8; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
	system("pause");
	return EXIT_SUCCESS;
}