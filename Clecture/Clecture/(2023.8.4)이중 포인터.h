#pragma once
#include <stdio.h>


int main()
{
#pragma region ���� ������

	//	int data = 100;
	//	int* ptr1 = &data;
	//	int** ptr2 = &ptr1;
	//	
	//	**ptr2 = 999;
	//	
	//	printf("%d\n", data);
	//	printf("%d", **ptr2);

	//	int a = 10;
	//	int b = 20;
	//	
	//	int* aPtr1 = &a;
	//	int* bPtr1 = &b;
	//	
	//	int** aPtr2 = &aPtr1;
	//	int** bPtr2 = &bPtr1;
	//	
	//	int* temp = *bPtr2;
	//	
	//	*bPtr2 = *aPtr2;
	//	
	//	*aPtr2 = temp;
	//	
	//	
	//	
	//	
	//	printf("%d\n", **aPtr2);
	//	printf("%d\n", **bPtr2);


#pragma endregion

#pragma region ���

	//	printf("1�� 3���� ���� ������ : %d", 2 % 3);
	//	printf("1�� 3���� ���� ������ : %d", 3 % 3);
	//	printf("1�� 3���� ���� ������ : %d", 4 % 3);
	//	printf("1�� 3���� ���� ������ : %d", 1 % 3);
	{
		int num = 0;

		printf("���ڸ� �Է��Ͻÿ� : ");

		scanf_s("%d", &num);

		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
			{
				printf("%d�� ����� : %d\n", num, i);
			}
		}

	}

#pragma endregion



	return 0;
}