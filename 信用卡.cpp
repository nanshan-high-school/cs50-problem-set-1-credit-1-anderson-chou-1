#include <iostream>
using namespace std;

int card(string question);

int main(void) {
	int cardnum = card("請輸入卡號:");

	int num = cardnum % 10;
	num = (num / 10) + (num % 10);
	
	int num2 = cardnum / 10 % 10 * 2;
	num2 = (num2 / 10) + (num2 % 10);
    cout << num2;
	int num3 = cardnum / 10 / 10 % 10;
	num3 = (num3 / 10) + (num3 % 10);
    
	int num4 = cardnum / 10 / 10 / 10 % 10 * 2;
	num4 = (num4 / 10) + (num4 % 10);
    
	int num5 = cardnum / 10 / 10 / 10 / 10 % 10;
	num5 = (num5 / 10) + (num5 % 10);
    
	int num6 = cardnum / 10 / 10 / 10 / 10 / 10 % 10 * 2;
	num6 = (num6 / 10) + (num6 % 10);
    
	int num7 = cardnum / 10 / 10 / 10 / 10 / 10 / 10 % 10;
	num7 = (num7 / 10) + (num7 % 10);
    
	int num8 = cardnum / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 2;
	num8 = (num8 / 10) + (num8 % 10);

	int num9 = cardnum /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
	num9 = (num9 / 10) + (num9 % 10);

	int num10 = cardnum /10 /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 2;
	num10 = (num10 / 10) + (num10 % 10);

	int num11 = cardnum /10 /10 /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
	num11 = (num11 / 10) + (num11 % 10);

	int num12 = cardnum /10 /10 /10 /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 2;
	num12 = (num12 / 10) + (num12 % 10);

	int num13 = cardnum /10 /10 /10 /10 /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
	num13 = (num13 / 10) + (num13 % 10);

	int num14 = cardnum /10 /10 /10 /10 /10 /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 2;
	num14 = (num14 / 10) + (num14 % 10);

	int num15 = cardnum /10 /10 /10 /10 /10 /10 /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10;
	num15 = (num15 / 10) + (num15 % 10);

	int num16 = cardnum /10 /10 /10 /10 /10 /10 /10 /10 / 10 / 10 / 10 / 10 / 10 / 10 / 10 % 10 * 2;
	num16 = (num16 / 10) + (num16 % 10);

	int total = num2 + num4 + num6 + num8 + num10 + num12 + num14 + num16 + num + num3 + num5 + num7 +num9 + num11 + num13 + num15;

	if (total % 10 == 0) {
		cout << "correct";
	} else {
		cout << "error";
	}
}

int card(string question) {
	long long card;

	do {
		cout << "請輸入卡號:";
		cin >> card;
	} while (card <= 0);

	return card;			
}
