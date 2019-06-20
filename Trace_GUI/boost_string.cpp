#include<boost/lexical_cast.hpp>
#include<boost/format.hpp>
#include<boost/utility/string_ref.hpp>
#include<iostream>
#include<string>
#include<vector>
#include<boost/algorithm/string.hpp>
using namespace boost;
int main() {
	bool flag;
	auto x = conversion::try_lexical_convert(std::string("false").c_str(),flag);
	std::cout << typeid(x).name() << std::endl;
	format fmt("%1% am %2% father");
	fmt % 'i'; fmt % "your";
	std::cout << fmt.str() << std::endl;
	std::cout << format("%s am %s %d father")%"i"%"your"%2<<std::endl;
	string_ref s("123");
	std::cout << s.substr(0, 2)<<std::endl;
	std::cout << typeid(s).name() << std::endl;
	std::cout << typeid(s.to_string()).name() << std::endl;
	std::string str("yangwei.tt");
	std::cout << ends_with(str, ".tt") << std::endl;
	std::cout << starts_with(str, "y") << std::endl;
	std::vector<std::string> v1;
	split(v1, str, [](char a) {return a == '.'; });
	for (auto xx : v1)
		std::cout << xx << std::endl;
	std::cout << replace_nth_copy(str,"y",2,"w") << std::endl;
	getchar();
}