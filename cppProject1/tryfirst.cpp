#include <iostream>
using namespace std;

// �⺻ �����
/*
int main()
{
    int age;
    cout << "�������� ���̸� �Է��� �ּ��� : ";
    cin >> age;
    cout << "�������� ���̴� " << age << "�� �Դϴ�." << endl;
    return 0;
}
*/

// ��� (����)
/*
int main()
{
	int a = 10;
	cout << "���� 10�� 10������ ǥ���ϸ� " << a << "�̸�, " << endl;
	cout << oct;
	cout << "���� 10��  8������ ǥ���ϸ� " << a << "�̸�, " << endl;
	cout << hex;
	cout << "���� 10�� 16������ ǥ���ϸ� " << a << " �Դϴ�.";
	return 0;
}
*/

// ����� Ÿ�� ��ȯ : (��ȯ��Ÿ��) ��ȯ�ҵ����� or ��ȯ��Ÿ�� (��ȯ�ҵ�����)
/*int main(void)
{
	int num1 = 1;
	int num2 = 4;

	double result1 = num1 / num2;
	double result2 = (double)num1 / num2;
	double result3 = double(num1) / num2;

	cout << "result1�� ����� ���� " << result1 << "�Դϴ�." << endl;
	cout << "result2�� ����� ���� " << result2 << "�Դϴ�." << endl;
	cout << "result3�� ����� ���� " << result3 << "�Դϴ�.";
	return 0;
}*/

// ��� ������
/*int main(void)
{
	int num1 = 10;
	int num2 = 4;

	cout << "+ �����ڿ� ���� �ᱣ���� " << num1 + num2 << "�Դϴ�." << endl;
	cout << "- �����ڿ� ���� �ᱣ���� " << num1 - num2 << "�Դϴ�." << endl;
	cout << "* �����ڿ� ���� �ᱣ���� " << num1 * num2 << "�Դϴ�." << endl;
	cout << "/ �����ڿ� ���� �ᱣ���� " << num1 / num2 << "�Դϴ�." << endl;
	cout << "% �����ڿ� ���� �ᱣ���� " << num1 % num2 << "�Դϴ�.";
	return 0;
}*/

// ���� ������
/*int main(void)
{
	int num1 = 8;
	int num2 = 8;
	int num3 = 8;

	num1 = num1 + 5;
	num2 += 5;
	num3 = +5;

	cout << "-  �����ڿ� ���� �ᱣ���� " << num1 << "�Դϴ�." << endl;
	cout << "+= �����ڿ� ���� �ᱣ���� " << num2 << "�Դϴ�." << endl;
	cout << "=+ �����ڿ� ���� �ᱣ���� " << num3 << "�Դϴ�.";
	return 0;
}*/

// ���� ������
/*int main(void)
{
	int x = 10;
	int y = x-- + 5 + --x;

	cout << "���� x�� ���� " << x << "�̰�, ���� y�� ���� " << y << "�� ���߽��ϴ�.";
	return 0;
}*/

// 0: false, �� ��: true

// ��Ʈ ������
/*int main(void)
{
	int num1 = 15;
	int num2 = 8;

	cout << "~  �����ڿ� ���� �ᱣ���� " << (~num1) << "�Դϴ�." << endl;
	cout << "<< �����ڿ� ���� �ᱣ���� " << (num2 << 2) << "�Դϴ�." << endl;
	cout << ">> �����ڿ� ���� �ᱣ���� " << (num2 >> 2) << "�Դϴ�.";
	return 0;
}*/

// ���� ������
/*int main(void)
{
	int num1 = 11;
	int num2 = 10;
	int result;

	result = (num1 < num2) ? num1 : num2;

	cout << "�� �߿� �� �������� " << result << "�Դϴ�." << endl;
	cout << "ù ��° ���� " << num1 << "�̰�, �� ��° ���� " << num2 << "�Դϴ�.";
}*/

// sizeof ������
/*int main(void)
{
	cout << "char���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(char) << " ����Ʈ" << endl;
	cout << "short���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(short) << " ����Ʈ" << endl;
	cout << "int���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(int) << " ����Ʈ" << endl;
	cout << "long���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(long) << " ����Ʈ" << endl;
	cout << "long long���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(long long) << " ����Ʈ" << endl;
	cout << "float���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(float) << " ����Ʈ" << endl;
	cout << "double���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(double) << " ����Ʈ" << endl;
	cout << "long double���� �Ҵ�Ǵ� �޸� ũ��� " << sizeof(long double) << " ����Ʈ";
}*/

// CPP�� �߰��� ������
// ���� ���� ������: ::�ĺ��� / Ŭ�����̸�::�ĺ��� / ���ӽ����̽�::�ĺ��� / ����ü::�ĺ���
// ��� ������ ������: Ŭ����Ÿ���ǰ�ü.*����̸� / Ŭ����Ÿ�԰�ü��������->*����̸�
// typeid ������: typeid(ǥ����)

// ���ǹ� (if)
/*int main(void)
{
	int num;
	cin >> num;
	if (num < 5)
	{	cout << "�Է��Ͻ� ���� 5���� �۽��ϴ�." << endl;	}
	else if (num == 5)
	{	cout << "�Է��Ͻ� ���� 5�Դϴ�." << endl;	}
	else
	{	cout << "�Է��Ͻ� ���� 5���� Ů�ϴ�." << endl;	}
	return 0;
}*/

// ���ǹ� (switch)
/*int main(void)
{
	int num;
	cin >> num;
	switch (num)
	{
	case 1: cout << "�Է��Ͻ� ���� 1�Դϴ�." << endl; break;
	case 2:	cout << "�Է��Ͻ� ���� 2�Դϴ�." << endl; break;
	case 3: cout << "�Է��Ͻ� ���� 3�Դϴ�." << endl; break;
	case 4: cout << "�Է��Ͻ� ���� 4�Դϴ�." << endl; break;
	case 5: cout << "�Է��Ͻ� ���� 5�Դϴ�." << endl; break;
	default: cout << "1���� 5������ ���� �Է��� �ּ���!" << endl; break;
	}
	return 0;
}*/

// �ݺ��� (while)
/*int main(void)
{
	int i = 0, num;
	cin >> num;
	while (i < num)
	{
		cout << "while ���� ���� " << i + 1 << " ��° �ݺ� �������Դϴ�." << endl;
		i++; // �� �κ��� �����ϸ� ���� ������ ������ ��
	}
	cout << "while ���� ����� �� ���� i�� ���� " << i << "�Դϴ�." << endl;
	return 0;
}*/

// �ݺ��� (do while)
/*int main(void)
{
	int i = 0, num;
	cin >> num;
	do {
		cout << "do / while ���� ���� " << i + 1 << " ��° �ݺ� �������Դϴ�." << endl;
		i++; // �� �κ��� �����ϸ� ���� ������ ������ ��
	} while (i > num);
	cout << "do / while ���� ����� �� ���� i�� ���� " << i << "�Դϴ�." << endl;
}*/

// �ݺ��� (for)
/*int main(void)
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) // ���� i�� �� for ���� ����Ǹ� ���� �Ҹ��.
	{ cout << "ù ��° for ���� " << i + 1 << " ��° �ݺ� �������Դϴ�." << endl; }
	for (int i = 0; i < num; i++) // ���� ���� i�� �ٽ� �����ص� ������.
	{ cout << "�� ��° for ���� " << i + 1 << " ��° �ݺ� �������Դϴ�." << endl; }
	return 0;
}*/

// ���� ����� for��
/*int main(void)
{
	int arr[5] = { 1, 3, 5, 7, 9 };

	for (int element : arr)
	{
		cout << element << " ";
	}
	return 0;
}*/

// continue��
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

// break��
/*int main(void)
{
	int num = 1, sum = 0;
	int end_num;
	cin >> end_num;

	while (1) // ���� ���� 
	{
		sum += num;
		if (num == end_num)
		{	break;	}
		num++;
	}

	cout << "1���� " << end_num << "���� ���� ���� " << sum << "�Դϴ�.";
	return 0;
}*/

// �迭 ����
/*int main(void)
{
	int sum = 0;
	int grade[3];	// ���̰� 3�� int�� �迭 ���� 

	// �ε����� �̿��� �迭�� �ʱ�ȭ
	grade[0] = 85;	// ���� ���� 
	grade[1] = 65;	// ���� ���� 
	grade[2] = 90;	// ���� ���� 

	for (int i = 0; i < 3; i++)
	{
		sum += grade[i];	// �ε����� �̿��� �迭���� ���� 
	}

	cout << "������ ���� �� ���� �հ�� " << sum << "���̰�, ��� ������ " << (double)sum / 3 << "���Դϴ�.";
	return 0;
}*/

// �迭�� Ư¡
/*int main(void)
{
	int sum = 0;
	int grade[3] = { 85, 65, 90 };	// grade[0], grade[1], grade[2]�� ���� �� �ʱ�ȭ 
	grade[3] = 100;					// grade[3]�� �������� �ʰ� �ʱ�ȭ ���� 

	for (int i = 0; i < 4; i++)		// grade[3]�� ���Ŀ� ���� 
	{
		sum += grade[i];			// �ε����� �̿��� �迭�� ���� 
	}

	cout << "������ ���� �� ���� �հ�� " << sum << "���̰�, ��� ������ " << (double)sum / 3 << "���Դϴ�.";
	return 0;

	// ���� ��Ÿ��
}*/

// �迭 ���� ���ϱ�
/*int main(void)
{
	int grade[] = { 85, 65, 90 };					// �迭�� ���̸� ������� ���� 
	int len = sizeof(grade) / sizeof(grade[0]);	// �迭�� ���̸� ���ϴ� ���� 

	cout << "�迭 grade�� ���̴� " << len << "�Դϴ�.";
	return 0;
}*/

// 2���� �迭
/*int main(void)
{
	int arr1[2][3] = { 10, 20, 30, 40 };
	int arr2[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	cout << "arr1�� �迭 ����� ��" << endl;
	cout << arr1[0][0] << " ";
	cout << arr1[0][1] << " ";
	cout << arr1[0][2] << " ";
	cout << arr1[1][0] << " ";
	cout << arr1[1][1] << " ";
	cout << arr1[1][2] << endl;

	cout << "arr2�� �迭 ����� ��" << endl;
	cout << arr2[0][0] << " ";
	cout << arr2[0][1] << " ";
	cout << arr2[0][2] << " ";
	cout << arr2[1][0] << " ";
	cout << arr2[1][1] << " ";
	cout << arr2[1][2];
	return 0;
}*/

// 2���� �迭 �Ϻθ� �ʱ�ȭ
/*#include <iomanip>
int main(void)
{
	int arr_col_len, arr_row_len;
	int arr[3][4] = {
		{10, 20},
		{30, 40, 50, 60},
		{0, 0, 70, 80}
	};
	// ���� ���̴� ���� ����, ���� ���̴� �ݵ�� ���!

	arr_col_len = sizeof(arr[0]) / sizeof(arr[0][0]);				// 2���� �迭�� ���� ���̸� ����� 
	arr_row_len = (sizeof(arr) / arr_col_len) / sizeof(arr[0][0]);	// 2���� �迭�� ���� ���̸� ����� 

	cout << "arr�� �迭 ����� ��" << endl;
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

// ������
/*int main(void)
{
	int num1 = 1234;
	double num2 = 3.14;

	int* ptr_num1 = &num1;
	double* ptr_num2 = &num2;

	cout << "�������� ũ��� " << sizeof(ptr_num1) << "�Դϴ�." << endl;
	cout << "������ ptr_num1�� ����Ű�� �ִ� �ּҰ��� " << ptr_num1 << "�Դϴ�." << endl;
	cout << "������ ptr_num1�� ����Ű�� �ִ� �ּҿ� ����� ���� " << *ptr_num1 << "�Դϴ�." << endl;
	cout << "������ ptr_num2�� ����Ű�� �ִ� �ּҰ��� " << ptr_num2 << "�Դϴ�." << endl;
	cout << "������ ptr_num2�� ����Ű�� �ִ� �ּҿ� ����� ���� " << *ptr_num2 << "�Դϴ�.";
	return 0;
}*/

// ������ ����
/*int main(void)
{
	int arr[3] = { 10, 20, 30 };	// �迭 ���� 
	int* ptr_arr = arr;			// �����Ϳ� �迭�� �̸��� ������.

	cout << "�迭�� �̸��� �̿��Ͽ� �迭 ��ҿ� ���� : "
		<< arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
	cout << "    �����͸� �̿��Ͽ� �迭 ��ҿ� ���� : "
		<< ptr_arr[0] << ", " << ptr_arr[1] << ", " << ptr_arr[2] << endl;
	cout << "�迭�� �̸����� ������ ������ �� �迭 ��ҿ� ���� : "
		<< *(arr + 0) << ", " << *(arr + 1) << ", " << *(arr + 2) << endl;
	// ����: arr[n] == *(arr + n)

	cout << "�迭�� �̸��� �̿��� �迭�� ũ�� ��� : " << sizeof(arr) << endl;
	cout << "    �����͸� �̿��� �迭�� ũ�� ��� : " << sizeof(ptr_arr);
	//  �����͸� �̿��� ũ�� ��� �� �迭�� ũ�Ⱑ �ƴ� ������ ���� ��ü�� ũ�Ⱑ ���
	return 0;
}*/

// new & delete ������
/*int main(void)
{
	int* ptr_int = new int;
	// Ÿ��* �������̸� = new Ÿ��;
	*ptr_int = 100;

	double* ptr_double = new double;
	*ptr_double = 100.123;

	cout << "int�� ������ ���� " << *ptr_int << "�Դϴ�." << endl;
	cout << "int�� ������ �޸� �ּҴ� " << ptr_int << "�Դϴ�." << endl;

	cout << "double�� ������ ���� " << *ptr_double << "�Դϴ�." << endl;
	cout << "double�� ������ �޸� �ּҴ� " << ptr_double << "�Դϴ�." << endl;

	delete ptr_int;
	delete ptr_double;
	// delete �������̸�;
	return 0;
}*/

// ���ڿ� (string Ŭ���� ��� X)
/*int main(void)
{
	const int SIZE = 20;
	char address[SIZE];
	char name[SIZE];

	cout << "�ڽ��� �̸��� �����ּ��� : ";
	//cin >> name;
	// cin ��ü�� ����, �� ����, ĳ���� ���� ���� ���� ��� ���ڿ��� ������ �ν�
	//cin.get(name, SIZE).get();
	// ������ 20����Ʈ �̻��� �̸��� �Է��� ���, ���ø��� �Է¹��� ����
	cin.get(name, SIZE).ignore(SIZE, '\n');
	cout << "�ڽ��� ��� �ִ� ���ø� �����ּ��� : ";
	//cin >> address;
	//cin.get(address, SIZE).get();
	cin.get(address, SIZE).ignore(SIZE, '\n');
	cout << address << "�� ��� �ִ� " << name << "��~ �����մϴ�!";
}*/

// ���ڿ� (string Ŭ���� ��� O)
/*#include <string>
int main(void)
{
	string address, name;
	cout << "�ڽ��� �̸��� �����ּ��� : ";
	getline(cin, name);
	cout << "�ڽ��� ��� �ִ� ���ø� �����ּ��� : ";
	getline(cin, address);
	cout << address << "�� ��� �ִ� " << name << "��~ �����մϴ�!";
	return 0;
	// ��� ���� �ذ��!
}*/

// ���ڿ� ���� �� �ʱ�ȭ
/*#include <string>
int main(void)
{
	string dog;
	cout << "���� dog ������ ���̴� " << dog.length() << "�Դϴ�." << endl;
	dog = "Navi";
	cout << dog << "! ���� �̻� �̸��̳׿�!" << endl;
	cout << "���� dog ������ ���̴� " << dog.length() << "�Դϴ�." << endl;
	cout << "������ �̸��� ù ���ڴ� �ٷ� " << dog[0] << "�Դϴ�.";
	return 0;
}*/

// ���ڿ� ó��
/*#include <string>
int main(void)
{
	string str1 = "C++ is Cool!";
	string str2;
	str2 = str1;	// ���ڿ� ���� ���� 
	cout << str2 << endl;

	string strr1 = "C++ is ";
	string strr2 = "Cool! and funny!";
	string strr3;
	strr3 = strr1 + strr2; // ���ڿ� ���� ����
	cout << strr3 << endl;
	strr1 += strr2;       // ���ڿ� �߰� ����
	cout << strr1 << endl;

	// string ��ü�� �̿��� ���ڿ� �Է� �� cin ��ü, ��� �� cout ��ü ���
	// cin ��ü�� �̿��� ���ڿ��� �Է��� �� �ܾ� ������ �����
	// ���ڿ��� �� ��(line)�� �а� ���� ���� getline() �Լ��� ����ؾ� ��
	string stname, stsubject;
	cout << "�ڽ��� �̸��� �����ּ��� : ";
	getline(cin, stname);
	cout << "���� �ڽ��ִ� ������ �����ּ��� : ";
	getline(cin, stsubject);
	cout << stname << "���� ���� �ڽ��־� �ϴ� ������ �ٷ� " << stsubject << "�Դϴ�!";

	return 0;
}*/

// string �޼ҵ�
/*#include <string>
// length(), size(), append(), find(), compare(), replace(), capacity(), max_size()
int main(void)
{
	string str1 = "C++ Programming";
	string str2 = "C++ Programming";
	cout << "���ڿ� str1�� ���̴� " << str1.length() << "�Դϴ�." << endl;
	cout << "���ڿ� str2�� ���̴� " << str2.size() << "�Դϴ�." << endl;
	// length�� ���ڿ� ����, size�� �ش� string ��ü�� �޸� ��� ũ��

	// ���ڿ�.append(�߰��ҹ��ڿ�); �� �߰��� ���ڿ��� �� ���� �߰�
	// ���ڿ�.append(�߰��ҹ��ڿ�, ������ġ, ����);
	//				  �� �߰��� ���ڿ��� ���� ��ġ���� ������ŭ�� �� ���� �߰�
	// ���ڿ�.append(����, �߰��ҹ���); �� �߰��� ���ڸ� ������ŭ �� ���� �߰�
	string s1str1, s1str2, s1str3;
	s1str1.append("C++ Programming");
	s1str2.append("C++ Programming", 4, 7);
	s1str3.append(4, 'X');
	cout << s1str1 << endl;
	cout << s1str2 << endl;
	cout << s1str3 << endl;

	// ���ڿ�.find(ã�����ڿ�); �� �ε��� 0���� ���ڿ��� ã��, �� (����)��ġ�� ��ȯ
	// ���ڿ�.find(ã������); �� �ε��� 0���� ���ڸ� ã��, �� ��ġ�� ��ȯ
	// ���ڿ�.find(ã�����ڿ�, ������ġ); �� ���� ��ġ���� ���ڿ��� ã��, �� ��ġ�� ��ȯ
	string s2str = "C++ Programming";
	cout << s2str.find("Pro") << endl;
	cout << s2str.find('r') << endl;
	if (s2str.find("Pro", 5) != string::npos)
	{
		cout << "�ش� ���ڿ��� ã�ҽ��ϴ�." << endl;
	}
	else
	{
		cout << "�ش� ���ڿ��� ã�� ���߽��ϴ�." << endl;
	}
	// ���� ����� string::npos�� string Ŭ������ static const size_type= -1 �� ��õ�

	// str1.compare(str_02) == 0 �� str1�� str2�� ���� ���
	// str1.compare(str_02) < 0  �� str1�� str2���� ���� ���������� �տ� ���� ���
	// str1.compare(str_02) > 0  �� str1�� str2���� ���� ���������� �ڿ� ���� ���
	string s3str1 = "ABC";
	string s3str2 = "ABD";
	if (s3str1.compare(str2) == 0)
	{
		cout << s3str1 << "�� " << s3str2 << "�� ����" << endl;
	}
	else if (s3str1.compare(s3str2) < 0)
	{
		cout << s3str1 << "�� " << s3str2 << "���� ���� ���� ������ �տ� ����" << endl;
	}
	else
	{
		cout << s3str1 << "�� " << s3str2 << "���� ���� ���� ������ �ڿ� ����" << endl;
	}

	// ���ڿ�.replace(��ü�ҹ��ڿ��ǽ�����ġ, ��ü�ҹ��ڿ��Ǳ���, ���ο�ڿ�);
	// �� ���޵� ���� ��ġ���� ���ڿ��� ���̸�ŭ�� ������ �Ŀ�, ���ο� ���ڿ��� ������
	string s4str1 = "C++ is very nice!";
	string s4str2 = "nice";
	string s4str3 = "awesome";
	string::size_type index = s4str1.find(s4str2);
	if (index != string::npos)
	{
		s4str1.replace(index, s4str2.length(), s4str3);
	}
	cout << s4str1 << endl;

	// capacity() : �ش� ���ڿ��� ����� ���� �ʰ� ���� ������ �ִ� ���ڿ� ���� ��ȯ
	// max_size() : �ش� ���ڿ��� �ִ��� ���Թ����� ���� �� �ִ� �ִ� ���ڿ� ���� ��ȯ
	string s5str = "C++ programming";
	cout << "���ڿ� str�� length�� " << s5str.length() << "�Դϴ�." << endl;
	cout << "���ڿ� str�� capacity�� " << s5str.capacity() << "�Դϴ�." << endl;
	cout << "���ڿ� str�� max_size�� " << s5str.max_size() << "�Դϴ�.";

	return 0;
}*/

// ����ü
/*#include <string>
struct book
{
	string title;
	string author;
	int price;
};
int main(void)
{
	book web_book = { "HTML�� CSS", "ȫ�浿", 28000 };
	book java_book = { "Java language", "�̼���" };
	cout << "ù ��° å�� ������ " << web_book.title << "�̰�, ���ڴ� " << web_book.author
		<< "�̸�, ������ " << web_book.price << "���Դϴ�." << endl;
	cout << "�� ��° å�� ������ " << java_book.title << "�̰�, ���ڴ� " << java_book.author
		<< "�̸�, ������ " << java_book.price << "���Դϴ�.";
	return 0;
}*/

// �Լ��� ����ü
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
		// ����ü�� ��� ������ �Լ��� �μ��� ����
	//hong_prop = CalcProperty2(&hong);
		// ����ü�� �ּҸ� �Լ��� �μ��� ����
	Prop hong; hong = InitProperty();
	hong_prop = CalcProperty3(&hong);
		// ����ü�� ��� ������ �Լ��� �μ��� ������
	cout << "ȫ�浿�� ����� ���� " << hong.savings << "���� ���� " << hong.loan
		<< "���� ������ �� " << hong_prop << "���Դϴ�.";
	return 0;
}
int CalcProperty1(int s, int l)
{
	return (s - l);
}
int CalcProperty2(Prop* money)
{
	money->savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ����
	return (money->savings - money->loan);
}
Prop InitProperty(void)
{
	Prop hong_prop = { 10000000, 4000000 };
	return hong_prop; // ����ü�� �Լ��� ��ȯ������ ��ȯ��.
}
int CalcProperty3(const Prop* money)
// const Ű���带 ����Ͽ� ����ü�� �����͸� ���� �����ϴ� ���� ����
{
	//money->savings = 100; // ȣ��� �Լ����� ���� ����ü�� �����͸� ����
	return (money->savings - money->loan);
}*/

// ��ø�� ����ü
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
		{ "�浿", "ȫ" },
		"����� ������ ���ﵿ",
		"�л�"
	};
	cout << hong.address << endl << endl;
	cout << hong.first_name.last << hong.first_name.first << "����," << endl;
	cout << "�׵��� �� ���´�? ������ " << hong.job << "�̴�?" << endl;
	cout << "������ �� �ѹ� ����." << endl << "�� ����.";
	return 0;
}*/

// ����ü ũ��
/*struct TypeSize
{
	char a;
	int b;
	double c;
};
int main(void)
{
	cout << "����ü TypeSize�� �� ����� ũ��� ������ �����ϴ�." << endl;
	cout << sizeof(char) << ", " << sizeof(int) << ", " << sizeof(double) << endl << endl;
	cout << "����ü TypeSize�� ũ��� ������ �����ϴ�." << endl;
	cout << sizeof(TypeSize); // 13�� �ƴϰ� 16��! (����Ʈ �е�(byte padding) ����)
	return 0;
}*/

// ����ü (union)
/*// ��� ��� ������ �ϳ��� �޸� ������ ����
// ����ü�� �� ���� �ϳ��� ��� �����ۿ� ����� �� ����!
// ����ü�� ũ�Ⱑ ���� ū ��� ������ ũ��� �޸𸮸� �Ҵ����
// ���� ���� ũ��� ������ �迭 ��ҿ� �پ��� ũ���� �����͸� ������ �� ����!
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
	// ����ü�� �� ��� �������� �ʱ�ȭ�ϸ�, ������ ��� �����鵵 ���� �����͸� ������
	cout << hex;
	cout << var.a << endl;
	cout << var.b << endl;
	cout << var.c;
	return 0;
}*/

// ����ü(enumerated types)
/*// ���ο� Ÿ���� �����ϸ鼭 ���ÿ� �� Ÿ���� ���� �� �ִ� ������ ������� ���� ���
enum Weather { SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30 };
int main(void)
{
	int input;
	Weather wt;
	cout << "������ ������ �Է��� �ּ��� : " << endl;
	cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
	cin >> input;
	wt = (Weather)input;
	switch (wt)
	{
	case SUNNY:
		cout << "������ ������ ���� ���ƿ�!"; break;
	case CLOUD:
		cout << "������ ������ �帮�׿�!"; break;
	case RAIN:
		cout << "������ ������ �� �ַ��ַ� ���׿�!"; break;
	case SNOW:
		cout << "������ ������ �Ͼ� ���� ������!"; break;
	default:
		cout << "��Ȯ�� ������� �Է��� �ּ���!"; break;
	}
	cout << endl << "����ü Weather�� �� ������� " << SUNNY << ", " << CLOUD << ", "
		<< RAIN << ", " << SNOW << "�Դϴ�.";
	return 0;
}*/

// �Լ�
/*int SmallNum(int, int); // main ���� �Լ��� ���� ����!
int main(void)
{
	int result;
	result = SmallNum(4, 6);
	cout << " �� �� �� �� ���� ���� " << result << "�Դϴ�." << endl;
	result = SmallNum(8, 6);
	cout << " �� �� �� �� ���� ���� " << result << "�Դϴ�." << endl;
	result = SmallNum(2, 8);
	cout << " �� �� �� �� ���� ���� " << result << "�Դϴ�." << endl;
	return 0;
}
int SmallNum(int num1, int num2)
{
	if (num1 <= num2) { return num1; }
	else { return num2; }
}*/

// ���� ���� ����(call by value) - ���� ����, ������ ����
/*void Local(int);
int main(void)
{
	int var = 10;
	cout << "���� var�� �ʱⰪ�� " << var << "�Դϴ�." << endl;
	Local(var);
	cout << "Local() �Լ� ȣ�� �� ���� var�� ���� " << var << "�Դϴ�.";
	return 0;
}
void Local(int num)
{	num += 10;	}*/

// ������ ���� ����(call by reference) - ���� ������ ����, �ּҰ�
/*void Local(int&);
int main(void)
{
	int var = 10;
	cout << "���� var�� �ʱⰪ�� " << var << "�Դϴ�." << endl;
	Local(var);
	cout << "Local() �Լ� ȣ�� �� ���� var�� ���� " << var << "�Դϴ�.";
	return 0;
}
void Local(int& num)
{	num += 10;	}*/

// ����) main �Լ��� ���� �� void(�Ǵ� int) main(int argc,char *argv[]);

// ��� ȣ��
/*int RecursiveSum(int);
int main(void)
{
	int n;
	cout << "n�� ���� �Է��ϼ���: ";
	cin >> n;
	cout << "1���� " << n << "������ ��: " << RecursiveSum(n);;
	return 0;
}
int RecursiveSum(int n)
{
	if (n == 1)						// n�� 1�̸�, �׳� 1�� ��ȯ��. 
	{	return 1;	}
	return n + RecursiveSum(n - 1);
	// n�� 1�� �ƴϸ�, n�� 1���� (n-1)������ �հ� ���� ���� ��ȯ��.
}*/

// �Լ� ������
/*// �Լ� ������ void Func(int, int); �� �����ʹ� void (*ptr_func)(int, int);
typedef double (*Arith)(double, double); // typedef�� ���ο� �̸� ����
double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
//double Calculator(double, double, double (*func)(double, double));
double Calculator(double, double, Arith);
int main(void)
{
	//double (*calc)(double, double) = NULL; // �Լ� ������ ���� (�ʱ�ȭ)
	Arith calc = NULL; // �Լ� ������ ����
	double num1 = 3, num2 = 4, result = 0;
	char oper = '*';
	switch (oper)
	{
	case '+': calc = Add; break;
	case '-': calc = Sub; break;
	case '*': calc = Mul; break;
	case '/': calc = Div; break;
	default: cout << "��Ģ����(+, -, *, /)���� �����մϴ�."; break;
	}
	result = Calculator(num1, num2, calc);
	cout << "��Ģ ������ ����� " << result << "�Դϴ�.";
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

// ������

