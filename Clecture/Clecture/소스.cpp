#include <stdio.h>

int main()
{
#pragma region ������ �迭

	// int a = 10;
	// int b = 20;
	// int c = 30;
	// 
	// int* arrayPtr[3] = { &a, &b, &c };
	// 
	// printf("arrayPtr[1]�� ��: %p\n", arrayPtr[1]);
	// printf("b�� �ּ� : %p\n", &b);
	// 
	// *arrayPtr[1] = 200;
	// 
	// printf("arrayPtr[1]�� ��: %d\n", *arrayPtr[1]);3




#pragma endregion

#pragma region ¦���� Ȧ��
	//	int a = 0;
	//	printf("���ڸ� �Է��Ͻÿ� : ");
	//	scanf_s("%d", &a);
	//	
	//	if (a % 2 == 0)
	//	{
	//		printf("¦�� �Դϴ�.\n");
	//	}
	//	if (a < 0)
	//	{
	//		printf("ERROR\n");
	//	}
	//	if (a % 2 != 0)
	//	{
	//		printf("Ȧ�� �Դϴ�.\n");
	//	}


#pragma endregion


#pragma region 2���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// 2���� �迭 ���� �������� �޸� ������ ���·� ����Ǹ�,
	// 2���� �迭�� ũ�⸦ ������ �� �迭�� ���� ũ�⸸ ������ �� �ֽ��ϴ�.
	//	int array2D[][3] = 
	//	{
	//		{0,1,2},
	//		{3,4,5},
	//		{6,7,8},
	//	
	//	};
	//	// 2���� �迭�� ��� ���� ���еǸ� �տ� �ִ� �迭��
	//	// ���� �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�.
	//	
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			printf("array[%d][%d] : %d\n", i,j,array2D[i][j]);
	//		}
	//	}
	//	
	//	int(*ptr)[3] = array2D;
	//	
	//	printf("ptr�� ���� �ּ� : %p\n", ptr);
	//	printf("array2D�� ���� �ּ� : %p\n", array2D);
	//	
	//	printf("ptr + 1�� ���� �ּ� : %p\n", ptr + 1);
	//	printf("array2D + 1 �� ���� �ּ� : %p\n", array2D + 1); // +1 �� �� ������ �̵�


#pragma endregion

#pragma region ���μ� ����
	int N;
	int cnt = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &N);
	for (int i = 2; i <= N; i++)
	{
		if (N % i == 0)
		{
			N = N / i;
			printf("%d ", i);
			i--;
		}
	}
#pragma endregion

}  