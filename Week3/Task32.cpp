#include <iostream>
int main(){
    int n,sum;
    std::cout<<"Hello , This is Factorial exercise, input what factorial you want : "<< std::endl;
    std::cin>>n;
    sum = n;
    for (int i = 1 ; i < n;  i++){
    sum = sum*(n-i);
    }
    std::cout<<sum<<std::endl;


}