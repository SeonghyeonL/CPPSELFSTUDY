#include <iostream>
using namespace std;

// 기본 입출력
/*
int main()
{
    int age;
    cout << "여러분의 나이를 입력해 주세요 : ";
    cin >> age;
    cout << "여러분의 나이는 " << age << "살 입니다." << endl;
    return 0;
}
*/

// 출력 (진수)
/*
int main()
{
	int a = 10;
	cout << "숫자 10을 10진수로 표현하면 " << a << "이며, " << endl;
	cout << oct;
	cout << "숫자 10을  8진수로 표현하면 " << a << "이며, " << endl;
	cout << hex;
	cout << "숫자 10을 16진수로 표현하면 " << a << " 입니다.";
	return 0;
}
*/

// 명시적 타입 변환 : (변환할타입) 변환할데이터 or 변환할타입 (변환할데이터)
/*int main(void)
{
	int num1 = 1;
	int num2 = 4;

	double result1 = num1 / num2;
	double result2 = (double)num1 / num2;
	double result3 = double(num1) / num2;

	cout << "result1에 저장된 값은 " << result1 << "입니다." << endl;
	cout << "result2에 저장된 값은 " << result2 << "입니다." << endl;
	cout << "result3에 저장된 값은 " << result3 << "입니다.";
	return 0;
}*/

// 산술 연산자
/*int main(void)
{
	int num1 = 10;
	int num2 = 4;

	cout << "+ 연산자에 의한 결괏값은 " << num1 + num2 << "입니다." << endl;
	cout << "- 연산자에 의한 결괏값은 " << num1 - num2 << "입니다." << endl;
	cout << "* 연산자에 의한 결괏값은 " << num1 * num2 << "입니다." << endl;
	cout << "/ 연산자에 의한 결괏값은 " << num1 / num2 << "입니다." << endl;
	cout << "% 연산자에 의한 결괏값은 " << num1 % num2 << "입니다.";
	return 0;
}*/

// 대입 연산자
/*int main(void)
{
	int num1 = 8;
	int num2 = 8;
	int num3 = 8;

	num1 = num1 + 5;
	num2 += 5;
	num3 = +5;

	cout << "-  연산자에 의한 결괏값은 " << num1 << "입니다." << endl;
	cout << "+= 연산자에 의한 결괏값은 " << num2 << "입니다." << endl;
	cout << "=+ 연산자에 의한 결괏값은 " << num3 << "입니다.";
	return 0;
}*/

// 증감 연산자
/*int main(void)
{
	int x = 10;
	int y = x-- + 5 + --x;

	cout << "변수 x의 값은 " << x << "이고, 변수 y의 값은 " << y << "로 변했습니다.";
	return 0;
}*/

// 0: false, 그 외: true

// 비트 연산자
/*int main(void)
{
	int num1 = 15;
	int num2 = 8;

	cout << "~  연산자에 의한 결괏값은 " << (~num1) << "입니다." << endl;
	cout << "<< 연산자에 의한 결괏값은 " << (num2 << 2) << "입니다." << endl;
	cout << ">> 연산자에 의한 결괏값은 " << (num2 >> 2) << "입니다.";
	return 0;
}*/

// 삼항 연산자
/*int main(void)
{
	int num1 = 11;
	int num2 = 10;
	int result;

	result = (num1 < num2) ? num1 : num2;

	cout << "둘 중에 더 작은수는 " << result << "입니다." << endl;
	cout << "첫 번째 수는 " << num1 << "이고, 두 번째 수는 " << num2 << "입니다.";
}*/

// sizeof 연산자
/*int main(void)
{
	cout << "char형에 할당되는 메모리 크기는 " << sizeof(char) << " 바이트" << endl;
	cout << "short형에 할당되는 메모리 크기는 " << sizeof(short) << " 바이트" << endl;
	cout << "int형에 할당되는 메모리 크기는 " << sizeof(int) << " 바이트" << endl;
	cout << "long형에 할당되는 메모리 크기는 " << sizeof(long) << " 바이트" << endl;
	cout << "long long형에 할당되는 메모리 크기는 " << sizeof(long long) << " 바이트" << endl;
	cout << "float형에 할당되는 메모리 크기는 " << sizeof(float) << " 바이트" << endl;
	cout << "double형에 할당되는 메모리 크기는 " << sizeof(double) << " 바이트" << endl;
	cout << "long double형에 할당되는 메모리 크기는 " << sizeof(long double) << " 바이트";
}*/

// CPP에 추가된 연산자
// 범위 지정 연산자: ::식별자 / 클래스이름::식별자 / 네임스페이스::식별자 / 열거체::식별자
// 멤버 포인터 연산자: 클래스타입의객체.*멤버이름 / 클래스타입객체의포인터->*멤버이름
// typeid 연산자: typeid(표현식)

// 조건문 (if)
/*int main(void)
{
	int num;
	cin >> num;
	if (num < 5)
	{	cout << "입력하신 수는 5보다 작습니다." << endl;	}
	else if (num == 5)
	{	cout << "입력하신 수는 5입니다." << endl;	}
	else
	{	cout << "입력하신 수는 5보다 큽니다." << endl;	}
	return 0;
}*/

// 조건문 (switch)
/*int main(void)
{
	int num;
	cin >> num;
	switch (num)
	{
	case 1: cout << "입력하신 수는 1입니다." << endl; break;
	case 2:	cout << "입력하신 수는 2입니다." << endl; break;
	case 3: cout << "입력하신 수는 3입니다." << endl; break;
	case 4: cout << "입력하신 수는 4입니다." << endl; break;
	case 5: cout << "입력하신 수는 5입니다." << endl; break;
	default: cout << "1부터 5까지의 수만 입력해 주세요!" << endl; break;
	}
	return 0;
}*/

// 반복문 (while)
/*int main(void)
{
	int i = 0, num;
	cin >> num;
	while (i < num)
	{
		cout << "while 문이 현재 " << i + 1 << " 번째 반복 실행중입니다." << endl;
		i++; // 이 부분을 삭제하면 무한 루프에 빠지게 됨
	}
	cout << "while 문이 종료된 후 변수 i의 값은 " << i << "입니다." << endl;
	return 0;
}*/

// 반복문 (do while)
/*int main(void)
{
	int i = 0, num;
	cin >> num;
	do {
		cout << "do / while 문이 현재 " << i + 1 << " 번째 반복 수행중입니다." << endl;
		i++; // 이 부분을 삭제하면 무한 루프에 빠지게 됨
	} while (i > num);
	cout << "do / while 문이 종료된 후 변수 i의 값은 " << i << "입니다." << endl;
}*/

// 반복문 (for)
/*int main(void)
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) // 변수 i는 이 for 문이 종료되면 같이 소멸됨.
	{ cout << "첫 번째 for 문이 " << i + 1 << " 번째 반복 수행중입니다." << endl; }
	for (int i = 0; i < num; i++) // 따라서 변수 i를 다시 선언해도 괜찮음.
	{ cout << "두 번째 for 문이 " << i + 1 << " 번째 반복 수행중입니다." << endl; }
	return 0;
}*/

// 범위 기반의 for문
/*int main(void)
{
	int arr[5] = { 1, 3, 5, 7, 9 };

	for (int element : arr)
	{
		cout << element << " ";
	}
	return 0;
}*/

// continue문
/*int main(void)
{
	int except_num = 2;

	for (int i = 0; i <= 100; i++)
	{
		if (i % except_num == 0)
		{
			continue;
		}
		cout << i << endl;
	}
	return 0;
}*/

// break문
/*int main(void)
{
	int num = 1, sum = 0;
	int end_num;
	cin >> end_num;

	while (1) // 무한 루프 
	{
		sum += num;
		if (num == end_num)
		{	break;	}
		num++;
	}

	cout << "1부터 " << end_num << "까지 더한 값은 " << sum << "입니다.";
	return 0;
}*/

// 배열 기초
/*int main(void)
{
	int sum = 0;
	int grade[3];	// 길이가 3인 int형 배열 선언 

	// 인덱스를 이용한 배열의 초기화
	grade[0] = 85;	// 국어 점수 
	grade[1] = 65;	// 영어 점수 
	grade[2] = 90;	// 수학 점수 

	for (int i = 0; i < 3; i++)
	{
		sum += grade[i];	// 인덱스를 이용한 배열로의 접근 
	}

	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum / 3 << "점입니다.";
	return 0;
}*/

// 배열의 특징
/*int main(void)
{
	int sum = 0;
	int grade[3] = { 85, 65, 90 };	// grade[0], grade[1], grade[2]만 선언 및 초기화 
	grade[3] = 100;					// grade[3]를 선언하지 않고 초기화 진행 

	for (int i = 0; i < 4; i++)		// grade[3]도 수식에 포함 
	{
		sum += grade[i];			// 인덱스를 이용한 배열의 접근 
	}

	cout << "국영수 과목 총 점수 합계는 " << sum << "점이고, 평균 점수는 " << (double)sum / 3 << "점입니다.";
	return 0;

	// 오류 나타남
}*/

// 배열 길이 구하기
/*int main(void)
{
	int grade[] = { 85, 65, 90 };					// 배열의 길이를 명시하지 않음 
	int len = sizeof(grade) / sizeof(grade[0]);	// 배열의 길이를 구하는 공식 

	cout << "배열 grade의 길이는 " << len << "입니다.";
	return 0;
}*/

// 2차원 배열
/*int main(void)
{
	int arr1[2][3] = { 10, 20, 30, 40 };
	int arr2[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	cout << "arr1의 배열 요소의 값" << endl;
	cout << arr1[0][0] << " ";
	cout << arr1[0][1] << " ";
	cout << arr1[0][2] << " ";
	cout << arr1[1][0] << " ";
	cout << arr1[1][1] << " ";
	cout << arr1[1][2] << endl;

	cout << "arr2의 배열 요소의 값" << endl;
	cout << arr2[0][0] << " ";
	cout << arr2[0][1] << " ";
	cout << arr2[0][2] << " ";
	cout << arr2[1][0] << " ";
	cout << arr2[1][1] << " ";
	cout << arr2[1][2];
	return 0;
}*/

// 2차원 배열 일부만 초기화
/*#include <iomanip>
int main(void)
{
	int arr_col_len, arr_row_len;
	int arr[3][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};
	// 행의 길이는 생략 가능, 열의 길이는 반드시 명시!

	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);				// 2차원 배열의 열의 길이를 계산함 
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);	// 2차원 배열의 행의 길이를 계산함 

	cout << "arr의 배열 요소의 값" << endl;
	for (int i = 0; i < arr_row_len; i++)
	{
		for (int j = 0; j < arr_col_len; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	return 0;
}*/

// 포인터