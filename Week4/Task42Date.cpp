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
void next_date(int day1 , int month1, int year1 , int&day2 , int& month2 , int&year2){
    std::cout<<"Okay so im going to incrememt the date " << day1<<"/" <<   month1<<"/" <<year1<<std::endl;
    if(month1 == 1){
        if(day1==31){
            day2 = 1;
            month2 = 2;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 2 && Leap_year(year1)== false){
        if(day1==28){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 2 && Leap_year(year1)== true){
        if(day1==29){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 3){
        if(day1==31){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 4){
        if(day1==30){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 5){
        if(day1==31){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 6){
        if(day1==30){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 7){
        if(day1==31){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 8){
        if(day1==31){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 9){
        if(day1==30){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 10){
        if(day1==31){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 11){
        if(day1==30){
            day2 = 1;
            month2 = month1 + 1;
            year2 = year1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
    if(month1 == 12){
        if(day1==31){
            day2 = 1;
            month2 = 1;
            year2 = year1 + 1;
        }
        else{
            day2 = day1 + 1;
            month2 = month1;
            year2 = year1;
        }
    }
}
int main(){
    int d1 ,m1 ,y1 , d2 , m2 ,y2;
    std::cout<<"Well well well , Input a day then a month then a year and i will increment it! : " << std::endl;
    std::cin>>d1;
    std::cin>>m1;
    std::cin>>y1;
    next_date(d1,m1,y1,d2,m2,y2);
    std::cout<<d2<<" "<<m2<<" "<<y2 << std::endl;
}