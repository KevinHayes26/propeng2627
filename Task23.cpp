#include <iostream>
#include<string>
int main(){
    double Length_in , Length_out ;
    std::string unit_in , unit_out;

    const double mile_to_km = 1.609;
    std::cin >> Length_in >> unit_in;

    bool valid_until = true;
    if(unit_in ==  "km"){
        unit_out = "miles" ;
        Length_out = Length_in/mile_to_km;
    }
    else if((unit_in == "mile ") || (unit_in == "miles")){
        unit_out = "km";
        Length_out= Length_in*mile_to_km;
    }
    else{
        valid_until= false;

    }
    if(valid_until){
        std::cout<<Length_out << " " << unit_out << std::endl;
    }
    else{
        std::cout<<"Not recognized you defo did something wrong"<< std:: endl;
    }
}