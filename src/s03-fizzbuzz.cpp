
/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>

auto main() -> int
{
 int liczba;
 std::cout << "Podaj liczbe ";
 std::cin >> liczba;

	for(int i = 1; i <= liczba; ++i){
	 std::cout<< i << "\n";
	 if(i % 3 == 0 && i % 5 == 0){
	 std::cout << "FizzBuzz!\n";
	}else if(i % 5 == 0){
	 std::cout << "Buzz!\n ";	
	}else if(i % 3 == 0){
	 std::cout << "Fizz!\n";
	}
 }





    return 0;
}

