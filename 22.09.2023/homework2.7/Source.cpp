#include<iostream>
void DecadeConvert(int d) {
	switch (d) {
		case 1:
			std::cout << "X";
			break;
		case 2:
			std::cout << "XX";
			break;
		case 3:
			std::cout << "XXX";
			break;
		case 4:
			std::cout << "XL";
			break;
		case 5:
			std::cout << "L";
			break;
		case 6:
			std::cout << "LX";
			break;
		case 7:
			std::cout << "LXX";
			break;
		case 8:
			std::cout << "LXXX";
			break;
		case 9:
			std::cout << "XC";
			break;
		case 10:
			std::cout << "C";
			break;
	}
}
void UnitConvert(int e) {
	switch (e) {
		case 1:
			std::cout << "I";
			break;
		case 2:
			std::cout << "II";
			break;
		case 3:
			std::cout << "III";
			break;
		case 4:
			std::cout << "IV";
			break;
		case 5:
			std::cout << "V";
			break;
		case 6:
			std::cout << "VI";
			break;
		case 7:
			std::cout << "VII";
			break;
		case 8:
			std::cout << "VIII";
			break;
		case 9:
			std::cout << "IX";
			break;
	}
	
}
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int e = n % 10;
	if (n / 10 != 0) {
		int d = n / 10;
		DecadeConvert(d);
		UnitConvert(e);
		return 0;
	}
	UnitConvert(e);
	return 0;
}