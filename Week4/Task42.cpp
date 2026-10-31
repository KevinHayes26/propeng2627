#include <iostream>
void Sort_three_numbers(double& n1 , double& n2 ,double& n3 ){
    if(n1 >= n2 && n1 >= n3 && n2 >= n3){
        std::cout<<n3 << " " << n2 << " " << n1 <<std::endl;
    }
    if(n1 >= n2 && n1 >= n3 && n2 <= n3){
        std::cout<<n2 << " " << n3 << " " << n1 <<std::endl;
    }
    if(n1 <= n2 && n1 >= n3 && n2 >= n3){
        std::cout<<n3 << " " << n1 << " " << n2 <<std::endl;
    }
    if(n1 <= n2 && n1 <= n3 && n2 >= n3){
        std::cout<<n1 << " " << n3 << " " << n2 <<std::endl;
    }
    if(n1 <= n2 && n1 <= n3 && n2 <= n3){
        std::cout<<n1 << " " << n2 << " " << n3 <<std::endl;
    }
    if(n1 >= n2 && n1 <= n3 && n2 <= n3){
        std::cout<<n2 << " " << n1 << " " << n3 <<std::endl;
    }
}
int main(){
    double n1 , n2 , n3;
    std::cout<<"yoo enter number 1 2 and 3 "<< std::endl;
    std::cin>>n1;
    std::cin>>n2; 
    std::cin>>n3;
    Sort_three_numbers(n1,n2,n3);
}