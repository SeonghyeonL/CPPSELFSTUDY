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
/*// int& �������̸� = �����̸�; �� ������ ���� (Ÿ�� �ĺ���)
// ������: ��� ������ ���� �޸� ��ġ�� ����
int main(void)
{
	int x = 10;	// ������ ���� 
	int& y = x;	// ������ ���� 
	cout << "x : " << x << ", y : " << y << endl;
	y++;		// �����ڸ� �̿��� ���� ����
	cout << "x : " << x << ", y : " << y << endl;
	cout << "x�� �ּҰ� : " << &x << ", y�� �ּҰ� : " << &y;
	return 0;
}*/

// ������ + �Լ�
/*void Swap(int&, int&);
int main(void)
{
	int num1 = 3, num2 = 7;
	cout << "���� ��: num1 = " << num1 << ", num2 = " << num2 << endl;
	Swap(num1, num2);
	cout << "���� ��: num1 = " << num1 << ", num2 = " << num2 << endl;
	return 0;
}
void Swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}*/

// C++���� �����ڴ� ũ�Ⱑ ū ����ü�� Ŭ������ �ٷ� ������ ����ϴ� ���� ����

// �����ڿ� ����ü
/*struct Book
{
	string title;
	string author;
	int price;
};
void Display(const Book&);
int main(void)
{
	Book web_book = { "HTML�� CSS", "ȫ�浿", 28000 };
	Display(web_book);
	return 0;
}
void Display(const Book& bk)
{
	cout << "å�� ������ " << bk.title << "�̰�, ";
	cout << "���ڴ� " << bk.author << "�̸�, ";
	cout << "������ " << bk.price << "���Դϴ�.";
}*/

// ����Ʈ �μ� (�⺻���� �̸� ���ǵǾ� �ִ� �μ�)
/*// ����: �Լ��� �������� ����, ���� �����ʺ��� ������θ� ����
// void Display(int x, int y, char ch, int z = 4); // ����
// void Display(int x, int y, char ch = 'a', int z = 4); // ����
// void Display(int x, int y = 2, char ch, int z = 4); // ����
// void Display(int x = 1, int y = 2, char ch, int z); // ����
// void Display(int x, int y, char ch = 'a', int z = 4);�� ���ؼ�...
// Display(1, 2); �� ������, display(1, 2, 'a', 4)�� ����
// Display(3, 4, 'b'); �� ������, display(3, 4, 'b', 4)�� ����
// Display(5, 6, 'c', 9); �� ������, display(5, 6, 'c', 8)�� ����
// Display(7, 8, , 9); �� ���� : �μ� ������ �ǳʶ� �� ����!
double Multi(double, double = 2);
int main(void)
{
	cout << Multi(3) << endl;		// Multi(3, 2)�� ���� : 3 * 3 
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

// �Լ� �����ε� (���� �̸��� �Լ��� �ߺ��Ͽ� �����ϴ� ��)
/*// �Լ� �ñ״�ó: �Լ��� ������ ��õǴ� �Ű����� ����Ʈ
// 1. void Display(const char* str, int n); // ���ڿ� str�� n�� ���
// 2. void Display(const char* str1, const char* str2); // str1�� str2�� ���޾� ���
// 3. void Display(int x, int y); // x * y�� ���
// 4. void Display(double x, double y); // x / y�� ���
// 1. Display("C++", 3);              // 1�� Display() �Լ� ȣ�� -> "C++C++C++"
// 2. Display("C++", " Programming"); // 2�� Display() �Լ� ȣ�� -> "C++ Programming"
// 3. Display(3, 4);                  // 3�� Display() �Լ� ȣ�� -> 12
// 4. Display(4.2, 2.1);              // 4�� Display() �Լ� ȣ�� -> 2
// 5. Display(4.2, 3);                // 3���� 4�� ��� ȣ�� ���� -> ������ ���� �߻�
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

// �ζ��� �Լ�
/*// ȣ�� �� �Լ��� ��� �ڵ带 ȣ��� �ڸ��� �ٷ� ���� (ȣ�� �ð���)
// inline �Լ��ǿ��� or inline �Լ�������
// �Ʒ��� �ζ��� �Լ� �̿�
inline int Sub(int x, int y)
{
	return x - y;
}
inline void Print(int x)
{
	cout << "��� ����� " << x << "�Դϴ�.";
}
int main(void)
{
	int num1 = 5, num2 = 3;
	int result;
	result = Sub(num1, num2);
	Print(result);
	return 0;
}
// �Ʒ��� �ζ��� �ڵ� �̿�
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
		cout << "��� ����� " << x << "�Դϴ�.";
	}
	return 0;
}*/

// ��ũ�� �Լ��� �ζ��� �Լ�
/*// C������ C++�� �ζ��� �Լ��� ����� ����� ��ũ�� �Լ��� ���
// ��ũ�� �Լ��� #define ����ó�� ���ù��� �μ��� �Լ��� ���Ǹ� ����
// ��ũ�� �Լ��� �Ϲ� �Լ�ó�� ����Ϸ��� ��� �μ��� ��ȣ({})�� ���ξ� ��
// ���� ��� #define SQR(X) X*X�� �ƴ� #define SQR(X) ((X)*(X))�� ���!
// �Ʒ��� C�� ��ũ�� �Լ��� C++�� �ζ��� �Լ��� ��Ÿ�� ����
inline int Sqr(int x)
{
	return x * x;
}
int main(void)
{
	int result;
	int x = 5;
	cout << "��� ����� " << Sqr(10) << "�Դϴ�." << endl;
	cout << "��� ����� " << Sqr(x) << "�Դϴ�." << endl;
	cout << "��� ����� " << Sqr(x + 3) << "�Դϴ�.";
	return 0;
}*/

// ��ȿ ����: �ϳ��� ��ȯ ���� ������ �ش� ������ ���� �� �ִ� ����
// ����: �ش� ������ ����� �� �ִ� ������ ���� ���� ����
// C++ ���� ����: �ڵ� ����, �������� ����, ���� ����

// �ڵ� ����
/*// �ڵ� ����: ��� ������ ����� ���� (C�� ���� ����)
void Local(void);
int main(void)
{
	int i = 5;
	int var = 10;
	cout << "main() �Լ� ���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
	if (i < 10)
	{
		Local();
		int var = 30;
		cout << "if �� ���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
	}
	cout << "���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
	return 0;
}
void Local(void)
{
	int var = 20;
	cout << "Local() �Լ� ���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
}*/

// �������� ����: register Ű���� ��� (�������Ϳ� ����)
// ���� ����: C������ ���α׷� ���� �����Ǵ� ����, �����Ϳ� ����
// ������ ���� �ʴ�, ���� ������ ����, �ܺ� ������ ���� ���� ����

// ������ ������ �ʴ� ���� ����
/*// ��� ���ο��� static Ű���带 ����Ͽ� ����
// ���� ���� + ���� ����
// �ʱ�ȭ 1��, ���α׷� ���� �� �޸𸮻󿡼� �����, �ش� ��� ��������
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
	cout << "Local() �Լ��� " << count << " ��° ȣ��Ǿ����ϴ�." << endl;
	count++;
}
void StaticVar(void)
{
	static int static_count = 1; // ������ ������ �ʴ� ���� ����
	cout << "StaticVar() �Լ��� " << static_count << " ��° ȣ��Ǿ����ϴ�." << endl;
	static_count++;
}*/

// ���� ������ ������ ���� ����
/*// ��ȿ ������ ��ȯ ������ ������ ������ static Ű���� ����� ����
// ���� ������ ��� ��Ͽ��� ���� ����
static int var; // ���� ������ ������ ���� ����
void Local(void);
int main(void)
{
	cout << "���� var�� �ʱⰪ�� " << var << "�Դϴ�." << endl;
	int i = 5;
	int var = 10; // �ڵ� ���� ���� 
	cout << "main() �Լ� ���� �ڵ� ���� var�� ���� " << var << "�Դϴ�." << endl;
	if (i < 10)
	{
		Local();
		cout << "���� ���� var�� ���� " << var << "�Դϴ�." << endl; // �ڵ� ������ ���� 
	}
	cout << "�� �̻� main() �Լ������� ���� ���� var�� ������ ���� �����ϴ�." << endl;
	return 0;
}
void Local(void)
{
	var = 20; // ���� ������ �� ����
	cout << "Local() �Լ� ������ ������ ���� ���� var�� ���� " << var << "�Դϴ�." << endl;
}*/

// �ܺ� ������ ������ ���� ����
// ��ȿ ������ ��ȯ ������ ������ ����
// �ܺ� ���Ͽ����� ��� ���� but �� ���Ͽ��� extern���� �缱�� �ʿ�
// ����1.cpp) int var = 10; �� �ܺ� ���� ����
// ����2.cpp) #include "����1.cpp" & extern int var; �� �ܺ� ���� ��� ���� �缱��

// ���ӽ����̽�
/*// ���� �ĺ��ڿ� ���� �� �ִ� ��ȿ ������ �����ϴ� ������ ����
<����>
namespace kang
{
	void Display(); // �Լ��� ����
	int count;      // ������ ����
}
or
namespace kim
{
	double display; // ������ ����
	int count;      // ������ ����
}
<����>
#include "namespace.h"
kang::count = 4;
kim::display = 3.14;
kim::count = 100;
��,
using ������(directive): using namespace ���ӽ����̽��̸�;
or
using ����(declaration): using ���ӽ����̽��̸�::�̸�;*/

// Ŭ����
/*// ����ü�� ���� ȣȯ!
// Ŭ������ ��� ������ ������Ƽ(property), ��� �Լ��� �޼ҵ�
// ��ü���� Ư¡: �߻�ȭ, ĸ��ȭ, ���� ����, ��Ӽ�, ������
<����>
class Ŭ�����̸�
{
��������������1:
	�������1��Ÿ�� �������1���̸�;
	�������2��Ÿ�� �������2���̸�;
	...
		����Լ�1�� ����
		����Լ�2�� ����
		...
};
<����>
Book web_book;
void Book::Move(int page) { current_page_ = page; }
<����Լ� ȣ���ϱ�>
1. ��ü�̸�.����Լ��̸�();               // �Ű������� ���� ��� �Լ� ȣ��
2. ��ü�̸�.����Լ��̸�(�������μ����); // �Ű������� �ִ� ��� �Լ� ȣ��
<��������������>
class Book {
private:                // ���� ������.
	int current_page_;  // ���� ������
	void set_percent(); // �ش� å�� ���� ������ ����.
public;
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
+) protected�� �̸� ������ Ŭ������ ����Լ�/������,
	�� Ŭ�������� public�̳� protected ���� ����� �Ļ��� Ŭ���������� ���� ����*/

// this ������
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
	const Book& ThickerBook(const Book&);	// ThickerBook() �Լ��� ���� 
};
int main(void)
{
	Book web_book("HTML�� CSS", 350);
	Book html_book("HTML ���۷���", 200);
	cout << web_book.ThickerBook(html_book).title_;	// �� �β��� å�� �̸��� �����. 
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

// ������
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
	Book web_book = Book("HTML�� CSS", 350);	// �������� ����� ȣ�� 
	// �����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ�Ǿ������� Ȯ����. 
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

// ����Ʈ ������
/*// ex. Book::Book() { }
// Book web_book; or Book web_book = Book(); or Book * ptr_book = new Book;
class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title = "�� ���α׷���", int total_page = 100);
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main(void)
{
	Book web_book;	// ����Ʈ �������� �Ͻ��� ȣ��
	// �����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ�Ǿ������� Ȯ����. 
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

// ���� ������
/*// ���� �������� ����: Book(const Book&);
class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	Book(const Book&);	// ���� �������� ���� ���� 
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main(void)
{
	Book web_book("HTML�� CSS", 350);
	Book html_book(web_book);
	cout << "1�� ������ " << web_book.title_
		<< ", �� �������� " << web_book.total_page_ << "���Դϴ�." << endl;
	cout << "2�� ������ " << html_book.title_
		<< ", �� �������� " << html_book.total_page_ << "���Դϴ�.";
	return 0;
}
Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}
Book::Book(const Book& origin)	// ���� �������� ���� 
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

// �Ҹ���
/*// �Ҹ����� ����: ~Book();
// �Ҹ����� ����: Book::~Book() { }
class Book
{
private:
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);
	~Book();	// �Ҹ����� ���� ���� 
	string title_;
	int total_page_;
	double percent_;
	void Move(int page);
	void Open();
	void Read();
};
int main(void)
{
	Book web_book("HTML�� CSS", 350);	// �������� �Ͻ��� ȣ�� 
	// �����ڰ� ȣ��Ǿ� ��� ������ percent_�� �ʱ�ȭ�Ǿ������� Ȯ����. 
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
Book::~Book()	// �Ҹ����� ���� 
{
	// ���α׷��� ����� �� �����Ϸ��� ���� �ڵ����� ȣ���.
	cout << "Book ��ü�� �Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl;
}
void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}*/

// ������ �����ε� - 1
/*class Position
{
private:
	double x_;
	double y_;
public:
	Position(double x, double y);	// ������ 
	void Display();
	Position operator-(const Position& other);	// - ������ �Լ�
	// ������ �Լ�: �����ڸ� �����ε��ϱ� ���ؼ� ����ϴ� ��
	// ������ �Լ��� ����: operator�����ε��ҿ�����(�Ű��������)
	// ��, ���� ������(-)�� �� Position ��ü�� �߰� ��ǥ ���ϴ� ��������!
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
	cout << "�� ������ �߰� ������ ��ǥ�� x��ǥ�� " << this->x_
		<< "�̰�, y��ǥ�� " << this->y_ << "�Դϴ�." << endl;
}*/

// ������ �����ε� - 2
/*// ���� ������ ���� �Լ��� ������ ���� ������ ����
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
	cout << "�� ������ �߰� ������ ��ǥ�� x��ǥ�� " << this->x_
		<< "�̰�, y��ǥ�� " << this->y_ << "�Դϴ�." << endl;
}*/

// ������
/*class Rect
{
private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// ������ 
	void DisplaySize();
	Rect operator*(double mul) const;
	friend Rect operator*(double mul, const Rect& origin); // ������ �Լ�
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
	cout << "�� �簢���� ���̴� " << this->height_
		<< "�̰�, �ʺ�� " << this->width_ << "�Դϴ�." << endl;
}
Rect Rect::operator*(double mul) const
{	return Rect(height_ * mul, width_ * mul);	}
Rect operator*(double mul, const Rect& origin)
{	return origin * mul;	}*/

// ������ Ŭ����
/*// ����: friend class Ŭ�����̸�;
#include <cmath>
class Rect
{
private:
	double height_;
	double width_;
public:
	Rect(double height, double width);	// ������ 
	void height() const;
	void width() const;
	friend class Display;	// ������ Ŭ���� ���� 
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
{ cout << "�� �簢���� ���̴� " << this->height_ << "�Դϴ�." << endl; }
void Rect::width() const
{ cout << "�� �簢���� �ʺ�� " << this->width_ << "�Դϴ�." << endl; }
void Display::ShowSize(const Rect& target)
{
	target.height();
	target.width();
}
void Display::ShowDiagonal(const Rect& target)
{
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));
	// cmath ��� ����'s sqrt()�� ������, pow(a,b)�� a�� b��
	cout << "�� �簢���� �밢���� ���̴� " << diagonal << "�Դϴ�." << endl;
}*/

// ������ ��� �Լ�
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
	Rect(double height, double width);	// ������ 
	void height() const;
	void width() const;
	friend void Display::ShowDiagonal(const Rect& target);	// ������ ��� �Լ� ���� 
	// ShowDiagonal() �Լ����� Rect Ŭ������ ��� ����� ���� ����
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
{ cout << "�� �簢���� ���̴� " << this->height_ << "�Դϴ�." << endl; }
void Rect::width() const
{ cout << "�� �簢���� �ʺ�� " << this->width_ << "�Դϴ�." << endl; }
void Display::ShowSize(const Rect& target)
{
	target.height();
	target.width();
}
void Display::ShowDiagonal(const Rect& target)
{
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));
	cout << "�� �簢���� �밢���� ���̴� " << diagonal << "�Դϴ�." << endl;
}*/

// ���� ��� ����
/*// ���� ���: Ŭ������ ����, ��ü�� �Ҵ��� �ƴ� Ŭ������ ��� ��ü�� ����
class Person
{
private:
	string name_;
	int age_;
public:
	static int person_count_;	// ���� ��� ������ ���� 
	Person(const string& name, int age);	// ������ 
	~Person() { person_count_--; }			// �Ҹ��� 
	void ShowPersonInfo();
};
int Person::person_count_ = 0;	// ���� ��� ������ ���� �� �ʱ�ȭ 
int main(void)
{
	Person hong("�浿", 29);
	hong.ShowPersonInfo();
	Person lee("����", 35);
	lee.ShowPersonInfo();
	Person kim("����", 23);
	kim.ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
	cout << ++person_count_ << " ��° ����� �����Ǿ����ϴ�." << endl;
}
void Person::ShowPersonInfo()
{
	cout << "�� ����� �̸��� " << name_ << "�̰�, ���̴� "
		<< age_ << "���Դϴ�." << endl;
}*/

// ���� ��� �Լ�
/*// 1. ��ü�̸�.����Լ��̸�();   // �Ϲ� ��� �Լ��� ȣ��
// 2. Ŭ�����̸�.����Լ��̸�(); // ���� ��� �Լ��� ȣ��
// Ư¡: ��ü ���� X (this ������ ����), Ŭ���� �̸������� ȣ��,
//		 Ư�� ��ü�� �������� �����Ƿ�, ���� ��� ������ ��� ����
class Person
{
private:
	string name_;
	int age_;
public:
	static int person_count_;	// ���� ��� ������ ���� 
	static int person_count();	// ���� ��� �Լ��� ����
	// ����������� person_count_ ��� ���� ��������Լ� person_count() ����
	Person(const string& name, int age);	// ������ 
	~Person() { person_count_--; }			// �Ҹ��� 
	void ShowPersonInfo();
};
int Person::person_count_ = 0;	// ���� ��� ������ ���� �� �ʱ�ȭ 
int main(void)
{
	Person hong("�浿", 29);
	Person lee("����", 35);
	cout << "������� ������ �� �ο� ���� "
		<< Person::person_count() << "���Դϴ�." << endl;
	return 0;
}
Person::Person(const string& name, int age)
{
	name_ = name;
	age_ = age;
	cout << ++person_count_ << " ��° ����� �����Ǿ����ϴ�." << endl;
}
void Person::ShowPersonInfo()
{
	cout << "�� ����� �̸��� " << name_
		<< "�̰�, ���̴� " << age_ << "���Դϴ�." << endl;
}
int Person::person_count() // ���� ��� �Լ��� ���� 
{ return person_count_; }*/

// ��� ��� ����
// �� �� �ʱ�ȭ�ϸ� �� �� ���� �Ұ� (const Ÿ�� ��������̸�;)
// ��� ��� �Լ�
// ȣ���� ��ü�� ������ ���� �Ұ� (�Լ��ǿ��� const;)

// �Ļ� Ŭ����
/*class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age); // ���� Ŭ���� �������� ����
	void ShowPersonInfo();
};
class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age); // �Ļ� Ŭ���� �������� ����
};
int main(void)
{
	Student hong(123456789, "�浿", 29);
	hong.ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age) // ���� Ŭ���� �������� ����
{
	name_ = name;
	age_ = age;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "�� ���̴� " << age_ << "���Դϴ�." << endl;
}
// �Ļ� Ŭ���� �������� ���� ��
Student::Student(int sid, const string& name, int age) : Person(name, age)
{
	student_id_ = sid;
}*/

// �������̵� - 1
/*// �����ε��� ���� �ٸ� �ñ״�ó�� ���� ���� �Լ��� ���� �̸����� ����
// �������̵��� �̹� ���ǵ� �Լ� �����ϰ� ���� �̸��� �Լ��� ���Ӱ� ����
// �Ļ� Ŭ�������� ���� �������̵� or ���� �Լ��� �̿��� �������̵�
// �Ļ� Ŭ���������� �������̵� ��
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// ���� Ŭ���� �������� ���� 
	void ShowPersonInfo();
};
class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// �Ļ� Ŭ���� �������� ���� 
	void ShowPersonInfo();	// �Ļ� Ŭ�������� ��ӹ��� ��� �Լ��� ������ 
};
int main(void)
{
	Person lee("����", 35);
	lee.ShowPersonInfo();
	Student hong(123456789, "�浿", 29);
	hong.ShowPersonInfo();
	hong.Person::ShowPersonInfo(); // ���� �Լ� ȣ��
	return 0;
}
Person::Person(const string& name, int age)	// ���� Ŭ���� �������� ���� 
{
	name_ = name;
	age_ = age;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "�� ���̴� " << age_ << "���Դϴ�." << endl;
}
// �Ļ� Ŭ���� �������� ���� 
Student::Student(int sid, const string& name, int age) : Person(name, age)	
{
	student_id_ = sid;
}
void Student::ShowPersonInfo()
{
	cout << "�� �л��� �й��� " << student_id_ << "�Դϴ�." << endl;
}*/

// �������̵� - 2
/*// ������ ��� �� ���� �߻�
// ������ ������ ������ ����Ű�� ��ü�� Ÿ���� �������� �Լ��� ȣ�� X,
// �ش� �������� Ÿ���� �������� �Լ��� ȣ���ϱ� ����!
// �� ���� �Լ� �̿�
// �����Ͱ� ������ ����Ű�� ��ü�� ���� ȣ���ϴ� ����� �ٲ� �� ����!
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// ���� Ŭ���� �������� ���� 
	virtual void ShowPersonInfo();
};
class Student : public Person
{
private:
	int student_id_;
public:
	Student(int sid, const string& name, int age);	// �Ļ� Ŭ���� �������� ���� 
	virtual void ShowPersonInfo();	// �Ļ� Ŭ�������� ��ӹ��� ��� �Լ��� ������ 
};
int main(void)
{
	Person* ptr_person;
	Person lee("����", 35);
	Student hong(123456789, "�浿", 29);
	ptr_person = &lee;
	ptr_person->ShowPersonInfo();
	ptr_person = &hong;
	ptr_person->ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age)	// ���� Ŭ���� �������� ���� 
{
	name_ = name;
	age_ = age;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "�� ���̴� " << age_ << "���Դϴ�." << endl;
}
// �Ļ� Ŭ���� �������� ���� 
Student::Student(int sid, const string& name, int age) : Person(name, age)
{
	student_id_ = sid;
}
void Student::ShowPersonInfo()
{
	cout << "�� �л��� �й��� " << student_id_ << "�Դϴ�." << endl;
}*/

// ���� ���
// �� �� �̻��� Ŭ�����κ��� ����� ��ӹ޾� �Ļ� Ŭ������ ����
// class �Ļ�Ŭ�����̸� : �������������� ����Ŭ�����̸�, ������ ��Ŭ��, ...

// ���� �Լ�
/*// �Ļ� Ŭ�������� �������� ������ ����ϴ� ��� �Լ� (������ �ʼ� X)
// ����: virtual ����Լ��ǿ���;
// ���� �Լ� ȣ�� �� �����Ϸ��� � �Լ� ȣ������ �� = ���� ���ε�
// ������ ���� �Լ��� ����� ���� ���ε� ����
class A
{
public:
	virtual void Print() { cout << "A Ŭ������ Print() �Լ�" << endl; }
};
class B : public A
{
	virtual void Print() { cout << "B Ŭ������ Print() �Լ�" << endl; }
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
// �����Ϸ��� ���� �Լ��� �ٷ�� ���� �Ϲ����� ���: ���� �Լ� ���̺�
// �� ��ü���� ���� �Լ� ���̺��� ����ų ������ ������ ���� ������ ��� �߰�
// ���� �Լ� ���̺� �� �ش� Ŭ������ ��ü ���� ����� ���� �Լ��� �ּ� ����
// ���� �Լ��� ��� �� �Լ� ȣ�� ���� ���� (�޸𸮿� ���� �ӵ� ���� �δ� ��)
// ����, C++���� ���� Ŭ������ �Ҹ��ڴ� �ݵ�� �������� �����ؾ� ��*/

// �߻� Ŭ����
/*// ���� ���� �Լ�: �Ļ� Ŭ�������� "�ݵ��" �������ؾ� �ϴ� ��� �Լ�
// ����: virtual ����Լ��ǿ���=0; (��, �Լ��� �ְ� ��ü ����)
// �ϳ� �̻��� ���� ���� �Լ��� �����ϴ� Ŭ���� = "�߻� Ŭ����"
class Animal
{
public:
	virtual ~Animal() {}	// ���� �Ҹ����� ����
	virtual void Cry() = 0;	// ���� ���� �Լ��� ����
};
class Dog : public Animal
{
public:
	virtual void Cry() { cout << "�۸�!!" << endl; }
};
class Cat : public Animal
{
public:
	virtual void Cry() { cout << "�߿˾߿�!!" << endl; }
};
// Animal Ŭ������ ��ӹ޴� �Ļ� Ŭ������ Dog Ŭ������ Cat Ŭ������
// Cry() �Լ��� �������̵��ؾ߸� �ν��Ͻ��� ���� ����...
int main(void)
{
	Dog my_dog;
	my_dog.Cry();
	Cat my_cat;
	my_cat.Cry();
	return 0;
}*/

// ���ø�: �Ű������� Ÿ�Կ� ���� �Լ��� Ŭ������ �����ϴ� ��Ŀ����

// �Լ� ���ø�
/*// �Լ��� �Ϲ�ȭ�� ������ �ǹ���
// ���� �˰��� ���, ���� �ٸ� Ÿ�Կ��� �����ϴ� �Լ��� �� ���� ����!
// Ư�� Ÿ���� �Ű������� ���� �� �����Ϸ��� �ش� Ÿ�Կ� �´� �Լ� ����
// ����: template <typename Ÿ���̸�>
//       �Լ��ǿ���
//       {
//			�Լ��Ǻ�ü
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

// ����� Ư��ȭ (for �Լ� ���ø�)
/*// (�Լ� ���ø����� ����) �ش� Ÿ�Կ� ���� Ư���� ������ ����!
// ���� ���ÿ��� double�� ���� ����� Ư��ȭ�� �ϸ�,
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
	// double���� ���� ���� �ٲ��� ����. 
}*/

// Ŭ���� ���ø�
/*// Ŭ������ �Ϲ�ȭ�� ������ �ǹ�
// template <typename Ÿ���̸�>
// class Ŭ�������ø��̸�
// {
//	 Ŭ���� ����� ����
// }
// ����ϰ��� �ϴ� Ÿ���� ��������� �����ؾ� ��!
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
	Data<string> str_data("C++ ����");
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

// ��ø Ŭ���� ���ø�
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
// X<T>::Y<U>::����Լ��̸�()
// {	...		}*/

// Ŭ���� ���ø� Ư¡
/*// 1. �ϳ� �̻��� ���ø� �μ��� ������ Ŭ���� ���ø� ���� ����
// ex. template <typename T, int i>
// 2. Ŭ���� ���ø��� ����Ʈ ���ø� �μ��� ��� ����
// ex. template <typename T = int, int i>
// 3. Ŭ���� ���ø��� ���� Ŭ������ �Ͽ� ��� ����
// ex. template <typename Type>
//     class Y : public X <Type> �� Ŭ���� ���ø� X�� ��ӹ���*/

// ����� Ư��ȭ (for Ŭ���� ���ø�)
/*// for double �� template <> class X<double> { ... };
template <typename T>
class Data
{
private:
	T data_;
public:
	Data(T dt);
	T get_data();
};
template <> class Data<double>	// double���� ���� ����� Ư��ȭ 
{
private:
	double data_;
public:
	Data(double dt) { data_ = dt; }
	double get_data()
	{
		cout << "double�� �����͸� ����մϴ�." << endl;
		return data_;
	}
	// double���� ���� ���۸��� ����!
};
int main(void)
{
	Data<string> str_data("C++ ����");
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

// �κ� Ư��ȭ
/*// ���ø� �μ��� �� �� �̻�, ���� �Ϻθ� Ư��ȭ �� ��
// template ������ ������ <>�� Ư��ȭX Ÿ���� ���ø� �μ� ���
// ������ ������ <>�� Ư��ȭO Ÿ���� ���
// ex. template <typename T1, typename T2> class X {...};
// �� template <typename T1> class X<T1, double> { ... };
// X�� double���� ���� �κ� Ư��ȭ
// �� template <> class X<double, double> { ... };
// T1 Ÿ�Ա��� Ư��ȭ (�� ����� Ư��ȭ)
// �߰���, typedef Ű����� ���ø� Ư��ȭ ���� �� �̸� ���� ����
// ex. typedef X<double, 3.14> DoubleX;
//     DoubleX double_x; // double_x�� X<double, 3.14> Ÿ��*/

// ����Ʈ ������
/*// ������ó�� �����ϴ� Ŭ���� ���ø�����, ��� ���� �޸� �ڵ����� ����
// new Ű����� �⺻ �����Ͱ� ���� �޸� ����Ű���� �ʱ�ȭ�� ��,
// �⺻ �����͸� ����Ʈ �����Ϳ� ����
// �� �Ҹ��ڴ� delete Ű����� �Ҵ�� �޸𸮸� �ڵ����� ����
// ��, ���� �޸𸮸� ������ �ʿ䰡 ������!
// ����: unique_ptr, shared_ptr, weak_ptr*/

// unique_ptr
/*// �ϳ��� ����Ʈ �����͸��� Ư�� ��ü�� ������ �� �ֵ���
// �ش� ��ü�� �������� ���� ���� ����, �Ҹ��ڰ� �ش� ��ü ���� ����
// move() ��� �Լ��� ���� �������� ������ ����, ����� �Ұ���
// unique_ptr<int> ptr01(new int(5)); // int�� unique_ptr�� ptr01 ����, �ʱ�ȭ
// auto ptr02 = move(ptr01);          // ptr01���� ptr02�� �������� ����
// unique_ptr<int> ptr03 = ptr01;     // ���� ������ �̿��� ���� �� ������ �߻� 
// ptr02.reset();                     // ptr02�� ����Ű�� �޸� ���� ����
// ptr01.reset();                      // ptr01�� ����Ű�� �޸� ������ ����
// make_unique() �Լ��� ��� �� unique_ptr �ν��Ͻ��� �����ϰ� ����!
// Person ��ü ����Ű�� unique_ptr(hong)�� make_unique()�� �����ϴ� ���� ��
#include <memory>
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age); // ���� Ŭ���� �������� ����
	~Person() { cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl; }
	void ShowPersonInfo();
};
int main(void)
{
	unique_ptr<Person> hong = make_unique<Person>("�浿", 29);
	// hong�� ����� ���� �Ŀ� delete Ű����� �޸� ������ �ʿ� X
	hong->ShowPersonInfo();
	return 0;
}
Person::Person(const string& name, int age) // ���� Ŭ���� �������� ����
{
	name_ = name;
	age_ = age;
	cout << "�����ڰ� ȣ��Ǿ����ϴ�." << endl;
}
void Person::ShowPersonInfo()
{ cout << name_ << "�� ���̴� "<< age_ << "���Դϴ�." << endl; }*/

// shared_ptr
/*// �� Ư�� ��ü�� �����ϴ� ����Ʈ �����Ͱ� �� ������
// �̶� ���� =  ���� Ƚ��
// shared_ptr<int> ptr01(new int(5)); // int�� shared_ptr ����, �ʱ�ȭ
// cout << ptr01.use_count() << endl; // 1
// auto ptr02(ptr01);                 // ���� �����ڸ� �̿��� �ʱ�ȭ
// cout << ptr01.use_count() << endl; // 2
// auto ptr03 = ptr01;                // ������ ���� �ʱ�ȭ
// cout << ptr01.use_count() << endl; // 3 
// Person ��ü ����Ű�� shared_ptr�� make_shared()�� �����ϴ� ���� ��
class Person
{
private:
	string name_;
	int age_;
public:
	Person(const string& name, int age);	// ���� Ŭ���� �������� ���� 
	~Person() { cout << "�Ҹ��ڰ� ȣ��Ǿ����ϴ�." << endl; }
	void ShowPersonInfo();
};
int main(void)
{
	shared_ptr<Person> hong = make_shared<Person>("�浿", 29);
	cout << "���� ������ �� : " << hong.use_count() << endl;	// 1
	auto han = hong;
	cout << "���� ������ �� : " << hong.use_count() << endl;	// 2
	han.reset();		// shared_ptr�� han�� ������
	cout << "���� ������ �� : " << hong.use_count() << endl;	// 1
	return 0;
}
Person::Person(const string& name, int age)	// ���� Ŭ���� �������� ���� 
{
	name_ = name;
	age_ = age;
	cout << "�����ڰ� ȣ��Ǿ����ϴ�." << endl;
}
void Person::ShowPersonInfo()
{
	cout << name_ << "�� ���̴� " << age_ << "���Դϴ�." << endl;
}*/

// weak_ptr
/*// �ϳ� �̻��� shared_ptr�� �����ϴ� ��ü�� ���� ������ ����
// but, �������� ������ ���� X*/

// STL �ݺ���
/*// C++ ǥ�� ���ø� ���̺귯���� STL �� �ݺ���, �����̳�, �˰���
// STL �����̳�: ���� Ÿ���� ���� ��ü�� �����ϴ� ������ ����
// �ݺ���: �����̳ʿ� ����� ��Ҹ� ��� ��ȸ �� �� ��ҷ��� ���� ����
// ��, �����̳ʿ� ����� �����͸� ��ȸ�ϴ� ����
// �䱸 ����: ���� ������(*), ���� �� ���� ������, ���� ������(++)
// ����: �Է�/���/������/������/�������� �ݺ���
// [�Է� �ݺ���]
// �����̳ʷκ��� �� �б� ����, ���α׷��� �� ���� ������ X
// ���� ������(++)�� ������ �̵� or ���� ������(*)�� �ݺ��ؼ� ��� ����
// Find() �Լ��� ������ ������ ����
// template<class InputIterator, class T>
// InputIterator Find(InputIterator first, InputIterator last, const T& value);
// [��� �ݺ���]
// �����̳��� �� ���� ����, ���α׷����� ���� ���� ���� X
// ���� ������(++)�� ������ �̵� or ���� ������(*)�� �� ���� �� ����
// Copy() �Լ��� ������ ������ ����
// template<class InputIterator, class OutputIterator>
// OutputIterator Copy
// (InputIterator first, InputIterator last, OutputIterator result);
// [������ �ݺ���]
// ������� ��� ����
// ���� ������(++)�� ������ �̵� or ���� ������(*)�� �� ���̰� ����, ���� ����
// Replace() �Լ��� ������ ������ ����
// template<class ForwardIterator, class T>
// void Replace
// (ForwardIterator first, ForwardIterator last, const T& target, const T& replacement);
// [����� �ݺ���]
// ���� ����� ��� ����
// ���� ������(++)�� ������, ���� ������(--)�� ������
// ���� ������(*)�� �� ���̰� ����, ���� ����
// Reverse() �Լ��� ������ ������ ����
// template<class BidirectionalIterator, class OutputIterator>
// OutputIterator Reverse
// (BidirectionalIterator first, BidirectionalIterator last, OutputIterator result);
// [���� ���� �ݺ���]
// ����� �ݺ����� ��� ����� ����, ÷�� ������([])�� ������ ��ҿ� ���� ����,
// ���� �����ڷ� ����� �̵�, ����� ������ �����ϱ� ���� ���� ������ ���
// Sort() �Լ��� ������ ������ ����
// template<class RandomAccessIterator>
// void Sort(RandomAccessIterator first, RandomAccessIterator last);*/

// iterator ��� ����
// �̸� ���ǵ� �ݺ���, ��Ʈ�� �ݺ���, �ݺ����� ����, ���� ���� ���ø� ����!

// ��Ʈ�� �ݺ���
/*// �Է� ��Ʈ�� �ݺ��ڴ� istream_iterator
// template <class T, class charT = char,
//    class traits = char_traits<charT>,class Distance = ptrdiff_t>
// class istream_iterator : public iterator<input_iterator_tag,
//    T, Distance, const T*, const T&> { ... }
// ��� ��Ʈ�� �ݺ��ڴ� ostream_iterator 
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
	// copy() �Լ�fh vertor ��ü�� ù ��� ~ ������ ��Ҹ� ���
	// cout ��ü�� ostream_iterator Ŭ���� ���ø��� �μ��� ����
	return 0;
}*/

// ���� �ݺ���
/*// insert_iterator,  back_insert_iterator, front_insert_iterator
#include <iterator>
#include <list>
int main(void)
{
	list<int> ls = { 10 };
	ls.push_back(20);	// back_insert_iterator�� �����. 
	ls.push_front(30);	// front_insert_iterator�� �����. 
	copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));
	//  push_back(), push_front() �Լ��� ���� �ݺ��� ��� �� ����Ʈ�� ��� ����
	return 0;
}*/

// ������ �ݺ���
/*// ������ �ݺ����� ���� ������(++)�� ������ �ݺ����� ���������� �̵�!
// rbegin(), rend() ��� �Լ��� ��� �� �ڵ����� reverse_iterator ��ȯ
#include <iterator>
#include <list>
int main(void)
{
	list<int> ls = { 10, 20, 30 };
	copy(ls.rbegin(), ls.rend(), ostream_iterator<int>(cout, " "));
	//  rbegin(), rend() �Լ��� ������ �ݺ��ڷ� ����Ʈ ��Ҹ� ���� ���
	return 0;
}*/

// ��� �ݺ���
/*// �ݺ��ڰ� ����Ű�� ���� ������ �Ұ����� �ݺ���
// const_iterator Ÿ������ ����
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
	// *citer = 300;    // ��� �ݺ��ڷ� ���� ������ �Ұ��� (�б⸸ ����)
	for (citer = ls.begin(); citer != ls.end(); citer++)
	{	cout << *citer << " ";	}
	// �ݺ��ڸ� ����Ͽ� ����Ʈ�� ù ��° ����� ���� ����
	return 0;
}*/

// ������ �����̳�: vector, deque, list, forward_list
// �����͸� �������� �����ϴ� ���� �Ϲ����� STL �����̳�
// ���Ե� ����� ������ �״�� ������

// ����(vector) �����̳�
/*// ��� �߰� or ���� �� �ڵ����� �޸𸮸� ���Ҵ��� ũ�⸦ �������� ����
// vector<���ø��μ�> ��ü�̸�(�������μ�);
#include <iterator>
#include <vector>
int main(void)
{
	vector<int> vc = { 10, 20, 30 };	// vector ��ü�� ���� �� �ʱ�ȭ 
	cout << "���� ������ ũ��� " << vc.size() << "�Դϴ�." << endl;

	vc.push_back(40);				// vector ����� �߰� 
	cout << "���� ������ ũ��� " << vc.size() << "�Դϴ�." << endl;
	cout << "���� ������ �� ��° ��Ҵ� " << vc[3] << "�Դϴ�." << endl;

	cout << "���� ������ ��� ��Ҵ� ������ �����ϴ� :" << endl;
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// ��ť(deque) �����̳�
/*// double-ended queue
// �� ������ ������ ��Ҹ� �����ϰų� ����
#include <iterator>
#include <deque>
int main(void)
{
	deque<int> dq = { 20 };	// deque ��ü�� ���� �� �ʱ�ȭ 
	dq.push_back(30);		// ����� �Ĺ� ���� 
	dq.push_front(10);		// ����� ���� ���� 

	cout << "���� ��ť�� ��� ��Ҵ� ������ �����ϴ� :" << endl;
	copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "���� ��ť�� ù ��° ��Ҵ� " << dq.front() << "�Դϴ�." << endl;

	dq.pop_front();			// ����� ���� ���� 
	cout << "���� ��ť�� ��� ��Ҵ� ������ �����ϴ� :" << endl;
	copy(dq.begin(), dq.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// ����Ʈ(list) �����̳�
/*// ���� ���� ����Ʈ�� Ŭ���� ���ø� ǥ��
// ��� ��ҿ��� ����� ����, ���� ���� & ���� ���� but ���� ���� �Ұ�
#include <iterator>
#include <list>
int main(void)
{
	list<int> ls = { 1, 2, 2, 3, 4, 3, 5, 5 };	// list ��ü�� ���� �� �ʱ�ȭ 
	//ls.sort();	// 1, 2, 2, 3, 3, 4, 5, 5
	//ls.unique();	// 1, 2, 3, 4, 3, 5
	ls.reverse();	// 5, 5, 3, 4, 3, 2, 2, 1
	// �� �ܿ� merge, splice ���� �Լ�
	cout << "���� ����Ʈ�� ��� ��Ҵ� ������ �����ϴ� :" << endl;
	copy(ls.begin(), ls.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// ������ ����Ʈ(forward_list) �����̳�
/*// �ܹ��� ���� ����Ʈ�� Ŭ���� ���ø� ǥ��
// ������ �ݺ���(forward iterator)���� ���
#include <iterator>
#include <forward_list>
int main(void)
{
	forward_list<int> fls01 = { 10, 20, 400, 30 };	// forward_list ��ü�� ���� �� �ʱ�ȭ 
	forward_list<int> fls02 = { 40, 50 };
	forward_list<int>::iterator itr;

	fls01.remove(400);				// ���� 400�� ��� ��Ҹ� ������.
	cout << "���� ������ ����Ʈ�� ��� ��Ҵ� ������ �����ϴ� :" << endl;
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	itr = fls01.begin();			// fls01�� ù ��° ��Ҹ� ����Ű���� �ݺ��� �ʱ�ȭ
	fls01.splice_after(itr, fls02);	// fls02�� ��� ��Ҹ� fls01�� ù ��° ��� ������ ���� 
	cout << "fls01 : ";
	copy(fls01.begin(), fls01.end(), ostream_iterator<int>(cout, " "));
	cout << endl << "fls02 : ";
	copy(fls02.begin(), fls02.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// ���� �����̳�: set, multiset, map, multimap
// Ű�� ��ó�� �����ִ� �����͸� �� ������ ���� (Ʈ�� ��� ����)
// ���� �����̳ʴ� ���ԵǴ� ����� ��ġ�� ������ �� ����!
// +) ���� ���� X ���� �����̳� �� �ؽ� ���̺� ��� ����

// ���հ� ��Ƽ���� �����̳�
/*// ����(set) �����̳ʴ� �����ϴ� ������ �� ��ü = Ű (��������)
// ��Ƽ����(multiset)�� Ű�� �ߺ��� ��� (���� �� ���� �� ���� ����)
// ���� �����̳� �� set<���ø��μ�> ��ü�̸�;
#include <iterator>
#include <set>
int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };	// �迭 ���� �� �ʱ�ȭ 
	set<int> st(arr, arr + 3);			// �迭�� �Ϻ� ��Ҹ� ������ �� �����̳ʸ� ������. 
	cout << "���� ������ ��� ��Ҵ� ������ �����ϴ�." << endl;
	copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	st.insert(60);	// ����� �߰� 
	st.insert(70);	// ����� �߰� 
	st.erase(20);	// ����� ���� 
	cout << "���� ������ ��� ��Ҵ� ������ �����ϴ�." << endl;
	copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// �ʰ� ��Ƽ�� �����̳�
/*// Ű�� ���� ������ �����͸� ����, ���ĵ� ��ġ�� ������ ����
// ��Ƽ���� ���� �ߺ� ��� (�ϳ��� Ű�� ���� ���� ���� ����!)
// �� �����̳� �� map<���ø��μ�> ��ü�̸�;
#include <iterator>
#include <map>
int main(void)
{
	map<string, int> mp;
	mp.insert(pair<string, int>("����", 80));	// �͸��� pair ��ü�� �����Ͽ� �߰���. 
	mp["����"] = 100;							// ÷�� �����ڸ� �̿��Ͽ� �߰���. 

	cout << "���� ���� ��� ��Ҵ� ������ �����ϴ�." << endl;
	map<string, int>::iterator it;
	for (it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->first << " : " << it->second << endl;
	}
	return 0;
}*/

// �����̳� �����: stack, queue, priority_queue
// ���� �����̳��� �������̽��� �����Ͽ� ���� ����� ���� or ������ �����̳�
// �� ���ʰ� �Ǵ� Ŭ������ �������̽��� ���� �� Ư�� ������ ���۸� ����
// �ݺ��� �������� ����!

// ����(stack) �����̳�
/*// ���� ���߿� �����(push) �����Ͱ� ���� ���� ����(pop)
#include <stack>
int main(void)
{
	int decimal = 123;
	stack<int> st;
	do {
		st.push(decimal % 2);
		decimal /= 2;
	} while (decimal); // 10������ 2������ ��ȯ 
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	} // ������ ��� ��Ҹ� ���� 
	return 0;
}*/

// ť(queue) �����̳�
/*// ���� ���� �����(push) �����Ͱ� ���� ���� ����(pop)
#include <queue>
int main(void)
{
	int n = 20;		// 20���� �Ǻ���ġ ������ �����. 
	queue<int> que;
	que.push(0);	// �ʱⰪ�� 0�� 1�� ������. 
	que.push(1);

	// �Ǻ���ġ ���� 
	for (int i = 2; i < n; i++)
	{
		int temp = que.front();
		cout << temp << " ";
		que.pop();
		que.push(temp + que.front());
	}
	return 0;
}*/

// �켱���� ť(priority_queue) �����̳�
/*// ���� ���� ����� ��Ұ� �ƴ�, ���� ū ���� ���� ��Ұ� �� �տ� ��ġ
// ��, �켱���� ť�� ��Ҵ� ������ ���� ������������ ����!
#include <queue>
int main(void)
{
	priority_queue<int> pq;
	pq.push(10);
	pq.push(20);
	pq.push(100);
	pq.push(3);

	// �켱 ���� ť�� ��� ��Ҹ� ���� 
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}*/

// �Լ� ��ü (functor) - 1
/*// ȣ�� ������(())�� �Բ� ����� �� �ִ� ��ü
// Ÿ�� ���� ��, �ش� Ŭ�������� ȣ�� �����ڸ� �����ε��ؼ� ����
// ����: ���� ���� ����, Ÿ���̹Ƿ� ���ø� �μ��� ��� ����
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

// �Լ� ��ü - 2
/*// �Ʒ��� greater, less�� ���� sort()�� �μ��� ������ ���
// �̶� greater, less�� �Լ� ��ü��!
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;
int main(void)
{
	vector<int> vc = { 20, 40, 10, 30 };	// vector ��ü�� ���� �� �ʱ�ȭ 

	sort(vc.begin(), vc.end(), greater<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort(vc.begin(), vc.end(), less<int>());
	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " "));
	return 0;
}*/

// STL �˰���
/*// STL�� ���� �� �Ϲ����� �˰��� ���� ȿ������ ���� ����
// ���� STL�� STL �˰��� �Լ� or STL �����̳��� ��� �Լ� ���
// STL �˰���: �б�, ����, ����, ��ġ �˰������� ����
// <�б� �˰���>
// �����̳ʸ� ���� X, �����̳��� ������ �������� Ư�� ������ �б⸸
// find() :  Ư�� ���� ������ ù ��° ��� ����Ű�� �Է� �ݺ��� ��ȯ
// for_each() : ��� ��Ҹ� �Լ� ��ü�� ���� ��, ������ �Լ� ��ü ��ȯ
// <���� �˰���>
// �����̳� ���� X, �����̳��� ������ �������� ����� ���� ����
// copy() : ��� ��Ҹ� ��� �ݺ��ڰ� ����Ű�� ��ġ�� ����
// swap() : �� ���� ������ ����Ű�� ��ġ�� ���� ���� ��ȯ
// transform() : ��� ��Ҹ� �Լ� ��ü�� ���� ��, ��� �ݺ��ڰ� ����Ű�� ���� ����
// <���� �˰���>
// �����̳��� ������ ������ ��ҵ��� ���ĵǵ��� �����̳ʸ� ����
// ���� ���� �ݺ��ڸ� ����ϹǷ� ���� ������ ������ �����̳ʸ��� ��� ����
// sort() : ��� ��� ���� �� �� �������� ����
// stable_sort() : ��� ��� ���� �� �� �������� ���� (���� ���� ����� ���� ����)
// binary_search() : �������� ���� ��, ���޵� ���� ���� ���� ������ true ��ȯ
// <��ġ �˰���>
// numeric ��� ���Ͽ� ����
// accumulate() : ��� ����� ���� ��ȯ*/

// ���� �����
/*// ������ �Է��� ifstream Ŭ����, ����� ofstream Ŭ������ ��� �Լ��� ó��
// <����� ���� ����>
// 1. ��Ʈ���� �����ϱ� ���� ifstream(�Ǵ� ofstream) ��ü�� ����
// 2. Ư�� ���ϰ��� ����
//    ifstream ifs;            // ifs��� ifstream ��ü�� ����
//    ifs.open("example.txt"); // ifs�� example.txt�� ����
//    �Ǵ�
//    ifstream ifs("example.txt"); // ifstream ��ü ���� �� example.txt�� ����
// 3. cin ��ü�� cout ��ü�� ���� ������� ��ü�� ����Ͽ� ����� ����
//    char ch;
//    char buf[20];
//    string str;
//    ifs >> ch;            // example.txt ���Ͽ��� �� ���ڸ� �о� ���� ch�� ����
//    ifs.getline(buf, 20); // example.txt���� �� ���� �о� �迭 buf�� ����
//    getline(ifs, str);    // example.txt���� �� ���� �о� ���ڿ� ��ü str�� ����
// 4. ��� �۾��� ������ ���ϰ��� ���� ����
//     ifs.close(); // ���ϰ��� ������ ���� (�� �ص� �ڵ����� ����)
// <��Ʈ���� ���� �˻��ϱ�>
// 1. if (ifs.fail()) { ... }  // ������ ���µ� ������ ���
// 2. if (!ifs.good()) { ... } // ������ ���µ� ������ ���
// 3. if (!ifs) { ... }        // ������ ���µ� ������ ���
// �Ǵ� if (!ifs.is_open()) { ... } // ������ ���µ� ������ ���
// ������ �ܼ��� ������ ���� �� �ȿ� ����� �ؽ�Ʈ �� ���� �о� ���� ����
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream ifs;
	string str;
	ifs.open("example.txt"); // "C++ ���α׷���"
	if (!ifs.is_open())
	{
		cout << "������ �� ���� �����ϴ�!" << endl;
		exit(1);
	}
	else
	{
		cout << "������ ���������� �������ϴ�!" << endl;
		getline(ifs, str);
		cout << str << endl;
		ifs.close();
	}
}*/

// ���� ���
/*// ������ ��� �뵵�� ������ �����͸� � ������� ��������� �����ϴ� ���
// ifs��� ifstream ��ü�� �����ϰ�, example.txt�� �б� ���� ����
// �� ifstream ifs("example.txt", ios_base::in);
// ifstream�� �����ڿ� open() ��� �Լ��� ���� ��� ����Ʈ �μ��� ios_base::in
// ofstream�� ��쿡�� ios_base::out | ios_base::trunc
// ios_base::in �� ������ ������ �д� �͸� ������ ���� ����
// ios_base::out �� ������ ���� �͸��� ������ ���� ����
// ios_base::ate �� ������ ������ �� ������ ������ ���� �����͸� �̵���Ŵ
// ios_base::app �� �ش� ������ �� ���������� �����͸� �߰�
// ios_base::trunc �� ������ ������ �ش� ������ ��� �����͸� ����� ����
// ios_base::binary �� ���̳ʸ� ���� ����*/

// ���� ó��
/*// try �� : ���ܰ� �߻��� ���ɼ��� �ִ� �ڵ� ���
// throw �� : try ������ �߻��� ������ ���� ������ ����
// catch �� : �߻��� ���ܿ� ���� ���� �ڵ鷯�� ó���� ������ ���� �ڵ� ���
// try�� �ڿ� �ݵ�� �ϳ� �̻��� catch���� �־�� ��
// �� catch���� �ڽ��� ó���� ���� Ÿ�� ���� ����
// �̶�, Ư�� ���� Ÿ�� �ǽſ� ... ����ϸ�, ��� Ÿ���� ���ܸ� ó��!
// ������ ...�� �ݵ�� catch�� �� ���� ���������� ���
// ������ ����ڰ� ��Ȯ�� ���� ������ �Է��ߴ°��� throw ������ �˻��ϴ� ����
int IncreaseNumber(int n)
{
	if (n < 0)
		throw n;
	else if (n == 0)
		throw "0�� �Է� �Ұ���";
	return ++n;
}
int main(void)
{
	int num;
	cout << "���� ���� �ϳ� �Է�: ";
	while (cin >> num)
	{
		try
		{
			cout << "�Է��� �������� 1 ������Ų ��: " << IncreaseNumber(num) << endl;
		}
		catch (int input)
		{
			cout << input << "�� ���� ������ �ƴմϴ�" << endl;
			cout << "���� ������ �ٽ� �Է��ϼ���: ";
			continue;
		}
		catch (const char* st)
		{
			cout << st << endl;
			cout << "���� ������ �ٽ� �Է��ϼ���: ";
			continue;
		}
		break;
	}
	return 0;
}*/

// ���� Ǯ��(stack unwinding)
/*// ���ܸ� ó���ϴ� ������ ã�� ���ؼ�
// �ش� ���ܰ� ȣ��� ������ ���� �Լ��� ���ܰ� ����ؼ� ���޵Ǵ� ����
// ��, ���� �߻� �� catch �ڵ鷯�� ������ ������ ������ catch ���� ã��
// 1. ���ÿ��� try ���� ���� ����� catch ������ ���ʴ�� �˻�
// 2. ������ catch ���� �� ã������,
//    �ٷ� ���� �ٱ��� try �� ������ ��ġ�� catch ���� ���ʴ�� �˻�
// 3. �̷��� ������ ���� �ٱ��� try ������ ��� �˻�
// 4. �׷��� ������ catch ���� �� ã������, �̸� ���ǵ� terminate() �Լ��� ȣ��
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
		cout << "���� ó��(main) : " << ex << endl;
	}
	return 0;
}
// �� ���ô� Func03() �Լ����� ���ܰ� �߻�
// but Func03() �Լ����� ���ܸ� ó���� catch ���� ����
// �� ���α׷��� Func02() �Լ��� ���� ����
// �̶� ���ÿ� ����Ǿ� �ִ� Func03() �Լ��� ���� ���� �������� ��� ���� �� �̵�
// but Func02() �Լ������� ���ܸ� ó���� �� ����
// �� Func01() �Լ��� ���� ����
// but Func01() �Լ����� ���ܸ� ó���� catch ���� ����
// �� Func01() �Լ��� ȣ���� main() �Լ��� ����
// ��, ������ ���� ó���� main() �Լ� ���� catch ������ ����*/

// Exception Ŭ����
/*// logic_error : �Ϲ����� ���� ���� ������ ó�� ����
// runtime_error : ���α׷� ���� �� �߻� ������ �پ��� ������ ó�� ����
// <ó�� ���� ���� ����>
// �߻��� ���ܸ� ó���� catch �� �� ã����, �̸� ���ǵ� terminate() �Լ� ȣ��
// terminate()�� �⺻������ abort() �Լ��� ȣ���� ���α׷� ������ �����Ŵ
// ��, set_terminate()�� ����ϸ� �̷��� terminate()�� �⺻ ���� ���� ����!
#include <iostream>
#include <exception>
using namespace std;
void MyErrorHandler()
{
	cout << "ó������ ���� ���ܰ� �߻��߽��ϴ�." << endl;
	exit(-1);
}
int main(void)
{
	set_terminate(MyErrorHandler);
	try { throw 1; }
	catch (char* const ex)
	{
		// �� catch ���� ������ ���ܸ� ó���� �� ����.
	}
	return 0;
}
// try ������ ������ ���ܰ� �߻� but �Ʒ��� catch ���� �ش� ���ܸ� ó�� X
// �� ���� set_terminate() �Լ��� �̸� ������ ������ ���!*/

// The End