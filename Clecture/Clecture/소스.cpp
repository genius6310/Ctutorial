#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	int buffer[5] = {0, };

	// int
	// [ ] [ ] [ ] [ ] [ ]


	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �˴ϴ�.
	buffer[0] = 100;
	
	// �迭�� ��� ù ��° ��Ҵ� 0���� �����մϴ�.
	// printf("buffer�� 0�� ° index�� : %d \n", buffer[0]);
	// printf("buffer�� 1�� ° index�� : %d \n", buffer[1]);
	// printf("buffer�� 2�� ° index�� : %d \n", buffer[2]);

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������
	// ��ҿ� ���� �迭�� ũ�Ⱑ �����˴ϴ�.
	float dataList[] = { 1.11f, 2.22f, 3.33f };

	// �迭�� �������� �޸� ������ ������, �迭�� �̸���
	// �迭�� ���� �ּҸ� ����ŵ�ϴ�.
	// printf("dataList�� �ּ� : %p\n", dataList);
	// printf("dataList[0]�� �ּ� : %p\n", &dataList[0]);

	// float* floatPtr = dataList;
	// 
	// printf("dataList[0]�� �ּ� : %p\n", floatPtr);
	// printf("dataList[0]�� �� : %f\n", *(floatPtr+0));
	// 
	// floatPtr = floatPtr + 2;
	// 
	// printf("dataList[0]�� �ּ� : %p\n", floatPtr);
	// printf("dataList[0]�� �� : %f\n", *(floatPtr));

	// �迭�� ũ�⸦ ����� �����͸� ������ �� �����ϴ�.
	// ex) dataList[4] = 36.1f; ERROR
	

#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������
	// �����Դϴ�.

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� �����
	// ����Ű���� �� �� ������, ���ڿ� ����� ������
	// ������ �б� ���� ������ ����Ǳ� ������ ���ڿ���
	// ���� ������ �� �����ϴ�.

	const char* character = "Hello World";

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ
	// �����Ǹ�, �������� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰��˴ϴ�.

	character = "Hello\0Class";

	// ���ڿ��� ��� ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ�
	// ��ȿ�� ���ڱ����� ���ڿ��� ����մϴ�. \0

	printf("character�� �� : %s\n", character);
	printf("character�� �� : %c\n", *(character+4));

#pragma endregion

} 