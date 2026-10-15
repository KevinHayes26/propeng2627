#include <iostream>

int main()
{
int year;

std::cout <<" Please enetr a year" << std :: endl;
std:: cin >> year;
if((year % 4) == 0){
    if((year % 100)==0){
    std::cout<<"Yoooo now way its also the start of a century"<<std::endl;
    }
    else {
        std::cout<<"This one not a start of the century"<<std::endl;
    }
    
}
    else {
        std::cout<<"Not a leap year"<<std::endl;

    }
}
