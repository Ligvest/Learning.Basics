#include <iostream>

class EvenFunctor {
public:
	void showEvenSum() {
		std::cout << "Sum of even numbers = " << evenSum << std::endl;
	}

	void showEvenCount() {
		std::cout << "Count of even numbers = " << evenCount << std::endl;
	}

	void operator() (int value) {
		if (value % 2 == 0) {
			++evenCount;
			evenSum += value;
		}
	}

private:
	int evenSum = 0;
	int evenCount = 0;

};

int main() {
	int arr[] = { 1,2,3,4,6};
	EvenFunctor e;
	for (auto val : arr) {
		std::cout << val << " +";
		e(val);
	}

	e.showEvenCount();
	e.showEvenSum();
	
	system("pause");
	return 0;
}