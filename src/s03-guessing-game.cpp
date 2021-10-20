

#include <iostream>
#include <stdlib.h>
#include <random>


auto main() -> int
{

	std :: random_device rd ;
	std :: uniform_int_distribution < int > d100 (1 , 100);

	//int randomNumber = rand() % 100;
	auto const randomNumber = d100( rd );
	std::cout << randomNumber << "\n";
	int chosenNumber;

	 std::cout << "Zgadnij liczbe \n";

	do{
	 std::cin >> chosenNumber; 
	 if(chosenNumber < randomNumber){
	 std::cout << "Za malo \n";
	}else if(chosenNumber > randomNumber){
	 std::cout << "Za duzo \n"; 
	}else{
	 std::cout << "Zgadles \n";
	}



	}while(chosenNumber != randomNumber); 


    return 0;
}
