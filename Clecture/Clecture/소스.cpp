#include <stdio.h>

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ���
	// ���ǵǰ� ó���Ǵ� �����Դϴ�.

#define SIZE 5
	// ��ó�����?
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ����
	// ���� ó���ϴ� ����
#pragma endregion


void main()
{
#pragma region ������ ���ȭ

	float data = 99.865f;
	int* pointer = NULL;

	// ����Ʈ ������ �߾� ó�� ��ġ�� �� ����
	// ó���� �� �ִ� ũ��� ��������, �� ���� ó���� �� �ִ�
	// ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.
	// printf("pointer ������ ũ�� : %d\n", sizeof(pointer));

	// ������ ������ �����ϱ� ���� �ּ� ���� ������
	// ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.
	// pointer = &data;

	// ��� ���� ������
	/*
	// ������ ������ ����� �����Ͽ�, ������ ������ ����Ű��
	// �ִ� �ּҿ� �����ϴ� ���� ������ �� �����ϴ�.
	//*cptr = 999; //error

	int hp = 50;
	int mp = 999;

	const int* cptr = &hp;
	cptr = &mp;

	printf("cptr�� ����Ű�� �� : %d\n", *cptr);
	*/

	// ��� ������
	/*
	float decimal1 = 5.75f;
	float decimal2 = 9.99f;

	float* const floatptr = &decimal1;

	// ������ ����� ������ ������ ���ȭ�Ǿ� ���ο� �ּڰ�
	// �� ������ �� �����ϴ�.

	// floatptr = &decimal2; ERROR
	*floatptr = decimal2;
	printf("floatptr�� ����Ű�� �� : %f", *floatptr);
	*/

#pragma endregion

#pragma region ��ũ��

	// ��ũ���� ��� �ڷ����� �������� �����Ƿ�
	// �޸� ������ ������ ���� �ʽ��ϴ�.
	// �ɺ��� ���

	for (int i = 0; i < SIZE; i++)
	{
		printf("ä�� ��...\n");
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("��ų ���� ��...\n");
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("��� ��...\n");
	}
#pragma endregion

} 