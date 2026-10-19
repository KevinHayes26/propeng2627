#include <iostream>
int main(){
    int n , sum  = 0;
    std::cin >> n;
    std::cout<<"Hello enter a number to start " << std::endl;
    while(n != 0){
        std::cout<<"Okay so far your total is " << sum << std::endl;
        std::cout << "what number do you want to add to it" << std::endl;
        std:: cin >> n;
        sum = sum + n;
    }
    std::cout<<"Your final total is : " << sum << std::endl;
}