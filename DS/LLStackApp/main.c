/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.20
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#incldue <string.h>

typedef int element;

typedef struct stackNode
{
    element data;
    struct stacknode* link;
} stackNode;

stackNode* top;

int inEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

void push(element item)
{
    stackNode* temp = (strckNode*)malloc(sizeof(stackNode));
    temp->data = item;
    temp->link = top;
    top = temp;
}

element pop()
{
    element item;
    stackNode* temp = top;

    if (top == NULL)
    {
        printf("\n\nStack is Empty \n");
        return 0;
    }
    else
    {
        item = temp->data;
        top = temp->link;
        free(temp);
        return item;
    }
}

element peek()
{
    if (top == NULL)
        printf("\n\nStack is Empty \n");
    else
    {
        return(top->data);
    }
}

void printStack()
{
    stackNode* p = top;
    printf("\nStack [");
    while (p)
    {
        printf("%d", p->data);
        p = p->link;
    }
    printf("]");
}
// 메인함수
int main(void) 
{


	system("pause");
	return EXIT_SUCCESS;
}