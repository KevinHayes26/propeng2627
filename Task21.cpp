#include <iostream>

int main(){
    int number;
    std::cout << "enter a numebr twin" << std::endl;
    std::cin >> number ;
    if(number % 3 == 0 ){
        std::cout<<"YOO this IS a multiple of 3" << std::endl;
    }
    else{
        std::cout << "sorry but this is NOT a mutiple of 3" << std:: endl;
    }
}