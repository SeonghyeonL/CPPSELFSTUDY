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
int main(void)
{
	int num1 = 15;
	int num2 = 8;

	cout << "~  �����ڿ� ���� �ᱣ���� " << (~num1) << "�Դϴ�." << endl;
	cout << "<< �����ڿ� ���� �ᱣ���� " << (num2 << 2) << "�Դϴ�." << endl;
	cout << ">> �����ڿ� ���� �ᱣ���� " << (num2 >> 2) << "�Դϴ�.";
	return 0;
}