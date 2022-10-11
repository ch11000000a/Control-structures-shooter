#include <iostream>
#include<conio.h>
using namespace std;
//#define Palindrome
//#define HappyTicket
//#define Shooter
void main() {
	setlocale(LC_ALL, "");
#ifdef Palindrome
	int num;
	int num2 = 0;
	int temp;
	int dig;
	cout << " Введите число: ";
	cin >> num;
	temp = num;
	while (num > 0) {
		dig = num % 10;
		num2 = num2 * 10 + dig;
		num /= 10;
	}
	if (temp == num2) {
		cout << " Это число палиндром ";
	}
	else {
		cout << " Это число не палиндром ";
	}
#endif // Palindrome
#ifdef HappyTicket
	int num;
	int num1 = 0;
	int num2 = 0;
	int dig;
	cin >> num;
	while (num > 999999)
	{
		cout << "Неверный номер билета";
		break;
	}

	while (num > 999)
	{
		dig = num % 10;
		num1 += dig;
		num /= 10;
	}
	while (num > 0)
	{
		dig = num % 10;
		num2 += dig;
		num /= 10;
	}
	if (num1 == num2)
	{
		cout << " У вас счастливый билет \n";
		cout << "\t" << num1 << " = " << num2;
	}
	else
	{
		cout << " У вас несчастливый билет ";
	}
#endif // HappyTicket
#ifdef Shooter
	char key;
	do
	{
		key = _getch();
		if (key == 119) {
			cout << key << " - Вперёд" << endl;
		}
		else if (key == 115) {
			cout << key << " - Назад" << endl;
		}
		else if (key == 97) {
			cout << key << " - На право" << endl;
		}
		else if (key == 100) {
			cout << key << " - На лево" << endl;
		}
		else if (key == 32) {
			cout << "Space" << " - Прыжок" << endl;
		}
		else if (key == 13) {
			cout << "Enter" << " - Огонь" << endl;
		}
	} while (key != 27);
#endif // Shooter
}
