#include <iostream>
int main(){
    int n ,number;
    bool flag = true;
    number = rand() ;
    while (flag){
        
        std::cout<<"guess a number my friend! "<< std:: endl;
        std::cin >> n; 
        if(n== number){
            flag = false;
            std::cout<<"Ohhhhhh You got it! "<< std::endl;
        }
        if ((number - n > 0)){
            std::cout<<"No, you gotta go higher! "<<std::endl;
        }
        if (number - n < 0){
            std::cout<<"LOWERRR " << std::endl;
        }
        

    }
   

}