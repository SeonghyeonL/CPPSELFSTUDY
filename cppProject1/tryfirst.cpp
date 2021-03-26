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

// 연산자 오버로딩
