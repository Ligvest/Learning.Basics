#include <iostream>
#include <ctime>

int main() {
	
	std::srand(std::time(NULL));
	int iN = std::rand();
	std::cout << iN << std::endl;
	iN = std::rand();
	std::cout << iN << std::endl;


	system("pause");
	return 0;
}