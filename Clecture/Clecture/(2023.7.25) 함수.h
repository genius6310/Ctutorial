#pragma once
#include <stdio.h>

// �ڷ��� �Լ��� �̸� (�Ű� ����)
void Function()
{
	// ���� �̸��� �Լ��� ������ �� �����ϴ�.
	printf("Function\n");
}

// ��ȯ��
// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ����
// ������ ���ϴ� ���� ���� �� �����ϴ�.

char charFunction()
{
	return 'A';
}

#pragma region �Ű� ����
// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η�
// �����ϱ� ���� ����ϴ� �����Դϴ�.

void Calculator(int x)
{
	x = 450;
	printf("x�� �� : %d\n", x);
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//�Ű� ������ �Լ� ���ο����� ������ �̷������,
// �Լ��� ����Ǹ� �޸𸮿��� �������, ���� ����
// �Ű� ������ ������ �� �ֽ��ϴ�.

#pragma endregion

void main()
{
#pragma region ����(void) ������
	// // �ڷ����� �������� ���� ���·� ���
	// // �ڷ����� ������ �� �ִ� �������Դϴ�.
	// 
	// // int( 4 byte )
	// int data = 100;
	// 
	// // float ( 4 byte )
	// float pi = 3.141592f;
	// 
	// void * ptr = &data;
	// 
	// // ���� �����ʹ� �޸� �ּҿ� �����ؼ�
	// // ���� ������ �� �����ϴ�.
	// // *ptr = 100; error
	// 
	// *(int*)ptr = 200;
	// 
	// printf("ptr�� ����Ű�� ���� : %d \n", *(int *)ptr);
	// printf("data�� ���� : %d \n", data);
	// 
	// ptr = &pi;
	// 
	// printf("ptr�� ����Ű�� ���� : %f \n", *(float*)ptr);
	// printf("pi�� ���� : %f \n",pi);
#pragma endregion

#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ�
	// ���� ���������� ����� �ڵ��� �����Դϴ�.
	// Function();
	// printf("%c\n", charFunction());
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������
	// ���޵Ǵ� ���Դϴ�.

	// int value = 100;
	// Calculator(value);
	// printf("value�� �� : %d\n", value);

	// �� �ٲٱ�
	int a = 10;
	int b = 20;
	printf("a�� �� : %d \nb�� �� : %d\n", a, b);
	Swap(&a, &b);
	printf("a�� �� : %d \nb�� �� : %d\n", a, b);

#pragma endregion

}