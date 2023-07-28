#pragma once
#include <stdio.h>

#pragma region 인라인 함수
// 함수를 호출하는 대신 함수가 호출되는 위치마다
// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

inline void Information()
{
	int health = 100;
	const char* name = "Slime";

	printf("체력 : %d\n", health);
	printf("이름 : %s\n", name);
}

#pragma endregion


int main()
{
#pragma region 인라인 함수
	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가
	// 빠르지만, 인라인 함수를 많이 사용하게 되면 함수의 코드가
	// 복사되기 때문에 실행 파일의 크기가 커지게 됩니다.

	//Information();

	// 인라인 함수의 경우 컴파일 시점에 확정되며, 컴파일 시 인라인
	// 함수로 선언하더라도 상황에 따라 일반 함수로 변화되기도 합니다.
#pragma endregion

#pragma region 정수의 승격
	// 일반적으로 CPU가 처리하기에 가장 적합한
	// 크기의 정수 자료형은 int 이므로, int형 보다
	// 작은 자료형은 int 자료형으로 변환하는 것입니다.

	// char a = 10;  // 1 byte
	// short b = 20; // 2 byte
	// printf("a 변수와 b 변수를 더한 메모리 크기 : %d", sizeof(a + b));



#pragma endregion

#pragma region 부호없는 자료형

	// char alphabet = 127; // -128 ~ 127
	// unsigned char unAlphabet = 255; // 0 ~ 255
	// 
	// // unsigned -> "%u"
	// 
	// printf("alphabet 변수의 값 : %d\n", alphabet);
	// printf("unAlphabet 변수의 값 : %u\n", unAlphabet);

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