/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.19
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    int cap = 0, small = 0, num = 0, ch = 0;
    char str[] = { 0 };
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] <= 90 && str[i] > 64)
            cap++;
        else if (str[i] <= 122 && str[i] > 96)
            small++;
        else if (str[i] <= 57 && str[i] > 47)
            num++;
        else
            ch++;
    }
    printf("�빮�� :%d, �ҹ��� :%d, ���� :%d, Ư������ :%d \n", cap, small, num, ch);

	system("pause");
	return EXIT_SUCCESS;
}