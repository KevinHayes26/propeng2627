#include <iostream>
bool Leap_year(int year){
    bool ly;

    if((year%4) == 0){
        ly = true;
    }
    else{
        ly = false;
    }

    return ly;
}

double Mypow(double Base, int Exponent){
    double total;
    total = Base;
    if(Exponent == 0){
        return 1;
    }
    for (int i = 1 ; i < abs(Exponent); i++){
         total = total*Base;
    }
    if(Exponent < 0){
        total = 1/total;
    }
    
    return total;
}
int main(){
    int InputYear ;
    std::cout<<"Enter a year please!" << std::endl;
    std::cin>>InputYear;
    if(Leap_year(InputYear)== true){
        std::cout<<"Boom yep its leap"<<std::endl;
    }
    else{
        std::cout<<"yeah no not a leap sorry"<<std::endl;
    }
    double base ;
    double exponent;
    std::cout<<"input a base and exponent"<<std::endl;
    std::cin>>base;
    std::cin>>exponent;
    std::cout<<Mypow(base,exponent)<<std::endl;
}