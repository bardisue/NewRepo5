#include <fstream>
#include <iostream>
#include <string>

class AnyString {
	std::string anyString;

public:
	AnyString(const std::string& anyString) : anyString(anyString) {}
	std::string getAnyString() {
		return "Stored String :: " + anyString;
	}
	friend std::ostream& operator<<(std::ostream& os, AnyString& as);
};

std::ostream& operator<<(std::ostream& os, AnyString& as)
{
	os << as.getAnyString();
	return os;
}


int main() {
	std::ofstream out("testOveroding.txt");
	AnyString a("Hello, this is operator overloading test!!!");
	std::string output = a.getAnyString();
	//out << output << std::endl;
	out << a << std::endl;
	return 0;
}