#include<iostream>

int main(int argc, char* argv[]) {
	int stAnswer = 0;
	int RiAnswer = 0;
	std::cin >> stAnswer >> RiAnswer;
	if ((stAnswer == 1 && RiAnswer == 1) || (stAnswer != 1 && RiAnswer != 1)) {
		std::cout << "YES";
		return 0;
	}
	std::cout << "NO";
	return 0;
}