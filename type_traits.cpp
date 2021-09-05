#include <iostream>
#include <type_traits>//用于判断类型

struct A
{

};

int f();

int main()
{
	std::cout << std::boolalpha;//输出为bool型
	std::cout << std::is_void<void>::value << '\n';
	std::cout << std::is_void<int>::value << '\n';

	std::cout << std::is_class<A>::value << '\n';

	std::cout << std::is_array<int[3]>::value << '\n';

	std::cout << std::is_function<decltype(f)>::value << '\n';//选择并返回操作数的数据类型
	std::cout << std::is_function<int>::value << '\n';
}

