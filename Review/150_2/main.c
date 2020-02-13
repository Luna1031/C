#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif //_MSC_VER

#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n = 0;

	printf("정수입력 :");
	scanf("%d", &n);

	switch (n % 3) //3으로 나눴을 때 나머지가 0이면 거짓, 0이 아니면 참
	{
	case 0:
		printf("거짓 \n");
		break;
	default :
		printf("참 \n");
		break;
	}

	system("pause");
	return 0;
}