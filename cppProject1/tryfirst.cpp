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