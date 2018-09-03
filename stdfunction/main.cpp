#include <iostream>
#include <vector>
#include <functional>

void foo() { std::cout << "foo()" << std::endl; }
void bar() { std::cout << "bar()" << std::endl; }
void doWork(std::vector<std::function<void()>> vecFunc){
	for (auto fel : vecFunc) {
		fel();
	}
}

int main() {
	std::vector<std::function<void()>> vecFunc;
	vecFunc.push_back(foo);
	vecFunc.push_back(bar);
	doWork(vecFunc);

	system("pause");
	return 0;
}