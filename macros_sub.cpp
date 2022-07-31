/*
    В этом задании мы создадим простой макрос

	Ваша задача - определить макрос SUB, который должен вычитать числа друг из друга 
	и используется следующим образом:

	int main (int argc, char** argv)
	{
		int a = 6;
		int b = 5;
		int c = 2;
		std::cout << SUB(a, b) << std::endl;
		std::cout << SUB(a, b) * c << std::endl;
		std::cout << SUB(a, b + c) * c << std::endl;
	}
*/
#include <iostream>

#define SUB(a, b) ((a) - (b))

int main()
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

    return 0;
}

