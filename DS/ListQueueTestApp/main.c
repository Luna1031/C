/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.19
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int front = -1;
int rear = -1;
int queue[MAX];

int IsEmpty()
{
    if (front == rear)
        return 1;
    else
        return 0;
}

int IsFull()
{
    int tmp = (rear + 1) % MAX;
    if (tmp == front)
        return 1;

    else
        return 0;
}

void enQueue(int value)
{
    if (IsFull())
        printf("Queue is Full \n");
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = value;
    }
}

int deQueue()
{
    if (IsEmpty())
        printf("Queue is Empty \n");
    else
    {
        front = (front + 1) % MAX;
        return queue[front];
    }
    
}

// 메인함수
int main(void) 
{
    enQueue(1);
    enQueue(3);
    enQueue(5);
    enQueue(7);
    enQueue(9);
    printf("%d \n", deQueue());
    printf("%d \n", deQueue());
    printf("%d \n", deQueue());
    printf("%d \n", deQueue());
    printf("%d \n", deQueue());
    //deQueue();

	system("pause");
	return EXIT_SUCCESS;
}