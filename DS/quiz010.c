/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 [스택]
  --------------------------------------------------------------------------------
  first created - 2020.02.21
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef int element;

typedef struct stackNode
{
    element data;
    struct stackNode* link;
} stackNode;

struct stackNode* top;

int isEmpty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

void push(element item)
{
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    temp->data = item;
    temp->link = top;
    top = temp;
}

element pop()
{
    stackNode* temp = top;
    element item;

    if (top == NULL)
    {
        printf("\nEMPTY \n");
        return 0;
    }
    else
    {
        item = temp->data;
        top = temp->link;
        free(temp);
        return top->data;
    }
}

void printStack()
{
    stackNode* p = top;

    printf("[");
    while (p)
    {
        printf("%3d", p->data);
        p = p->link;
    }
    printf("] \n");
}


// 메인함수
int main(void) 
{
    push(1);
    printStack();

    push(3);
    printStack();

    push(5);
    printStack();

    pop();
    printStack();

    pop();
    printStack();

    pop();
    printStack();

	system("pause");
	return EXIT_SUCCESS;
}