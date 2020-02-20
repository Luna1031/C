/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.18
  writer - Ye Eun Lee
*/

#include <stdio.h>
#include <stdlib.h>

void QuickSort(int arr[], int left, int right);

int main(void)
{
	int arr[8] = { 69,10,30,2,16,8,31,22 };

	QuickSort(arr, 0, 7);

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	system("pause");
	return EXIT_SUCCESS;
}
void QuickSort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];
    int temp;
    do
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j)
        QuickSort(arr, left, j);

    if (i < right)
        QuickSort(arr, i, right);
}