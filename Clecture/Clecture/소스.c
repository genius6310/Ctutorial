#include <stdio.h>
#include <math.h>

#pragma region ����ü
	// �������� ������ �ϳ��� ��������
	// ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��

struct GameObject
{
	int health; // 4
	char grade; // 1
	double x;   // 8

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
};


#pragma endregion

struct Player
{
	float x;
	float y;

};

struct Enermy
{
	float x;
	float y;


};

int main()
{
#pragma region ����ü ����

	// struct GameObject gameObject;
	// gameObject.health = 100;
	// gameObject.x = 3.45;
	// 
	// printf("gameObject.x : %lf\n", gameObject.x);
	// printf("gameObject.health : %d\n", gameObject.health);
	// 
	// struct GameObject object = { 300,6.25 };
	// 
	// printf("Object.x : %lf\n", object.x);
	// printf("Object.health : %d\n", object.health);

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿� CPU�� ���� �� �� ���� ����
	// �� �ֵ���, �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ��
	// �е� ���ִ� ����ȭ �۾��Դϴ�.

	// printf("GameObject�� ũ�� : %u\n", sizeof(struct GameObject));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ
	// ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
	// ū �ڷ����� ���߿� �����Ͽ� �޸� ������ ����

#pragma endregion

#pragma region ������ �Լ�
	
	int result = pow(10, 2);
	float decimal = 100.0f;
	// sqrt : ��ȯ�ϴ� ������ long double, double, float
	decimal = sqrt(decimal);

	printf("result ������ ���: %d\n", result);
	printf("decimal ������ ���: %f\n", decimal);


#pragma endregion

#pragma region �� �� ������ �Ÿ�

	float whatmatter = 0;

	struct Player player;
	player.x = 1.0f;
	player.y = 2.0f;

	struct Enermy enermy;
	enermy.x = 3.0f;
	enermy.y = 4.0f;

	whatmatter = sqrt(pow(enermy.x - player.x, 2) + pow(enermy.y - player.y, 2));
	printf("whatmatter �� �� : %f", whatmatter);


#pragma endregion



	return 0;
}  