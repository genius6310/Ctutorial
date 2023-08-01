#include <stdio.h>
#include <math.h>

#pragma region 구조체
	// 여러개의 변수를 하나의 집합으로
	// 구조화한 다음 하나의 객체를 생성하는 것

struct GameObject
{
	int health; // 4
	char grade; // 1
	double x;   // 8

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.
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
#pragma region 구조체 선언

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

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에 CPU로 읽을 때 한 번에 읽을
	// 수 있도록, 컴파일러가 레지스터의 블록에 맞추어 바이트를
	// 패딩 해주는 최적화 작업입니다.

	// printf("GameObject의 크기 : %u\n", sizeof(struct GameObject));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에 크기가
	// 가장 큰 자료형의 배수가 되도록 정렬합니다.
	// 큰 자료형을 나중에 선언하여 메모리 절약이 가능

#pragma endregion

#pragma region 제곱근 함수
	
	int result = pow(10, 2);
	float decimal = 100.0f;
	// sqrt : 반환하는 값으로 long double, double, float
	decimal = sqrt(decimal);

	printf("result 변수의 결과: %d\n", result);
	printf("decimal 변수의 결과: %f\n", decimal);


#pragma endregion

#pragma region 두 점 사이의 거리

	float whatmatter = 0;

	struct Player player;
	player.x = 1.0f;
	player.y = 2.0f;

	struct Enermy enermy;
	enermy.x = 3.0f;
	enermy.y = 4.0f;

	whatmatter = sqrt(pow(enermy.x - player.x, 2) + pow(enermy.y - player.y, 2));
	printf("whatmatter 의 값 : %f", whatmatter);


#pragma endregion



	return 0;
}  