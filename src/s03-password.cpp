\
/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>

auto main() -> int
{
 auto haslo = std::string;
 string haslo2;

 std::cout << "Podaj haslo \n";
 std::cin >> haslo;

  do{

   std::cout << "Podaj znowu haslo \n";
   std::cin >> haslo2;


  }while(haslo != haslo2);




    return 0;
}

