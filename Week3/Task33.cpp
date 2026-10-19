#include <iostream>
int main(){
    int n;
    std::cout<<"Hello what table would you want? "<< std::endl;
    std::cin >> n;
    for(int c = 1 ; c < n+1 ; c++){
        std::cout <<" " << std:: endl;

        for(int c2 = 1 ; c2 < n + 1; c2++){
            std::cout<< "  "<<c2*c ;

        }

    }
}