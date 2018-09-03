#include <iostream>
#include <vector>
#include <functional>


class MyClass {
public:
	int a = 11;
	void lambda() {
		auto f = [this]()->void //->void - строгое указывание возвращаемого типа
		{
			this->Msg();
		};
		f();
	}

	void Msg() {
		std::cout << "Msg()" << std::endl;
	}
};


void doWork(std::function<void()> func) {
	func();
}

int main() {	
	MyClass mc;
	mc.lambda();
	int p = 5;
	//& - захват всех переменных вне контекста по ссылке
	//= - захват всех переменных вне контекста по значению
	auto f = [&p]() {p += 10; std::cout << "p = " << p << std::endl; }; 
	doWork(f);
	f();

	system("pause");
	return 0;
}