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
int main(void)
{
	int num1 = 15;
	int num2 = 8;

	cout << "~  연산자에 의한 결괏값은 " << (~num1) << "입니다." << endl;
	cout << "<< 연산자에 의한 결괏값은 " << (num2 << 2) << "입니다." << endl;
	cout << ">> 연산자에 의한 결괏값은 " << (num2 >> 2) << "입니다.";
	return 0;
}