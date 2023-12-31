#pragma once
#include <stdio.h>

#pragma region 매크로
// 프로그램 내에서 특정한 데이터가 문자열로
// 정의되고 처리되는 과정입니다.

#define SIZE 5
	// 전처리기란?
	// 프로그램이 컴파일되기 이전에 프로그램에 대한
	// 사전 처리하는 과정
#pragma endregion


void main()
{
#pragma region 포인터 상수화

	float data = 99.865f;
	int* pointer = NULL;

	// 포인트 변수의 중앙 처리 장치가 한 번에
	// 처리할 수 있는 크기로 정해지며, 한 번에 처리할 수 있는
	// 크기는 운영체제에 따라 크기가 결정됩니다.
	// printf("pointer 변수의 크기 : %d\n", sizeof(pointer));

	// 포인터 변수를 저장하기 위해 주소 값을 저장할
	// 변수의 자료형과 포인텨 변수의 자료형이 일치해야 합니다.
	// pointer = &data;

	// 상수 지시 포인터
	/*
	// 포인터 변수를 상수로 선언하여, 포인터 변수가 가리키고
	// 있는 주소에 존재하는 값을 변경할 수 없습니다.
	//*cptr = 999; //error

	int hp = 50;
	int mp = 999;

	const int* cptr = &hp;
	cptr = &mp;

	printf("cptr이 가르키는 값 : %d\n", *cptr);
	*/

	// 상수 포인터
	/*
	float decimal1 = 5.75f;
	float decimal2 = 9.99f;

	float* const floatptr = &decimal1;

	// 포인터 상수는 포인터 변수가 상수화되어 새로운 주솟값
	// 을 저장할 수 없습니다.

	// floatptr = &decimal2; ERROR
	*floatptr = decimal2;
	printf("floatptr이 가르키는 값 : %f", *floatptr);
	*/

#pragma endregion

#pragma region 매크로

	// 매크로의 경우 자료형이 존재하지 않으므로
	// 메모리 공간을 가지고 있지 않습니다.
	// 심볼릭 상수

	for (int i = 0; i < SIZE; i++)
	{
		printf("채집 중...\n");
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("스킬 숙련 중...\n");
	}

	for (int i = 0; i < SIZE; i++)
	{
		printf("사냥 중...\n");
	}
#pragma endregion

}