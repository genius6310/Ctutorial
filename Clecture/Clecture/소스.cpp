#include <stdio.h>

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

inline void Information()
{
	int health = 100;
	const char* name = "Slime";

	printf("ü�� : %d\n", health);
	printf("�̸� : %s\n", name);
}

#pragma endregion


int main()
{
#pragma region �ζ��� �Լ�
	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ���
	// ��������, �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡
	// ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.

	//Information();

	// �ζ��� �Լ��� ��� ������ ������ Ȯ���Ǹ�, ������ �� �ζ���
	// �Լ��� �����ϴ��� ��Ȳ�� ���� �Ϲ� �Լ��� ��ȭ�Ǳ⵵ �մϴ�.
#pragma endregion

#pragma region ������ �°�
	// �Ϲ������� CPU�� ó���ϱ⿡ ���� ������
	// ũ���� ���� �ڷ����� int �̹Ƿ�, int�� ����
	// ���� �ڷ����� int �ڷ������� ��ȯ�ϴ� ���Դϴ�.

	// char a = 10;  // 1 byte
	// short b = 20; // 2 byte
	// printf("a ������ b ������ ���� �޸� ũ�� : %d", sizeof(a + b));



#pragma endregion

#pragma region ��ȣ���� �ڷ���

	// char alphabet = 127; // -128 ~ 127
	// unsigned char unAlphabet = 255; // 0 ~ 255
	// 
	// // unsigned -> "%u"
	// 
	// printf("alphabet ������ �� : %d\n", alphabet);
	// printf("unAlphabet ������ �� : %u\n", unAlphabet);

	// char a = -5;
	// unsigned char b = -5;
	// 
	// int data1 = a;
	// int data2 = b;
	// 
	// printf("data1 : %d, data2d : %d \n", data1, data2);
	// printf("data1 : %u, data2d : %u \n", data1, data2);
#pragma endregion

	return 0;
} 