#pragma once
#include <stdio.h>
#include "SoundManager.h";
#include "ControlSound.h";

// ���� ��ó�����̶�?
// ���� �ҽ� ������ �ܺο� �ִ� ������ �����Ͽ�
// �ܺο� �ִ� �Լ��� ����� �� �ֵ��� �����ϴ� ���Դϴ�.

// ���� ó�� ��ó������ ��� ���̺귯�� ������ ������
// ���� <�ܺ�����.h>�� ��������, ���� ��ο��� �ܺ� ������
// ������ ���� "�ܺ� ����.h";�� �����ɴϴ�.

#pragma region ���� ����
	// �Լ� �ܺο� ����� ������ ��𿡼�����
	// ������ �� ������, ���α׷��� ����Ǿ�߸�,
	// �޸𸵿��� �����Ǵ� �����Դϴ�.

int level; // �ʱ�ȭ�Ǿ� ���� ���� ���� ���� (BSS ����)

int stage = 1; // �ʱ�ȭ�� �̷���� ���� ���� (.data ����)

#pragma endregion

#pragma region ���� ����
// ���� ������ ���� ������ Ư���� ���ÿ� ������ ������,
// ���α׷��� ����Ǿ�߸� �޸𸮿��� �����Ǵ� �����Դϴ�.

void ShowStat()
{
	static int score = 0;


	level++;
	score++;


	printf("level : %d\n", level);
	printf("score : %d\n", score);
}


#pragma endregion

void ShowStat1(int num)

{
	for (int i = 0; i < num; i++)
	{
		level++;

		printf("level : %d\n", level);
	}
}

int main()
{
#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ �Լ� ��������
	// ����� �����ϸ�, {}�� ����� �Ǹ�
	// �޸𸮿��� ������� �����Դϴ�.

	//	int data = 100; // A������ �ִ� data ����
	//	
	//	{
	//		int data = 200; // B ������ �ִ� data ����
	//		printf("data ������ �� : %d\n", data);
	//	}
	//	
	//	printf("data ������ �� : %d\n", data);

#pragma endregion

	// level = 100;
	// ShowStat();
	// ShowStat();
	// ShowStat();

#pragma region ���� �� (Short-curcuit)
	// ù ��° �μ��� ���� �����ϱ⿡ ������� ���� ��쿡��
	// �� ��° �μ��� �򰡵Ǵ� �Ϻ� ���α׷��� ����� �Ϻ� �� �����Դϴ�.

	//	int i = 1;
	//	int j = 0;
	//	
	//	if (i > j || ++j)
	//	{
	//		printf("j�� �� : %d\n", j);
	//	}
	//	
	//	if (i < j && j++)
	//	{
	//		printf("j�� �� : %d\n", j);
	//	}
	//	else
	//	{
	//		printf("j�� �� : %d\n", j);
	//	}
#pragma endregion
	Play();
	Volume();

	return 0;
}