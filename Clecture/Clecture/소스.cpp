#include <stdio.h>
#include <limits.h>

#pragma region ������
	// ���� ������ ����� �����Դϴ�.
enum State
{
	IDLE,
	ATTACK = 100,
	DIE

	// enum�� ������ ���� ������ �� ������, �߰��� ����
	// �������� �� �״������� ������ ���� ������ ������ ���� +1�� �����˴ϴ�.
};

#pragma endregion

int main()
{
#pragma region ������

	enum State state;

	// state = IDLE;
	// printf("state�� IDLE ��: %d\n", state);
	// state = ATTACK;
	// printf("state�� ATTAC ��: %d\n", state);
	//	state = DIE;
	//	
	//	switch (state)
	//	{
	//	case IDLE: printf("��� ����\n");
	//		break;
	//	case ATTACK: printf("���� ����\n");
	//		break;
	//	case DIE: printf("���� ����\n");
	//		break; 
	//	}

#pragma endregion

#pragma region ��

	// *
	// **
	// ***
	// ****
	// *****

	//  for (int i = 0; i < 5; i++)
	//  {
	//  	for (int j = 0; j <= i; j++)
	//  	{
	//  		printf("*");
	//  	}
	//  	printf("\n");
	//  }


#pragma endregion

#pragma region 1~10������ ��

	//	int result = 0;
	//	
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		result = result + i;
	//	}
	//	printf("1~10 ������ ��: %d\n", result);

#pragma endregion

#pragma region ASCII �ڵ�
	// 1963�� �̱� ANSI���� ǥ��ȭ�� ���̱�ȯ�� 7��Ʈ ��ȣü���̴�.

	// 128���� ����, ����, Ư������, ����ڰ� ǥ���˴ϴ�.

	//	char alphabet = 65;
	//	
	//	printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
	//	printf("alphabet ������ �� : %d\n", alphabet);
	//	
	//	for (alphabet; alphabet <= 90; alphabet++)
	//	{
	//		printf("alphabet ������ ASCII �ڵ��� �� : %c\n", alphabet);
	//	}

#pragma endregion

#pragma region �ִ񰪰� �ּڰ�

	// [10] [5] [11] [1] [3]

	int max = 0;
	int min = INT_MAX;

	int array[5] = { 12, 4, 11, 1, 3 };
	for (int i = 0; i <= 4; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
	}
	printf("max �� �� : %d\n", max);
	printf("min �� �� : %d\n", min);



#pragma endregion


	return 0;
}  