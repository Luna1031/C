/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� [�迭]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    int cap = 0, sml = 0, num = 0, spc = 0;
    char ch[100];
    scanf("%s", &ch);
 
    for (int i = 0; i < 100; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
            cap++;
        else if (ch[i] >= 'a' && ch[i] <= 'z')
            sml++;
        else if (ch[i] >= '0' && ch[i] <= '9')
            num++;
        else
            spc++;
    }
    printf("���ĺ��빮�� :%d \n", cap);
    printf("���ĺ��ҹ��� :%d \n", sml);
    printf("        ���� :%d \n", num);
    printf("    Ư������ :%d \n", spc);

	system("pause");
	return EXIT_SUCCESS;
}