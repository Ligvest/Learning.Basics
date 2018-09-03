#include <iostream>
#include <string>

std::string dataFromBd() { return "Data from db."; }
std::string dataFromWebServer() { return "Data from WebServer."; }
void showData(std::string(*dataRetFunc)()) {
	std::cout << dataRetFunc() << std::endl;
}

int main() {
	showData(dataFromBd);

	system("pause");
	return 0;
}