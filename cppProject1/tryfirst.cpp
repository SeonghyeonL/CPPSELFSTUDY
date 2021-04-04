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
/*int main(void)
{
	int num1 = 1234;
	double num2 = 3.14;

	int* ptr_num1 = &num1;
	double* ptr_num2 = &num2;

	cout << "포인터의 크기는 " << sizeof(ptr_num1) << "입니다." << endl;
	cout << "포인터 ptr_num1가 가리키고 있는 주소값은 " << ptr_num1 << "입니다." << endl;
	cout << "포인터 ptr_num1가 가리키고 있는 주소에 저장된 값은 " << *ptr_num1 << "입니다." << endl;
	cout << "포인터 ptr_num2가 가리키고 있는 주소값은 " << ptr_num2 << "입니다." << endl;
	cout << "포인터 ptr_num2가 가리키고 있는 주소에 저장된 값은 " << *ptr_num2 << "입니다.";
	return 0;
}*/

// 포인터 연산
/*int main(void)
{
	int arr[3] = { 10, 20, 30 };	// 배열 선언 
	int* ptr_arr = arr;			// 포인터에 배열의 이름을 대입함.

	cout << "배열의 이름을 이용하여 배열 요소에 접근 : "
		<< arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
	cout << "    포인터를 이용하여 배열 요소에 접근 : "
		<< ptr_arr[0] << ", " << ptr_arr[1] << ", " << ptr_arr[2] << endl;
	cout << "배열의 이름으로 포인터 연산을 해 배열 요소에 접근 : "
		<< *(arr + 0) << ", " << *(arr + 1) << ", " << *(arr + 2) << endl;
	// 공식: arr[n] == *(arr + n)

	cout << "배열의 이름을 이용한 배열의 크기 계산 : " << sizeof(arr) << endl;
	cout << "    포인터를 이용한 배열의 크기 계산 : " << sizeof(ptr_arr);
	//  포인터를 이용한 크기 계산 → 배열의 크기가 아닌 포인터 변수 자체의 크기가 출력
	return 0;
}*/

// new & delete 연산자
/*int main(void)
{
	int* ptr_int = new int;
	// 타입* 포인터이름 = new 타입;
	*ptr_int = 100;

	double* ptr_double = new double;
	*ptr_double = 100.123;

	cout << "int형 숫자의 값은 " << *ptr_int << "입니다." << endl;
	cout << "int형 숫자의 메모리 주소는 " << ptr_int << "입니다." << endl;

	cout << "double형 숫자의 값은 " << *ptr_double << "입니다." << endl;
	cout << "double형 숫자의 메모리 주소는 " << ptr_double << "입니다." << endl;

	delete ptr_int;
	delete ptr_double;
	// delete 포인터이름;
	return 0;
}*/

// 문자열 (string 클래스 사용 X)
/*int main(void)
{
	const int SIZE = 20;
	char address[SIZE];
	char name[SIZE];

	cout << "자신의 이름을 적어주세요 : ";
	//cin >> name;
	// cin 객체는 띄어쓰기, 탭 문자, 캐리지 리턴 문자 등을 모두 문자열의 끝으로 인식
	//cin.get(name, SIZE).get();
	// 여전히 20바이트 이상의 이름을 입력할 경우, 도시명을 입력받지 못함
	cin.get(name, SIZE).ignore(SIZE, '\n');
	cout << "자신이 살고 있는 도시를 적어주세요 : ";
	//cin >> address;
	//cin.get(address, SIZE).get();
	cin.get(address, SIZE).ignore(SIZE, '\n');
	cout << address << "에 살고 있는 " << name << "님~ 감사합니다!";
}*/

// 문자열 (string 클래스 사용 O)
/*#include <string>
int main(void)
{
	string address, name;
	cout << "자신의 이름을 적어주세요 : ";
	getline(cin, name);
	cout << "자신이 살고 있는 도시를 적어주세요 : ";
	getline(cin, address);
	cout << address << "에 살고 있는 " << name << "님~ 감사합니다!";
	return 0;
	// 모든 문제 해결됨!
}*/

// 문자열 선언 및 초기화
/*#include <string>
int main(void)
{
	string dog;
	cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl;
	dog = "Navi";
	cout << dog << "! 정말 이쁜 이름이네요!" << endl;
	cout << "현재 dog 변수의 길이는 " << dog.length() << "입니다." << endl;
	cout << "강아지 이름의 첫 글자는 바로 " << dog[0] << "입니다.";
	return 0;
}*/

// 문자열 처리
/*#include <string>
int main(void)
{
	string str1 = "C++ is Cool!";
	string str2;
	str2 = str1;	// 문자열 대입 연산 
	cout << str2 << endl;

	string strr1 = "C++ is ";
	string strr2 = "Cool! and funny!";
	string strr3;
	strr3 = strr1 + strr2; // 문자열 결합 연산
	cout << strr3 << endl;
	strr1 += strr2;       // 문자열 추가 연산
	cout << strr1 << endl;

	// string 객체를 이용한 문자열 입력 → cin 객체, 출력 → cout 객체 사용
	// cin 객체를 이용한 문자열의 입력은 한 단어 단위로 수행됨
	// 문자열을 한 행(line)씩 읽고 싶을 때는 getline() 함수를 사용해야 함
	string stname, stsubject;
	cout << "자신의 이름을 적어주세요 : ";
	getline(cin, stname);
	cout << "가장 자신있는 과목을 적어주세요 : ";
	getline(cin, stsubject);
	cout << stname << "님이 가장 자신있어 하는 과목은 바로 " << stsubject << "입니다!";

	return 0;
}*/

// string 메소드
/*#include <string>
// length(), size(), append(), find(), compare(), replace(), capacity(), max_size()
int main(void)
{
	string str1 = "C++ Programming";
	string str2 = "C++ Programming";
	cout << "문자열 str1의 길이는 " << str1.length() << "입니다." << endl;
	cout << "문자열 str2의 길이는 " << str2.size() << "입니다." << endl;
	// length는 문자열 길이, size는 해당 string 객체의 메모리 사용 크기

	// 문자열.append(추가할문자열); → 추가할 문자열을 맨 끝에 추가
	// 문자열.append(추가할문자열, 시작위치, 개수);
	//				  → 추가할 문자열의 시작 위치부터 개수만큼만 맨 끝에 추가
	// 문자열.append(개수, 추가할문자); → 추가할 문자를 개수만큼 맨 끝에 추가
	string s1str1, s1str2, s1str3;
	s1str1.append("C++ Programming");
	s1str2.append("C++ Programming", 4, 7);
	s1str3.append(4, 'X');
	cout << s1str1 << endl;
	cout << s1str2 << endl;
	cout << s1str3 << endl;

	// 문자열.find(찾을문자열); → 인덱스 0부터 문자열을 찾아, 그 (시작)위치를 반환
	// 문자열.find(찾을문자); → 인덱스 0부터 문자를 찾아, 그 위치를 반환
	// 문자열.find(찾을문자열, 시작위치); → 시작 위치부터 문자열을 찾아, 그 위치를 반환
	string s2str = "C++ Programming";
	cout << s2str.find("Pro") << endl;
	cout << s2str.find('r') << endl;
	if (s2str.find("Pro", 5) != string::npos)
	{
		cout << "해당 문자열을 찾았습니다." << endl;
	}
	else
	{
		cout << "해당 문자열을 찾지 못했습니다." << endl;
	}
	// 정적 상수인 string::npos는 string 클래스에 static const size_type= -1 로 명시됨

	// str1.compare(str_02) == 0 → str1과 str2이 같을 경우
	// str1.compare(str_02) < 0  → str1이 str2보다 사전 편찬순으로 앞에 있을 경우
	// str1.compare(str_02) > 0  → str1이 str2보다 사전 편찬순으로 뒤에 있을 경우
	string s3str1 = "ABC";
	string s3str2 = "ABD";
	if (s3str1.compare(str2) == 0)
	{
		cout << s3str1 << "이 " << s3str2 << "와 같음" << endl;
	}
	else if (s3str1.compare(s3str2) < 0)
	{
		cout << s3str1 << "이 " << s3str2 << "보다 사전 편찬 순으로 앞에 있음" << endl;
	}
	else
	{
		cout << s3str1 << "이 " << s3str2 << "보다 사전 편찬 순으로 뒤에 있음" << endl;
	}

	// 문자열.replace(대체할문자열의시작위치, 대체할문자열의길이, 새로운문자열);
	// → 전달된 시작 위치부터 문자열의 길이만큼을 제거한 후에, 새로운 문자열을 삽입함
	string s4str1 = "C++ is very nice!";
	string s4str2 = "nice";
	string s4str3 = "awesome";
	string::size_type index = s4str1.find(s4str2);
	if (index != string::npos)
	{
		s4str1.replace(index, s4str2.length(), s4str3);
	}
	cout << s4str1 << endl;

	// capacity() : 해당 문자열이 재대입 받지 않고 저장 가능한 최대 문자열 길이 반환
	// max_size() : 해당 문자열이 최대한 대입받으면 가질 수 있는 최대 문자열 길이 반환
	string s5str = "C++ programming";
	cout << "문자열 str의 length는 " << s5str.length() << "입니다." << endl;
	cout << "문자열 str의 capacity는 " << s5str.capacity() << "입니다." << endl;
	cout << "문자열 str의 max_size는 " << s5str.max_size() << "입니다.";

	return 0;
}*/

// 구조체
/*#include <string>
struct book
{
	string title;
	string author;
	int price;
};
int main(void)
{
	book web_book = { "HTML과 CSS", "홍길동", 28000 };
	book java_book = { "Java language", "이순신" };
	cout << "첫 번째 책의 제목은 " << web_book.title << "이고, 저자는 " << web_book.author
		<< "이며, 가격은 " << web_book.price << "원입니다." << endl;
	cout << "두 번째 책의 제목은 " << java_book.title << "이고, 저자는 " << java_book.author
		<< "이며, 가격은 " << java_book.price << "원입니다.";
	return 0;
}*/

// 함수와 구조체
/*struct Prop
{
	int savings;
	int loan;
};
int CalcProperty1(int, int);
int CalcProperty2(Prop*);
Prop InitProperty(void); int CalcProperty3(const Prop*);
int main(void)
{
	int hong_prop;
	//Prop hong = { 10000000, 4000000 };
	//hong_prop = CalcProperty1(hong.savings, hong.loan);
		// 구조체의 멤버 변수를 함수의 인수로 전달
	//hong_prop = CalcProperty2(&hong);
		// 구조체의 주소를 함수의 인수로 전달
	Prop hong; hong = InitProperty();
	hong_prop = CalcProperty3(&hong);
		// 구조체의 멤버 변수를 함수의 인수로 전달함
	cout << "홍길동의 재산은 적금 " << hong.savings << "원에 대출 " << hong.loan
		<< "원을 제외한 총 " << hong_prop << "원입니다.";
	return 0;
}
int CalcProperty1(int s, int l)
{
	return (s - l);
}
int CalcProperty2(Prop* money)
{
	money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
	return (money->savings - money->loan);
}
Prop InitProperty(void)
{
	Prop hong_prop = { 10000000, 4000000 };
	return hong_prop; // 구조체를 함수의 반환값으로 반환함.
}
int CalcProperty3(const Prop* money)
// const 키워드를 사용하여 구조체의 데이터를 직접 수정하는 것을 방지
{
	//money->savings = 100; // 호출된 함수에서 원본 구조체의 데이터를 변경
	return (money->savings - money->loan);
}*/

// 중첩된 구조체
/*#include <string>
struct Name
{
	string first;
	string last;
};
struct Friends
{
	Name first_name;
	string address;
	string job;
};
int main(void)
{
	Friends hong =
	{
		{ "길동", "홍" },
		"서울시 강남구 역삼동",
		"학생"
	};
	cout << hong.address << endl << endl;
	cout << hong.first_name.last << hong.first_name.first << "에게," << endl;
	cout << "그동안 잘 지냈니? 아직도 " << hong.job << "이니?" << endl;
	cout << "다음에 꼭 한번 보자." << endl << "잘 지내.";
	return 0;
}*/

// 구조체 크기
/*struct TypeSize
{
	char a;
	int b;
	double c;
};
int main(void)
{
	cout << "구조체 TypeSize의 각 멤버의 크기는 다음과 같습니다." << endl;
	cout << sizeof(char) << ", " << sizeof(int) << ", " << sizeof(double) << endl << endl;
	cout << "구조체 TypeSize의 크기는 다음과 같습니다." << endl;
	cout << sizeof(TypeSize); // 13이 아니고 16임! (바이트 패딩(byte padding) 때문)
	return 0;
}*/

// 공용체 (union)
/*// 모든 멤버 변수가 하나의 메모리 공간을 공유
// 공용체는 한 번에 하나의 멤버 변수밖에 사용할 수 없음!
// 공용체는 크기가 가장 큰 멤버 변수의 크기로 메모리를 할당받음
// 따라서 같은 크기로 구성된 배열 요소에 다양한 크기의 데이터를 저장할 수 있음!
union ShareData
{
	unsigned char a;
	unsigned short b;
	unsigned int c;
};
int main(void)
{
	ShareData var;
	var.c = 0x12345678;
	// 공용체의 한 멤버 변수만을 초기화하면, 나머지 멤버 변수들도 같은 데이터를 공유함
	cout << hex;
	cout << var.a << endl;
	cout << var.b << endl;
	cout << var.c;
	return 0;
}*/

// 열거체(enumerated types)
/*// 새로운 타입을 선언하면서 동시에 그 타입이 가질 수 있는 정수형 상숫값도 같이 명시
enum Weather { SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30 };
int main(void)
{
	int input;
	Weather wt;
	cout << "오늘의 날씨를 입력해 주세요 : " << endl;
	cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
	cin >> input;
	wt = (Weather)input;
	switch (wt)
	{
	case SUNNY:
		cout << "오늘의 날씨는 아주 맑아요!"; break;
	case CLOUD:
		cout << "오늘의 날씨는 흐리네요!"; break;
	case RAIN:
		cout << "오늘의 날씨는 비가 주룩주룩 오네요!"; break;
	case SNOW:
		cout << "오늘의 날씨는 하얀 눈이 내려요!"; break;
	default:
		cout << "정확한 상숫값을 입력해 주세요!"; break;
	}
	cout << endl << "열거체 Weather의 각 상숫값은 " << SUNNY << ", " << CLOUD << ", "
		<< RAIN << ", " << SNOW << "입니다.";
	return 0;
}*/

// 함수
/*int SmallNum(int, int); // main 전에 함수의 원형 선언!
int main(void)
{
	int result;
	result = SmallNum(4, 6);
	cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;
	result = SmallNum(8, 6);
	cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;
	result = SmallNum(2, 8);
	cout << " 두 수 중 더 작은 수는 " << result << "입니다." << endl;
	return 0;
}
int SmallNum(int num1, int num2)
{
	if (num1 <= num2) { return num1; }
	else { return num2; }
}*/

// 값에 의한 전달(call by value) - 값만 복사, 별개의 변수
/*void Local(int);
int main(void)
{
	int var = 10;
	cout << "변수 var의 초기값은 " << var << "입니다." << endl;
	Local(var);
	cout << "Local() 함수 호출 후 변수 var의 값은 " << var << "입니다.";
	return 0;
}
void Local(int num)
{	num += 10;	}*/

// 참조에 의한 전달(call by reference) - 원본 데이터 전달, 주소값
/*void Local(int&);
int main(void)
{
	int var = 10;
	cout << "변수 var의 초기값은 " << var << "입니다." << endl;
	Local(var);
	cout << "Local() 함수 호출 후 변수 var의 값은 " << var << "입니다.";
	return 0;
}
void Local(int& num)
{	num += 10;	}*/

// 참고) main 함수의 원형 → void(또는 int) main(int argc,char *argv[]);

// 재귀 호출
/*int RecursiveSum(int);
int main(void)
{
	int n;
	cout << "n의 값을 입력하세요: ";
	cin >> n;
	cout << "1부터 " << n << "까지의 합: " << RecursiveSum(n);;
	return 0;
}
int RecursiveSum(int n)
{
	if (n == 1)						// n이 1이면, 그냥 1을 반환함. 
	{	return 1;	}
	return n + RecursiveSum(n - 1);
	// n이 1이 아니면, n을 1부터 (n-1)까지의 합과 더한 값을 반환함.
}*/

// 함수 포인터
/*// 함수 원형이 void Func(int, int); → 포인터는 void (*ptr_func)(int, int);
typedef double (*Arith)(double, double); // typedef로 새로운 이름 선언
double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
//double Calculator(double, double, double (*func)(double, double));
double Calculator(double, double, Arith);
int main(void)
{
	//double (*calc)(double, double) = NULL; // 함수 포인터 선언 (초기화)
	Arith calc = NULL; // 함수 포인터 선언
	double num1 = 3, num2 = 4, result = 0;
	char oper = '*';
	switch (oper)
	{
	case '+': calc = Add; break;
	case '-': calc = Sub; break;
	case '*': calc = Mul; break;
	case '/': calc = Div; break;
	default: cout << "사칙연산(+, -, *, /)만을 지원합니다."; break;
	}
	result = Calculator(num1, num2, calc);
	cout << "사칙 연산의 결과는 " << result << "입니다.";
	return 0;
}
double Add(double num1, double num2) { return num1 + num2; }
double Sub(double num1, double num2) { return num1 - num2; }
double Mul(double num1, double num2) { return num1 * num2; }
double Div(double num1, double num2) { return num1 / num2; }
//double Calculator(double num1, double num2, double (*func)(double, double))
//{ return func(num1, num2); }
double Calculator(double num1, double num2, Arith func)
{ return func(num1, num2); }*/

// 참조자
/*// int& 참조자이름 = 변수이름; → 참조자 선언 (타입 식별용)
// 참조자: 대상 변수와 같은 메모리 위치를 참조
int main(void)
{
	int x = 10;	// 변수의 선언 
	int& y = x;	// 참조자 선언 
	cout << "x : " << x << ", y : " << y << endl;
	y++;		// 참조자를 이용한 증가 연산
	cout << "x : " << x << ", y : " << y << endl;
	cout << "x의 주소값 : " << &x << ", y의 주소값 : " << &y;
	return 0;
}*/

// 참조자 + 함수
/*void Swap(int&, int&);
int main(void)
{
	int num1 = 3, num2 = 7;
	cout << "변경 전: num1 = " << num1 << ", num2 = " << num2 << endl;
	Swap(num1, num2);
	cout << "변경 후: num1 = " << num1 << ", num2 = " << num2 << endl;
	return 0;
}
void Swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}*/

// C++에서 참조자는 크기가 큰 구조체나 클래스를 다룰 때에만 사용하는 것이 좋음

// 참조자와 구조체
/*struct Book
{
	string title;
	string author;
	int price;
};
void Display(const Book&);
int main(void)
{
	Book web_book = { "HTML과 CSS", "홍길동", 28000 };
	Display(web_book);
	return 0;
}
void Display(const Book& bk)
{
	cout << "책의 제목은 " << bk.title << "이고, ";
	cout << "저자는 " << bk.author << "이며, ";
	cout << "가격은 " << bk.price << "원입니다.";
}*/

// 디폴트 인수 (기본값이 미리 정의되어 있는 인수)
/*// 주의: 함수의 원형에만 가능, 가장 오른쪽부터 순서대로만 가능
// void Display(int x, int y, char ch, int z = 4); // 가능
// void Display(int x, int y, char ch = 'a', int z = 4); // 가능
// void Display(int x, int y = 2, char ch, int z = 4); // 오류
// void Display(int x = 1, int y = 2, char ch, int z); // 오류
// void Display(int x, int y, char ch = 'a', int z = 4);에 대해서...
// Display(1, 2); → 가능함, display(1, 2, 'a', 4)와 같음
// Display(3, 4, 'b'); → 가능함, display(3, 4, 'b', 4)와 같음
// Display(5, 6, 'c', 9); → 가능함, display(5, 6, 'c', 8)와 같음
// Display(7, 8, , 9); → 오류 : 인수 전달은 건너뛸 수 없음!
double Multi(double, double = 2);
int main(void)
{
	cout << Multi(3) << endl;		// Multi(3, 2)와 같음 : 3 * 3 
	cout << Multi(3, 3) << endl;	// 3 * 3 * 3
	cout << Multi(3, 4);			// 3 * 3 * 3 * 3
	return 0;
}
double Multi(double x, double n)
{
	double result = x;
	for (int i = 1; i < n; i++)
	{
		result *= x;
	}
	return result;
}*/

// 함수 오버로딩 (같은 이름의 함수를 중복하여 정의하는 것)
/*// 함수 시그니처: 함수의 원형에 명시되는 매개변수 리스트
// 1. void Display(const char* str, int n); // 문자열 str을 n번 출력
// 2. void Display(const char* str1, const char* str2); // str1과 str2를 연달아 출력
// 3. void Display(int x, int y); // x * y를 출력
// 4. void Display(double x, double y); // x / y를 출력
// 1. Display("C++", 3);              // 1번 Display() 함수 호출 -> "C++C++C++"
// 2. Display("C++", " Programming"); // 2번 Display() 함수 호출 -> "C++ Programming"
// 3. Display(3, 4);                  // 3번 Display() 함수 호출 -> 12
// 4. Display(4.2, 2.1);              // 4번 Display() 함수 호출 -> 2
// 5. Display(4.2, 3);                // 3번과 4번 모두 호출 가능 -> 컴파일 오류 발생
void Shift(int, int);
void Shift(int, int, int);
void Shift(int, int, int, int);
int main(void)
{
	Shift(1, 2);
	Shift(1, 2, 3);
	Shift(1, 2, 3, 4);
	return 0;
}
void Shift(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << a << ", " << b << endl;
}
void Shift(int a, int b, int c)
{
	int temp;
	temp = a;
	a = b;
	b = c;
	c = temp;
	cout << a << ", " << b << ", " << c << endl;
}
void Shift(int a, int b, int c, int d)
{
	int temp;
	temp = a;
	a = b;
	b = c;
	c = d;
	d = temp;
	cout << a << ", " << b << ", " << c << ", " << d << endl;
}*/

// 인라인 함수
/*// 호출 시 함수의 모든 코드를 호출된 자리에 바로 삽입 (호출 시간↓)
// inline 함수의원형 or inline 함수의정의
// 아래는 인라인 함수 이용
inline int Sub(int x, int y)
{
	return x - y;
}
inline void Print(int x)
{
	cout << "계산 결과는 " << x << "입니다.";
}
int main(void)
{
	int num1 = 5, num2 = 3;
	int result;
	result = Sub(num1, num2);
	Print(result);
	return 0;
}
// 아래는 인라인 코드 이용
int main(void)
{
	int num1 = 5, num2 = 3;
	int result;
	{
		int x = num1, y = num2;
		result = x - y;
	}
	{
		int x = result;
		cout << "계산 결과는 " << x << "입니다.";
	}
	return 0;
}*/

// 매크로 함수와 인라인 함수
/*// C언어에서는 C++의 인라인 함수와 비슷한 기능의 매크로 함수를 사용
// 매크로 함수는 #define 선행처리 지시문에 인수로 함수의 정의를 전달
// 매크로 함수를 일반 함수처럼 사용하려면 모든 인수를 괄호({})로 감싸야 함
// 예를 들어 #define SQR(X) X*X가 아닌 #define SQR(X) ((X)*(X))로 사용!
// 아래는 C의 매크로 함수를 C++의 인라인 함수로 나타낸 예시
inline int Sqr(int x)
{
	return x * x;
}
int main(void)
{
	int result;
	int x = 5;
	cout << "계산 결과는 " << Sqr(10) << "입니다." << endl;
	cout << "계산 결과는 " << Sqr(x) << "입니다." << endl;
	cout << "계산 결과는 " << Sqr(x + 3) << "입니다.";
	return 0;
}*/

// 유효 범위: 하나의 변환 단위 내에서 해당 변수가 사용될 수 있는 범위
// 연결: 해당 변수를 사용할 수 있는 파일의 접근 가능 여부
// C++ 변수 종류: 자동 변수, 레지스터 변수, 정적 변수

// 자동 변수
/*// 자동 변수: 블록 내에서 선언된 변수 (C의 지역 변수)
void Local(void);
int main(void)
{
	int i = 5;
	int var = 10;
	cout << "main() 함수 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
	if (i < 10)
	{
		Local();
		int var = 30;
		cout << "if 문 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
	}
	cout << "현재 자동 변수 var의 값은 " << var << "입니다." << endl;
	return 0;
}
void Local(void)
{
	int var = 20;
	cout << "Local() 함수 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
}*/

// 레지스터 변수: register 키워드 사용 (레지스터에 저장)
// 정적 변수: C에서는 프로그램 내내 유지되는 변수, 데이터에 저장
// 연결을 갖지 않는, 내부 연결을 갖는, 외부 연결을 갖는 정적 변수

// 연결을 가지지 않는 정적 변수
/*// 블록 내부에서 static 키워드를 사용하여 정의
// 지역 변수 + 전역 변수
// 초기화 1번, 프로그램 종료 시 메모리상에서 사라짐, 해당 블록 내에서만
void Local(void);
void StaticVar(void);
int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		Local();
		StaticVar();
	}
	return 0;
}
void Local(void)
{
	int count = 1;
	cout << "Local() 함수가 " << count << " 번째 호출되었습니다." << endl;
	count++;
}
void StaticVar(void)
{
	static int static_count = 1; // 연결을 가지지 않는 정적 변수
	cout << "StaticVar() 함수가 " << static_count << " 번째 호출되었습니다." << endl;
	static_count++;
}*/

// 내부 연결을 가지는 정적 변수
/*// 유효 범위를 변환 단위로 가지는 변수에 static 키워드 사용해 정의
// 현재 파일의 모든 블록에서 접근 가능
static int var; // 내부 연결을 가지는 정적 변수
void Local(void);
int main(void)
{
	cout << "변수 var의 초기값은 " << var << "입니다." << endl;
	int i = 5;
	int var = 10; // 자동 변수 선언 
	cout << "main() 함수 내의 자동 변수 var의 값은 " << var << "입니다." << endl;
	if (i < 10)
	{
		Local();
		cout << "현재 변수 var의 값은 " << var << "입니다." << endl; // 자동 변수에 접근 
	}
	cout << "더 이상 main() 함수에서는 정적 변수 var에 접근할 수가 없습니다." << endl;
	return 0;
}
void Local(void)
{
	var = 20; // 정적 변수의 값 변경
	cout << "Local() 함수 내에서 접근한 정적 변수 var의 값은 " << var << "입니다." << endl;
}*/

// 외부 연결을 가지는 정적 변수
// 유효 범위를 변환 단위로 가지는 변수
// 외부 파일에서도 사용 가능 but 각 파일에서 extern으로 재선언 필요
// 파일1.cpp) int var = 10; → 외부 변수 정의
// 파일2.cpp) #include "파일1.cpp" & extern int var; → 외부 변수 사용 위한 재선언

// 네임스페이스
/*// 내부 식별자에 사용될 수 있는 유효 범위를 제공하는 선언적 영역
<정의>
namespace kang
{
	void Display(); // 함수의 원형
	int count;      // 변수의 선언
}
or
namespace kim
{
	double display; // 변수의 선언
	int count;      // 변수의 선언
}
<접근>
#include "namespace.h"
kang::count = 4;
kim::display = 3.14;
kim::count = 100;
즉,
using 지시자(directive): using namespace 네임스페이스이름;
or
using 선언(declaration): using 네임스페이스이름::이름;*/

// 클래스
/*// 구조체의 상위 호환!
// 클래스의 멤버 변수는 프로퍼티(property), 멤버 함수는 메소드
// 객체지향 특징: 추상화, 캡슐화, 정보 은닉, 상속성, 다형성
<정의>
class 클래스이름
{
접근제어지시자1:
	멤버변수1의타입 멤버변수1의이름;
	멤버변수2의타입 멤버변수2의이름;
	...
		멤버함수1의 원형
		멤버함수2의 원형
		...
};
<예시>
Book web_book;
void Book::Move(int page) { current_page_ = page; }
<멤버함수 호출하기>
1. 객체이름.멤버함수이름();               // 매개변수가 없는 멤버 함수 호출
2. 객체이름.멤버함수이름(전달할인수목록); // 매개변수가 있는 멤버 함수 호출
<접근제어지시자>
class Book {
private:                // 생략 가능함.
	int current_page_;  // 현재 페이지
	void set_percent(); // 해당 책을 읽은 정도를 구함.
public;
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
+) protected는 이를 선언한 클래스의 멤버함수/프렌드,
	이 클래스에서 public이나 protected 접근 제어로 파생된 클래스에서만 접근 가능*/

// this 포인터
/*class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
	const Book& ThickerBook(const Book&);	// ThickerBook() 함수의 원형 
};
int main(void)
{
	Book web_book("HTML과 CSS", 350);
	Book html_book("HTML 레퍼런스", 200);
	cout << web_book.ThickerBook(html_book).title_;	// 더 두꺼운 책의 이름을 출력함. 
	return 0;
}
Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}
void Book::set_percent()
{	percent_ = (double)current_page_ / total_page_ * 100;	}
const Book& Book::ThickerBook(const Book& comp_book)
{
	if (comp_book.total_page_ > this->total_page_)
	{	return comp_book;	}
	else
	{	return *this;	}
}*/

// 생성자
/*class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main(void)
{
	Book web_book = Book("HTML과 CSS", 350);	// 생성자의 명시적 호출 
	// 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인함. 
	cout << web_book.percent_;
	return 0;
}
Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}
void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}*/

// 디폴트 생성자
/*// ex. Book::Book() { }
// Book web_book; or Book web_book = Book(); or Book * ptr_book = new Book;
class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title = "웹 프로그래밍", int total_page = 100);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main(void)
{
	Book web_book;	// 디폴트 생성자의 암시적 호출
	// 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인함. 
	cout << web_book.percent_;
	return 0;
}
Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}
void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}*/

// 복사 생성자
/*// 복사 생성자의 원형: Book(const Book&);
class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	Book(const Book&);	// 복사 생성자의 원형 정의 
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main(void)
{
	Book web_book("HTML과 CSS", 350);
	Book html_book(web_book);
	cout << "1번 제목은 " << web_book.title_
		<< ", 총 페이지는 " << web_book.total_page_ << "장입니다." << endl;
	cout << "2번 제목은 " << html_book.title_
		<< ", 총 페이지는 " << html_book.total_page_ << "장입니다.";
	return 0;
}
Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}
Book::Book(const Book& origin)	// 복사 생성자의 선언 
{
	title_ = origin.title_;
	total_page_ = origin.total_page_;
	current_page_ = origin.current_page_;
	percent_ = origin.percent_;
}
void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}*/

// 소멸자
/*// 소멸자의 원형: ~Book();
// 소멸자의 선언: Book::~Book() { }
class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	~Book();	// 소멸자의 원형 정의 
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main(void)
{
	Book web_book("HTML과 CSS", 350);	// 생성자의 암시적 호출 
	// 생성자가 호출되어 멤버 변수인 percent_가 초기화되었는지를 확인함. 
	cout << web_book.percent_ << endl;
	return 0;
}
Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}
Book::~Book()	// 소멸자의 선언 
{
	// 프로그램이 종료될 때 컴파일러에 의해 자동으로 호출됨.
	cout << "Book 객체의 소멸자가 호출되었습니다." << endl;
}
void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}*/

// 연산자 오버로딩 - 1
/*class Position
{
private:
	double x_;
	double y_;
public:
	Position(double x, double y);	// 생성자 
	void Display();
	Position operator-(const Position& other);	// - 연산자 함수
	// 연산자 함수: 연산자를 오버로딩하기 위해서 사용하는 것
	// 연산자 함수의 문법: operator오버로딩할연산자(매개변수목록)
	// 즉, 뺄셈 연산자(-)를 두 Position 객체의 중간 좌표 구하는 연산으로!
};
int main(void)
{
	Position pos1 = Position(3.3, 12.5);
	Position pos2 = Position(-14.4, 7.8);
	Position pos3 = pos1 - pos2;
	pos3.Display();
	return 0;
}
Position::Position(double x, double y)
{
	x_ = x;
	y_ = y;
}
Position Position::operator-(const Position& other)
{	return Position((x_ + other.x_) / 2, (y_ + other.y_) / 2);	}
void Position::Display()
{
	cout << "두 지점의 중간 지점의 좌표는 x좌표가 " << this->x_
		<< "이고, y좌표가 " << this->y_ << "입니다." << endl;
}*/

// 연산자 오버로딩 - 2
/*// 앞의 예제를 전역 함수로 정의한 것은 다음과 같다
class Position
{
private:
	double x_;
	double y_;
public:
	Position(double x, double y); 
	void Display();
	friend Position operator-(const Position& pos1, const Position& pos2);
};
int main(void)
{
	Position pos1 = Position(3.3, 12.5);
	Position pos2 = Position(-14.4, 7.8);
	Position pos3 = pos1 - pos2;
	pos3.Display();
	return 0;
}
Position::Position(double x, double y)
{
	x_ = x;
	y_ = y;
}
Position operator-(const Position& pos1, const Position& pos2)
{	return Position((pos1.x_ + pos2.x_) / 2, (pos1.y_ + pos2.y_) / 2);	}
void Position::Display()
{
	cout << "두 지점의 중간 지점의 좌표는 x좌표가 " << this->x_
		<< "이고, y좌표가 " << this->y_ << "입니다." << endl;
}*/

// 프렌드
/*class Rect
{
private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// 생성자 
	void DisplaySize();
	Rect operator*(double mul) const;
	friend Rect operator*(double mul, const Rect& origin); // 프렌드 함수
};
int main(void)
{
	Rect origin_rect(10, 20);
	Rect rect01 = origin_rect * 2;
	Rect rect02 = 3 * origin_rect;
	rect01.DisplaySize();
	rect02.DisplaySize();
	return 0;
}
Rect::Rect(double height, double width)
{
	height_ = height;
	width_ = width;
}
void Rect::DisplaySize()
{
	cout << "이 사각형의 높이는 " << this->height_
		<< "이고, 너비는 " << this->width_ << "입니다." << endl;
}
Rect Rect::operator*(double mul) const
{	return Rect(height_ * mul, width_ * mul);	}
Rect operator*(double mul, const Rect& origin)
{	return origin * mul;	}*/

// 프렌드 클래스
/*// 문법: friend class 클래스이름;
#include <cmath>
class Rect
{
private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// 생성자 
	void height() const;
	void width() const;
	friend class Display;	// 프렌드 클래스 선언 
};
class Display
{
public:
	void ShowSize(const Rect& target);
	void ShowDiagonal(const Rect& target);
};
int main(void)
{
	Rect rect01(10, 20);
	Display rect_display;
	rect_display.ShowSize(rect01);
	rect_display.ShowDiagonal(rect01);
	return 0;
}
Rect::Rect(double height, double width)
{
	height_ = height;
	width_ = width;
}
void Rect::height() const
{ cout << "이 사각형의 높이는 " << this->height_ << "입니다." << endl; }
void Rect::width() const
{ cout << "이 사각형의 너비는 " << this->width_ << "입니다." << endl; }
void Display::ShowSize(const Rect& target)
{
	target.height();
	target.width();
}
void Display::ShowDiagonal(const Rect& target)
{
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));
	// cmath 헤더 파일's sqrt()는 제곱근, pow(a,b)는 a의 b승
	cout << "이 사각형의 대각선의 길이는 " << diagonal << "입니다." << endl;
}*/

// 프렌드 멤버 함수
/*#include <cmath>
class Rect;
class Display
{
public:
	void ShowSize(const Rect& target);
	void ShowDiagonal(const Rect& target);
};
class Rect
{
private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// 생성자 
	void height() const;
	void width() const;
	friend void Display::ShowDiagonal(const Rect& target);	// 프렌드 멤버 함수 선언 
	// ShowDiagonal() 함수만이 Rect 클래스의 모든 멤버에 접근 가능
};
int main(void)
{
	Rect rect01(10, 20);
	Display rect_display;
	rect_display.ShowSize(rect01);
	rect_display.ShowDiagonal(rect01);
	return 0;
}
Rect::Rect(double height, double width)
{
	height_ = height;
	width_ = width;
}
void Rect::height() const
{ cout << "이 사각형의 높이는 " << this->height_ << "입니다." << endl; }
void Rect::width() const
{ cout << "이 사각형의 너비는 " << this->width_ << "입니다." << endl; }
void Display::ShowSize(const Rect& target)
{
	target.height();
	target.width();
}
void Display::ShowDiagonal(const Rect& target)
{
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));
	cout << "이 사각형의 대각선의 길이는 " << diagonal << "입니다." << endl;
}*/

// 정적 멤버 변수
/*// 정적 멤버: 클래스에 속함, 객체별 할당이 아닌 클래스의 모든 객체가 공유
class Person
{
private:
	string name_;
	int age_;
public:
	static int person_count_;	// 정적 멤버 변수의 선언 
	Person(const string& name, int age);	// 생성자 
	~Person() { person_count_--; }			// 소멸자 
	void ShowPersonInfo();
};
int Person::person_count_ = 0;	// 정적 멤버 변수의 정의 및 초기화 
int main(void)
{
	Person hong("길동", 29);
	hong.ShowPersonInfo();
	Person lee("순신", 35);
	lee.ShowPersonInfo();
	Person kim("무지", 23);
	kim.ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
	cout << ++person_count_ << " 번째 사람이 생성되었습니다." << endl;
}
void Person::ShowPersonInfo()
{
	cout << "이 사람의 이름은 " << name_ << "이고, 나이는 "
		<< age_ << "살입니다." << endl;
}*/

// 정적 멤버 함수
/*// 1. 객체이름.멤버함수이름();   // 일반 멤버 함수의 호출
// 2. 클래스이름.멤버함수이름(); // 정적 멤버 함수의 호출
// 특징: 객체 생성 X (this 포인터 없음), 클래스 이름만으로 호출,
//		 특정 객체와 결합하지 않으므로, 정적 멤버 변수만 사용 가능
class Person
{
private:
	string name_;
	int age_;
public:
	static int person_count_;	// 정적 멤버 변수의 선언 
	static int person_count();	// 정적 멤버 함수의 선언
	// 정적멤버변수 person_count_ 출력 위해 정적멤버함수 person_count() 선언
	Person(const string& name, int age);	// 생성자 
	~Person() { person_count_--; }			// 소멸자 
	void ShowPersonInfo();
};
int Person::person_count_ = 0;	// 정적 멤버 변수의 정의 및 초기화 
int main(void)
{
	Person hong("길동", 29);
	Person lee("순신", 35);
	cout << "현재까지 생성된 총 인원 수는 "
		<< Person::person_count() << "명입니다." << endl;
	return 0;
}
Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
	cout << ++person_count_ << " 번째 사람이 생성되었습니다." << endl;
}
void Person::ShowPersonInfo()
{
	cout << "이 사람의 이름은 " << name_
		<< "이고, 나이는 " << age_ << "살입니다." << endl;
}
int Person::person_count() // 정적 멤버 함수의 정의 
{ return person_count_; }*/

// 상수 멤버 변수
// 한 번 초기화하면 그 값 변경 불가 (const 타입 멤버변수이름;)
// 상수 멤버 함수
// 호출한 객체의 데이터 변경 불가 (함수의원형 const;)

// 파생 클래스
/*class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age); // 기초 클래스 생성자의 선언
	void ShowPersonInfo();
};
class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age); // 파생 클래스 생성자의 선언
};
int main(void)
{
	Student hong(123456789, "길동", 29);
	hong.ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age) // 기초 클래스 생성자의 정의
{
	name_ = name;
	age_ = age;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "의 나이는 " << age_ << "살입니다." << endl;
}
// 파생 클래스 생성자의 정의 ↓
Student::Student(int sid, const string& name, int age) : Person(name, age)
{
	student_id_ = sid;
}*/

// 오버라이딩 - 1
/*// 오버로딩은 서로 다른 시그니처를 갖는 여러 함수를 같은 이름으로 정의
// 오버라이딩은 이미 정의된 함수 무시하고 같은 이름의 함수를 새롭게 정의
// 파생 클래스에서 직접 오버라이딩 or 가상 함수를 이용해 오버라이딩
// 파생 클래스에서의 오버라이딩 ↓
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// 기초 클래스 생성자의 선언 
	void ShowPersonInfo();
};
class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// 파생 클래스 생성자의 선언 
	void ShowPersonInfo();	// 파생 클래스에서 상속받은 멤버 함수의 재정의 
};
int main(void)
{
	Person lee("순신", 35);
	lee.ShowPersonInfo();
	Student hong(123456789, "길동", 29);
	hong.ShowPersonInfo();
	hong.Person::ShowPersonInfo(); // 원래 함수 호출
	return 0;
}
Person::Person(const string& name, int age)	// 기초 클래스 생성자의 정의 
{
	name_ = name;
	age_ = age;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "의 나이는 " << age_ << "살입니다." << endl;
}
// 파생 클래스 생성자의 정의 
Student::Student(int sid, const string& name, int age) : Person(name, age)	
{
	student_id_ = sid;
}
void Student::ShowPersonInfo()
{
	cout << "이 학생의 학번은 " << student_id_ << "입니다." << endl;
}*/

// 오버라이딩 - 2
/*// 포인터 사용 시 문제 발생
// 포인터 변수가 실제로 가리키는 객체의 타입을 기준으로 함수를 호출 X,
// 해당 포인터의 타입을 기준으로 함수를 호출하기 때문!
// → 가상 함수 이용
// 포인터가 실제로 가리키는 객체에 따라 호출하는 대상을 바꿀 수 있음!
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// 기초 클래스 생성자의 선언 
	virtual void ShowPersonInfo();
};
class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// 파생 클래스 생성자의 선언 
	virtual void ShowPersonInfo();	// 파생 클래스에서 상속받은 멤버 함수의 재정의 
};
int main(void)
{
	Person* ptr_person;
	Person lee("순신", 35);
	Student hong(123456789, "길동", 29);
	ptr_person = &lee;
	ptr_person->ShowPersonInfo();
	ptr_person = &hong;
	ptr_person->ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age)	// 기초 클래스 생성자의 정의 
{
	name_ = name;
	age_ = age;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "의 나이는 " << age_ << "살입니다." << endl;
}
// 파생 클래스 생성자의 정의 
Student::Student(int sid, const string& name, int age) : Person(name, age)
{
	student_id_ = sid;
}
void Student::ShowPersonInfo()
{
	cout << "이 학생의 학번은 " << student_id_ << "입니다." << endl;
}*/

// 다중 상속
// 두 개 이상의 클래스로부터 멤버를 상속받아 파생 클래스를 생성
// class 파생클래스이름 : 접근제어지시자 기초클래스이름, 접제지 기클이, ...

// 가상 함수
/*// 파생 클래스에서 재정의할 것으로 기대하는 멤버 함수 (재정의 필수 X)
// 문법: virtual 멤버함수의원형;
// 가상 함수 호출 → 컴파일러가 어떤 함수 호출할지 모름 = 동적 바인딩
// 다음은 가상 함수를 사용한 동적 바인딩 예제
class A
{
public:
	virtual void Print() { cout << "A 클래스의 Print() 함수" << endl; }
};
class B : public A
{
	virtual void Print() { cout << "B 클래스의 Print() 함수" << endl; }
};
int main(void)
{
	A* ptr;
	A obj_a;
	B obj_b;
	ptr = &obj_a;
	ptr->Print();
	ptr = &obj_b;
	ptr->Print();
	return 0;
}
// 컴파일러가 가상 함수를 다루는 가장 일반적인 방식: 가상 함수 테이블
// 각 객체마다 가상 함수 테이블을 가리킬 포인터 저장을 위한 숨겨진 멤버 추가
// 가상 함수 테이블 → 해당 클래스의 객체 위해 선언된 가상 함수의 주소 저장
// 가상 함수를 사용 → 함수 호출 과정 복잡 (메모리와 실행 속도 측면 부담 ↑)
// 또한, C++에서 기초 클래스의 소멸자는 반드시 가상으로 선언해야 함*/

// 추상 클래스
/*// 순수 가상 함수: 파생 클래스에서 "반드시" 재정의해야 하는 멤버 함수
// 문법: virtual 멤버함수의원형=0; (즉, 함수만 있고 본체 없음)
// 하나 이상의 순수 가상 함수를 포함하는 클래스 = "추상 클래스"
class Animal
{
public:
	virtual ~Animal() {}	// 가상 소멸자의 선언
	virtual void Cry() = 0;	// 순수 가상 함수의 선언
};
class Dog : public Animal
{
public:
	virtual void Cry() { cout << "멍멍!!" << endl; }
};
class Cat : public Animal
{
public:
	virtual void Cry() { cout << "야옹야옹!!" << endl; }
};
// Animal 클래스를 상속받는 파생 클래스인 Dog 클래스와 Cat 클래스는
// Cry() 함수를 오버라이딩해야만 인스턴스를 생성 가능...
int main(void)
{
	Dog my_dog;
	my_dog.Cry();
	Cat my_cat;
	my_cat.Cry();
	return 0;
}*/

// 템플릿: 매개변수의 타입에 따라 함수나 클래스를 생성하는 메커니즘

// 함수 템플릿
/*// 함수의 일반화된 선언을 의미함
// 같은 알고리즘 기반, 서로 다른 타입에서 동작하는 함수를 한 번에 정의!
// 특정 타입을 매개변수로 전달 → 컴파일러가 해당 타입에 맞는 함수 생성
// 문법: template <typename 타입이름>
//       함수의원형
//       {
//			함수의본체
//       }
template <typename T>
void Swap(T& a, T& b);
int main(void)
{
	int c = 2, d = 3;
	cout << "c : " << c << ", d : " << d << endl;
	Swap(c, d);
	cout << "c : " << c << ", d : " << d << endl;
	string e = "hong", f = "kim";
	cout << "e : " << e << ", f : " << f << endl;
	Swap(e, f);
	cout << "e : " << e << ", f : " << f << endl;
	return 0;
}
template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}*/

// 명시적 특수화 (for 함수 템플릿)
/*// (함수 템플릿에서 제공) 해당 타입에 대해 특별한 동작을 정의!
// 앞의 예시에서 double을 위한 명시적 특수화를 하면,
// template <> void Swap<double>(double&, double&) { ... };
template <typename T>
void Swap(T& a, T& b);
template <> void Swap<double>(double&, double&);
int main(void)
{
	int c = 2, d = 3;
	cout << "c : " << c << ", d : " << d << endl;
	Swap(c, d);
	cout << "c : " << c << ", d : " << d << endl;
	double e = 1.234, f = 4.321;
	cout << "e : " << e << ", f : " << f << endl;
	Swap(e, f);
	cout << "e : " << e << ", f : " << f << endl;
	return 0;
}
template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <> void Swap<double>(double&, double&)
{
	// double형은 값을 서로 바꾸지 않음. 
}*/

// 클래스 템플릿
/*// 클래스의 일반화된 선언을 의미
// template <typename 타입이름>
// class 클래스템플릿이름
// {
//	 클래스 멤버의 선언
// }
// 사용하고자 하는 타입을 명시적으로 제공해야 함!
template <typename T>
class Data
{
private:
	T data_;
public:
	Data(T dt);
	T get_data();
};
int main(void)
{
	Data<string> str_data("C++ 수업");
	Data<int> int_data(12);
	cout << "str_data : " << str_data.get_data() << endl;
	cout << "int_data : " << int_data.get_data() << endl;
	return 0;
}
template <typename T>
Data<T>::Data(T dt)
{
	data_ = dt;
}
template <typename T>
T Data<T>::get_data()
{
	return data_;
}*/

// 중첩 클래스 템플릿
/*// template <typename T>
// class X
// {
//	 template <typename U>
//	 class Y
//	 {	...		}
//	 ...
// }
// int main(void)
// {	...		}
// template <typename T>
// template <typename U>
// X<T>::Y<U>::멤버함수이름()
// {	...		}*/

// 클래스 템플릿 특징
/*// 1. 하나 이상의 템플릿 인수를 가지는 클래스 템플릿 선언 가능
// ex. template <typename T, int i>
// 2. 클래스 템플릿에 디폴트 템플릿 인수를 명시 가능
// ex. template <typename T = int, int i>
// 3. 클래스 템플릿를 기초 클래스로 하여 상속 가능
// ex. template <typename Type>
//     class Y : public X <Type> → 클래스 템플릿 X를 상속받음*/

// 명시적 특수화 (for 클래스 템플릿)
/*// for double → template <> class X<double> { ... };
template <typename T>
class Data
{
private:
	T data_;
public:
	Data(T dt);
	T get_data();
};
template <> class Data<double>	// double형에 대한 명시적 특수화 
{
private:
	double data_;
public:
	Data(double dt) { data_ = dt; }
	double get_data()
	{
		cout << "double형 데이터를 출력합니다." << endl;
		return data_;
	}
	// double형에 대한 동작만을 변경!
};
int main(void)
{
	Data<string> str_data("C++ 수업");
	Data<double> double_data(3.14);
	cout << "str_data : " << str_data.get_data() << endl;
	cout << "double_data : " << double_data.get_data() << endl;
	return 0;
}
template <typename T>
Data<T>::Data(T dt)
{
	data_ = dt;
}
template <typename T>
T Data<T>::get_data()
{
	return data_;
}*/

// 부분 특수화
/*// 템플릿 인수가 두 개 이상, 그중 일부만 특수화 할 때
// template 다음에 나오는 <>에 특수화X 타입의 템플릿 인수 명시
// 다음에 나오는 <>에 특수화O 타입을 명시
// ex. template <typename T1, typename T2> class X {...};
// → template <typename T1> class X<T1, double> { ... };
// X를 double형에 대해 부분 특수화
// → template <> class X<double, double> { ... };
// T1 타입까지 특수화 (→ 명시적 특수화)
// 추가로, typedef 키워드로 템플릿 특수화 위한 새 이름 선언 가능
// ex. typedef X<double, 3.14> DoubleX;
//     DoubleX double_x; // double_x는 X<double, 3.14> 타입*/

// 스마트 포인터
/*// 포인터처럼 동작하는 클래스 템플릿으로, 사용 끝난 메모리 자동으로 해제
// new 키워드로 기본 포인터가 실제 메모리 가리키도록 초기화한 후,
// 기본 포인터를 스마트 포인터에 대입
// → 소멸자는 delete 키워드로 할당된 메모리를 자동으로 해제
// 즉, 따로 메모리를 해제할 필요가 없어짐!
// 종류: unique_ptr, shared_ptr, weak_ptr*/

// unique_ptr
/*// 하나의 스마트 포인터만이 특정 객체를 소유할 수 있도록
// 해당 객체의 소유권을 갖고 있을 때만, 소멸자가 해당 객체 삭제 가능
// move() 멤버 함수를 통해 소유권을 이전은 가능, 복사는 불가능
// unique_ptr<int> ptr01(new int(5)); // int형 unique_ptr인 ptr01 선언, 초기화
// auto ptr02 = move(ptr01);          // ptr01에서 ptr02로 소유권을 이전
// unique_ptr<int> ptr03 = ptr01;     // 대입 연산자 이용한 복사 → 오류를 발생 
// ptr02.reset();                     // ptr02가 가리키는 메모리 영역 삭제
// ptr01.reset();                      // ptr01가 가리키는 메모리 영역을 삭제
// make_unique() 함수를 사용 → unique_ptr 인스턴스를 안전하게 생성!
// Person 객체 가리키는 unique_ptr(hong)를 make_unique()로 생성하는 예제 ↓
#include <memory>
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age); // 기초 클래스 생성자의 선언
	~Person() { cout << "소멸자가 호출되었습니다." << endl; }
	void ShowPersonInfo();
};
int main(void)
{
	unique_ptr<Person> hong = make_unique<Person>("길동", 29);
	// hong은 사용이 끝난 후에 delete 키워드로 메모리 해제할 필요 X
	hong->ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age) // 기초 클래스 생성자의 정의
{
	name_ = name;
	age_ = age;
	cout << "생성자가 호출되었습니다." << endl;
}
void Person::ShowPersonInfo()
{ cout << name_ << "의 나이는 "<< age_ << "살입니다." << endl; }*/

// shared_ptr
/*// 한 특정 객체를 참조하는 스마트 포인터가 몇 개인지
// 이때 개수 =  참조 횟수
// shared_ptr<int> ptr01(new int(5)); // int형 shared_ptr 선언, 초기화
// cout << ptr01.use_count() << endl; // 1
// auto ptr02(ptr01);                 // 복사 생성자를 이용한 초기화
// cout << ptr01.use_count() << endl; // 2
// auto ptr03 = ptr01;                // 대입을 통한 초기화
// cout << ptr01.use_count() << endl; // 3 
// Person 객체 가리키는 shared_ptr를 make_shared()로 생성하는 예시 ↓
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// 기초 클래스 생성자의 선언 
	~Person() { cout << "소멸자가 호출되었습니다." << endl; }
	void ShowPersonInfo();
};
int main(void)
{
	shared_ptr<Person> hong = make_shared<Person>("길동", 29);
	cout << "현재 소유자 수 : " << hong.use_count() << endl;	// 1
	auto han = hong;
	cout << "현재 소유자 수 : " << hong.use_count() << endl;	// 2
	han.reset();		// shared_ptr인 han을 해제함
	cout << "현재 소유자 수 : " << hong.use_count() << endl;	// 1
	return 0;
}
Person::Person(const string& name, int age)	// 기초 클래스 생성자의 정의 
{
	name_ = name;
	age_ = age;
	cout << "생성자가 호출되었습니다." << endl;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "의 나이는 " << age_ << "살입니다." << endl;
}*/

// weak_ptr
/*// 하나 이상의 shared_ptr가 소유하는 객체에 대한 접근을 제공
// but, 소유자의 수에는 포함 X*/

// STL 반복자
/*// C++ 표준 템플릿 라이브러리인 STL → 반복자, 컨테이너, 알고리즘
// STL 컨테이너: 같은 타입의 여러 객체를 저장하는 일종의 집합
// 반복자: 컨테이너에 저장된 요소를 계속 순회 → 각 요소로의 접근 제공
// 즉, 컨테이너에 저장된 데이터를 순회하는 과정
// 요구 사항: 참조 연산자(*), 대입 및 관계 연산자, 증가 연산자(++)
// 종류: 입력/출력/순방향/역방향/임의접근 반복자
// [입력 반복자]
// 컨테이너로부터 값 읽기 가능, 프로그램이 그 값을 변경은 X
// 증가 연산자(++)로 순방향 이동 or 참조 연산자(*)로 반복해서 요소 참조
// Find() 함수의 원형은 다음과 같다
// template<class InputIterator, class T>
// InputIterator Find(InputIterator first, InputIterator last, const T& value);
// [출력 반복자]
// 컨테이너의 값 변경 가능, 프로그램에서 값을 읽을 수는 X
// 증가 연산자(++)로 순방향 이동 or 참조 연산자(*)로 한 번만 값 쓰기
// Copy() 함수의 원형은 다음과 같다
// template<class InputIterator, class OutputIterator>
// OutputIterator Copy
// (InputIterator first, InputIterator last, OutputIterator result);
// [순방향 반복자]
// 입출력이 모두 가능
// 증가 연산자(++)로 순방향 이동 or 참조 연산자(*)로 몇 번이고 참조, 변경 가능
// Replace() 함수의 원형은 다음과 같다
// template<class ForwardIterator, class T>
// void Replace
// (ForwardIterator first, ForwardIterator last, const T& target, const T& replacement);
// [양방향 반복자]
// 역시 입출력 모두 가능
// 증가 연산자(++)는 순방향, 감소 연산자(--)는 역방향
// 참조 연산자(*)로 몇 번이고 참조, 변경 가능
// Reverse() 함수의 원형은 다음과 같다
// template<class BidirectionalIterator, class OutputIterator>
// OutputIterator Reverse
// (BidirectionalIterator first, BidirectionalIterator last, OutputIterator result);
// [임의 접근 반복자]
// 양방향 반복자의 모든 기능을 포함, 첨자 연산자([])로 임의의 요소에 접근 가능,
// 증감 연산자로 양방향 이동, 요소의 순서를 결정하기 위해 관계 연산자 사용
// Sort() 함수의 원형은 다음과 같다
// template<class RandomAccessIterator>
// void Sort(RandomAccessIterator first, RandomAccessIterator last);*/

// iterator 헤더 파일
// 미리 정의된 반복자, 스트림 반복자, 반복자의 원형, 여러 지원 템플릿 포함!

// 스트림 반복자
/*// 입력 스트림 반복자는 istream_iterator
// template <class T, class charT = char,
//    class traits = char_traits<charT>,class Distance = ptrdiff_t>
// class istream_iterator : public iterator<input_iterator_tag,
//    T, Distance, const T*, const T&> { ... }
// 출력 스트림 반복자는 ostream_iterator 
// template <class T, class charT = char, class traits = char_traits<charT> >
// class ostream_iterator : public iterator<output_iterator_tag,
//    void, void, void, void> { ... }
#include <iterator>
#include <vector>
int main(void)
{
	vector<int> vc = { 1, 2, 3, 4, 5 };
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout));
	cout << endl;
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	// copy() 함수fh vertor 객체의 첫 요소 ~ 마지막 요소를 출력
	// cout 객체를 ostream_iterator 클래스 템플릿의 인수로 전달
	return 0;
}*/

// 삽입 반복자
/*// insert_iterator,  back_insert_iterator, front_insert_iterator
#include <iterator>
#include <list>
int main(void)
{
	list<int> ls = { 10 };
	ls.push_back(20);	// back_insert_iterator를 사용함. 
	ls.push_front(30);	// front_insert_iterator를 사용함. 
	copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));
	//  push_back(), push_front() 함수의 삽입 반복자 사용 → 리스트에 요소 삽입
	return 0;
}*/

// 역방향 반복자
/*// 역방향 반복자의 증가 연산자(++)는 순방향 반복자의 역방향으로 이동!
// rbegin(), rend() 멤버 함수를 사용 → 자동으로 reverse_iterator 반환
#include <iterator>
#include <list>
int main(void)
{
	list<int> ls = { 10, 20, 30 };
	copy(ls.rbegin(), ls.rend(), ostream_iterator<int>(cout, " "));
	//  rbegin(), rend() 함수의 역방향 반복자로 리스트 요소를 역순 출력
	return 0;
}*/

// 상수 반복자
/*// 반복자가 가리키는 값의 변경이 불가능한 반복자
// const_iterator 타입으로 정의
#include <iterator>
#include <list>
int main(void)
{
	list<int> ls = { 10, 20, 30 };
	list<int>::iterator iter;
	list<int>::const_iterator citer;
	iter = ls.begin();
	*iter = 100;
	citer = ls.end();
	// *citer = 300;    // 상수 반복자로 값의 변경이 불가능 (읽기만 가능)
	for (citer = ls.begin(); citer != ls.end(); citer++)
	{	cout << *citer << " ";	}
	// 반복자를 사용하여 리스트의 첫 번째 요소의 값을 변경
	return 0;
}*/

// 시퀀스 컨테이너: vector, deque, list, forward_list
// 데이터를 선형으로 저장하는 가장 일반적인 STL 컨테이너
// 삽입된 요소의 순서가 그대로 유지됨

// 벡터(vector) 컨테이너
/*// 요소 추가 or 삭제 → 자동으로 메모리를 재할당해 크기를 동적으로 변경
// vector<템플릿인수> 객체이름(생성자인수);
#include <iterator>
#include <vector>
int main(void)
{
	vector<int> vc = { 10, 20, 30 };	// vector 객체의 선언 및 초기화 
	cout << "현재 벡터의 크기는 " << vc.size() << "입니다." << endl;

	vc.push_back(40);				// vector 요소의 추가 
	cout << "현재 벡터의 크기는 " << vc.size() << "입니다." << endl;
	cout << "현재 벡터의 네 번째 요소는 " << vc[3] << "입니다." << endl;

	cout << "현재 벡터의 모든 요소는 다음과 같습니다 :" << endl;
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// 데큐(deque) 컨테이너
/*// double-ended queue
// 양 끝에서 빠르게 요소를 삽입하거나 삭제
#include <iterator>
#include <deque>
int main(void)
{
	deque<int> dq = { 20 };	// deque 객체의 선언 및 초기화 
	dq.push_back(30);		// 요소의 후방 삽입 
	dq.push_front(10);		// 요소의 전방 삽입 

	cout << "현재 데큐의 모든 요소는 다음과 같습니다 :" << endl;
	copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "현재 데큐의 첫 번째 요소는 " << dq.front() << "입니다." << endl;

	dq.pop_front();			// 요소의 전방 삭제 
	cout << "현재 데큐의 모든 요소는 다음과 같습니다 :" << endl;
	copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// 리스트(list) 컨테이너
/*// 이중 연결 리스트의 클래스 템플릿 표현
// 모든 요소에서 양방향 접근, 빠른 삽입 & 삭제 가능 but 임의 접근 불가
#include <iterator>
#include <list>
int main(void)
{
	list<int> ls = { 1, 2, 2, 3, 4, 3, 5, 5 };	// list 객체의 선언 및 초기화 
	//ls.sort();	// 1, 2, 2, 3, 3, 4, 5, 5
	//ls.unique();	// 1, 2, 3, 4, 3, 5
	ls.reverse();	// 5, 5, 3, 4, 3, 2, 2, 1
	// 그 외에 merge, splice 등의 함수
	cout << "현재 리스트의 모든 요소는 다음과 같습니다 :" << endl;
	copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// 순방향 리스트(forward_list) 컨테이너
/*// 단방향 연결 리스트의 클래스 템플릿 표현
// 순방향 반복자(forward iterator)만을 사용
#include <iterator>
#include <forward_list>
int main(void)
{
	forward_list<int> fls01 = { 10, 20, 400, 30 };	// forward_list 객체의 선언 및 초기화 
	forward_list<int> fls02 = { 40, 50 };
	forward_list<int>::iterator itr;

	fls01.remove(400);				// 값이 400인 모든 요소를 삭제함.
	cout << "현재 순방향 리스트의 모든 요소는 다음과 같습니다 :" << endl;
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	itr = fls01.begin();			// fls01의 첫 번째 요소를 가리키도록 반복자 초기화
	fls01.splice_after(itr, fls02);	// fls02의 모든 요소를 fls01의 첫 번째 요소 다음에 삽입 
	cout << "fls01 : ";
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "fls02 : ";
	copy(fls02.begin(), fls02.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// 연관 컨테이너: set, multiset, map, multimap
// 키와 값처럼 관련있는 데이터를 한 쌍으로 저장 (트리 기반 동작)
// 연관 컨테이너는 삽입되는 요소의 위치를 지정할 수 없음!
// +) 순서 지정 X 연관 컨테이너 → 해시 테이블 기반 동작

// 집합과 멀티집합 컨테이너
/*// 집합(set) 컨테이너는 저장하는 데이터 그 자체 = 키 (오름차순)
// 멀티집합(multiset)은 키의 중복을 허용 (같은 값 여러 번 저장 가능)
// 집합 컨테이너 → set<템플릿인수> 객체이름;
#include <iterator>
#include <set>
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };	// 배열 생성 및 초기화 
	set<int> st(arr, arr + 3);			// 배열의 일부 요소를 가지고 셋 컨테이너를 생성함. 
	cout << "현재 집합의 모든 요소는 다음과 같습니다." << endl;
	copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	st.insert(60);	// 요소의 추가 
	st.insert(70);	// 요소의 추가 
	st.erase(20);	// 요소의 삭제 
	cout << "현재 집합의 모든 요소는 다음과 같습니다." << endl;
	copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// 맵과 멀티맵 컨테이너
/*// 키와 값의 쌍으로 데이터를 관리, 정렬된 위치에 데이터 삽입
// 멀티맵은 값의 중복 허용 (하나의 키가 여러 값과 연결 가능!)
// 맵 컨테이너 → map<템플릿인수> 객체이름;
#include <iterator>
#include <map>
int main(void)
{
	map<string, int> mp;
	mp.insert(pair<string, int>("국어", 80));	// 익명의 pair 객체를 생성하여 추가함. 
	mp["수학"] = 100;							// 첨자 연산자를 이용하여 추가함. 

	cout << "현재 맵의 모든 요소는 다음과 같습니다." << endl;
	map<string, int>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
	return 0;
}*/

// 컨테이너 어댑터: stack, queue, priority_queue
// 기존 컨테이너의 인터페이스를 제한하여 만든 기능이 제한 or 변형된 컨테이너
// 각 기초가 되는 클래스의 인터페이스를 제한 → 특정 형태의 동작만 수행
// 반복자 지원하지 않음!

// 스택(stack) 컨테이너
/*// 가장 나중에 저장된(push) 데이터가 가장 먼저 인출(pop)
#include <stack>
int main(void)
{
	int decimal = 123;
	stack<int> st;
	do {
		st.push(decimal % 2);
		decimal /= 2;
	} while (decimal); // 10진수를 2진수로 변환 
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	} // 스택의 모든 요소를 인출 
	return 0;
}*/

// 큐(queue) 컨테이너
/*// 가장 먼저 저장된(push) 데이터가 가장 먼저 인출(pop)
#include <queue>
int main(void)
{
	int n = 20;		// 20개의 피보나치 수열을 출력함. 
	queue<int> que;
	que.push(0);	// 초기값인 0과 1을 저장함. 
	que.push(1);

	// 피보나치 수열 
	for (int i = 2; i < n; i++)
	{
		int temp = que.front();
		cout << temp << " ";
		que.pop();
		que.push(temp + que.front());
	}
	return 0;
}*/

// 우선순위 큐(priority_queue) 컨테이너
/*// 가장 먼저 저장된 요소가 아닌, 가장 큰 값을 지닌 요소가 맨 앞에 위치
// 즉, 우선순위 큐의 요소는 언제나 값의 내림차순으로 정렬!
#include <queue>
int main(void)
{
	priority_queue<int> pq;
	pq.push(10);
	pq.push(20);
	pq.push(100);
	pq.push(3);

	// 우선 순위 큐의 모든 요소를 인출 
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}*/

// 함수 객체 (functor) - 1
/*// 호출 연산자(())와 함께 사용할 수 있는 객체
// 타입 선언 후, 해당 클래스에서 호출 연산자를 오버로딩해서 구현
// 장점: 상태 포함 가능, 타입이므로 템플릿 인수로 사용 가능
#include <functional>
int main(void)
{
	plus<int> add;
	minus<int> sub;
	multiplies<int> mult;
	equal_to<int> comp;
	greater_equal<int> ge;
	cout << add(7, 3) << endl;
	cout << sub(7, 3) << endl;
	cout << mult(7, 3) << endl;
	cout << comp(7, 3) << endl;
	cout << ge(7, 3);
	return 0;
}*/

// 함수 객체 - 2
/*// 아래는 greater, less를 각각 sort()의 인수로 전달해 사용
// 이때 greater, less가 함수 객체임!
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;
int main(void)
{
	vector<int> vc = { 20, 40, 10, 30 };	// vector 객체의 선언 및 초기화 

	sort(vc.begin(), vc.end(), greater<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort(vc.begin(), vc.end(), less<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// STL 알고리즘
/*// STL의 목적 → 일반적인 알고리즘에 대한 효율적인 구현 제공
// 따라서 STL은 STL 알고리즘 함수 or STL 컨테이너의 멤버 함수 사용
// STL 알고리즘: 읽기, 변경, 정렬, 수치 알고리즘으로 구분
// <읽기 알고리즘>
// 컨테이너를 변경 X, 컨테이너의 지정된 범위에서 특정 데이터 읽기만
// find() :  특정 값을 가지는 첫 번째 요소 가리키는 입력 반복자 반환
// for_each() : 모든 요소를 함수 객체에 대입 후, 대입한 함수 객체 반환
// <변경 알고리즘>
// 컨테이너 변경 X, 컨테이너의 지정된 범위에서 요소의 값만 변경
// copy() : 모든 요소를 출력 반복자가 가리키는 위치에 복사
// swap() : 두 개의 참조가 가리키는 위치의 값을 서로 교환
// transform() : 모든 요소를 함수 객체에 대입 후, 출력 반복자가 가리키는 곳에 복사
// <정렬 알고리즘>
// 컨테이너의 지정된 범위의 요소들이 정렬되도록 컨테이너를 변경
// 임의 접근 반복자를 사용하므로 임의 접근이 가능한 컨테이너만이 사용 가능
// sort() : 모든 요소 서로 비교 후 오름차순 정렬
// stable_sort() : 모든 요소 서로 비교 후 오름차순 정렬 (같은 값은 상대적 순서 유지)
// binary_search() : 오름차순 정렬 후, 전달된 값과 같은 값이 있으면 true 반환
// <수치 알고리즘>
// numeric 헤더 파일에 정의
// accumulate() : 모든 요소의 합을 반환*/

// 파일 입출력
/*// 파일의 입력은 ifstream 클래스, 출력은 ofstream 클래스의 멤버 함수로 처리
// <입출력 동작 과정>
// 1. 스트림을 관리하기 위한 ifstream(또는 ofstream) 객체를 생성
// 2. 특정 파일과의 연결
//    ifstream ifs;            // ifs라는 ifstream 객체를 생성
//    ifs.open("example.txt"); // ifs를 example.txt와 연결
//    또는
//    ifstream ifs("example.txt"); // ifstream 객체 생성 후 example.txt와 연결
// 3. cin 객체나 cout 객체와 같은 방법으로 객체를 사용하여 입출력 수행
//    char ch;
//    char buf[20];
//    string str;
//    ifs >> ch;            // example.txt 파일에서 한 문자를 읽어 변수 ch에 저장
//    ifs.getline(buf, 20); // example.txt에서 한 행을 읽어 배열 buf에 저장
//    getline(ifs, str);    // example.txt에서 한 행을 읽어 문자열 객체 str에 저장
// 4. 모든 작업이 끝나면 파일과의 연결 종료
//     ifs.close(); // 파일과의 연결을 닫음 (안 해도 자동으로 닫힘)
// <스트림의 상태 검사하기>
// 1. if (ifs.fail()) { ... }  // 파일을 여는데 실패한 경우
// 2. if (!ifs.good()) { ... } // 파일을 여는데 실패한 경우
// 3. if (!ifs) { ... }        // 파일을 여는데 실패한 경우
// 또는 if (!ifs.is_open()) { ... } // 파일을 여는데 실패한 경우
// 다음은 단순히 파일을 열어 그 안에 저장된 텍스트 한 줄을 읽어 오는 예제
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream ifs;
	string str;
	ifs.open("example.txt"); // "C++ 프로그래밍"
	if (!ifs.is_open())
	{
		cout << "파일을 열 수가 없습니다!" << endl;
		exit(1);
	}
	else
	{
		cout << "파일을 성공적으로 열었습니다!" << endl;
		getline(ifs, str);
		cout << str << endl;
		ifs.close();
	}
}*/

// 파일 모드
/*// 파일의 사용 용도와 파일의 데이터를 어떤 방식으로 입출력할지 결정하는 상수
// ifs라는 ifstream 객체를 생성하고, example.txt와 읽기 모드로 연결
// → ifstream ifs("example.txt", ios_base::in);
// ifstream의 생성자와 open() 멤버 함수는 파일 모드 디폴트 인수가 ios_base::in
// ofstream의 경우에는 ios_base::out | ios_base::trunc
// ios_base::in → 파일을 오로지 읽는 것만 가능한 모드로 개방
// ios_base::out → 파일을 쓰는 것만이 가능한 모드로 개방
// ios_base::ate → 파일을 개방할 때 파일의 끝으로 파일 포인터를 이동시킴
// ios_base::app → 해당 파일의 맨 끝에서부터 데이터를 추가
// ios_base::trunc → 파일이 있으면 해당 파일의 모든 데이터를 지우고 개방
// ios_base::binary → 바이너리 모드로 개방*/

// 예외 처리
/*// try 문 : 예외가 발생할 가능성이 있는 코드 블록
// throw 문 : try 문에서 발생한 오류에 대한 정보를 전달
// catch 절 : 발생한 예외에 대해 예외 핸들러가 처리할 내용을 담은 코드 블록
// try문 뒤에 반드시 하나 이상의 catch절이 있어야 함
// 각 catch절은 자신이 처리할 예외 타입 지정 가능
// 이때, 특정 예외 타입 되신에 ... 사용하면, 모든 타입의 예외를 처리!
// 하지만 ...는 반드시 catch절 중 가장 마지막에만 사용
// 다음은 사용자가 정확히 양의 정수를 입력했는가를 throw 문으로 검사하는 예시
int IncreaseNumber(int n)
{
	if (n < 0)
		throw n;
	else if (n == 0)
		throw "0은 입력 불가능";
	return ++n;
}
int main(void)
{
	int num;
	cout << "양의 정수 하나 입력: ";
	while (cin >> num)
	{
		try
		{
			cout << "입력한 정수에서 1 증가시킨 값: " << IncreaseNumber(num) << endl;
		}
		catch (int input)
		{
			cout << input << "은 양의 정수가 아닙니다" << endl;
			cout << "양의 정수를 다시 입력하세요: ";
			continue;
		}
		catch (const char* st)
		{
			cout << st << endl;
			cout << "양의 정수를 다시 입력하세요: ";
			continue;
		}
		break;
	}
	return 0;
}*/

// 스택 풀기(stack unwinding)
/*// 예외를 처리하는 영역을 찾지 못해서
// 해당 예외가 호출된 영역의 상위 함수로 예외가 계속해서 전달되는 현상
// 즉, 예외 발생 시 catch 핸들러는 다음의 순서로 적절한 catch 절을 찾음
// 1. 스택에서 try 문과 가장 가까운 catch 절부터 차례대로 검사
// 2. 적절한 catch 절을 못 찾았으면,
//    바로 다음 바깥쪽 try 문 다음에 위치한 catch 절을 차례대로 검사
// 3. 이러한 과정을 가장 바깥쪽 try 문까지 계속 검사
// 4. 그래도 적절한 catch 절을 못 찾았으면, 미리 정의된 terminate() 함수가 호출
void Func03() { throw 0; }
void Func02() { Func03(); }
void Func01() { Func02(); }
int main(void)
{
	try
	{
		Func01();
	}
	catch (int ex)
	{
		cout << "예외 처리(main) : " << ex << endl;
	}
	return 0;
}
// 이 예시는 Func03() 함수에서 예외가 발생
// but Func03() 함수에는 예외를 처리할 catch 절이 없음
// → 프로그램은 Func02() 함수로 예외 전달
// 이때 스택에 저장되어 있던 Func03() 함수에 관한 스택 프레임을 모두 인출 후 이동
// but Func02() 함수에서도 예외를 처리할 수 없음
// → Func01() 함수로 예외 전달
// but Func01() 함수에도 예외를 처리할 catch 절이 없음
// → Func01() 함수를 호출한 main() 함수로 전달
// 즉, 예외의 실제 처리는 main() 함수 내의 catch 절에서 수행*/

// Exception 클래스
/*// logic_error : 일반적인 논리에 관한 오류들 처리 가능
// runtime_error : 프로그램 실행 중 발생 가능한 다양한 오류들 처리 가능
// <처리 되지 않은 예외>
// 발생한 예외를 처리할 catch 절 못 찾으면, 미리 정의된 terminate() 함수 호출
// terminate()는 기본적으로 abort() 함수를 호출해 프로그램 강제로 종료시킴
// 단, set_terminate()를 사용하면 이러한 terminate()의 기본 동작 변경 가능!
#include <iostream>
#include <exception>
using namespace std;
void MyErrorHandler()
{
	cout << "처리되지 않은 예외가 발생했습니다." << endl;
	exit(-1);
}
int main(void)
{
	set_terminate(MyErrorHandler);
	try { throw 1; }
	catch (char* const ex)
	{
		// 이 catch 절은 정수형 예외를 처리할 수 없음.
	}
	return 0;
}
// try 문에서 정수형 예외가 발생 but 아래의 catch 절은 해당 예외를 처리 X
// → 따라서 set_terminate() 함수로 미리 정의한 내용이 출력!*/

// The End