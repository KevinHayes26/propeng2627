#include <iostream>
int smallest_factor(int n){
    for(int cf=2; cf < n ; cf++){
        if(n%cf == 0 ){
            return cf;
        }
    }
    return 0;
}

void primes_in_range(int n1, int n2){
    int output ;
    while(n1 < n2){
        if (smallest_factor(n1) == 0){
            std::cout<<n1<<std::endl;
        
        }
        else{
            std::cout<<n1<<" not prime "<< std::endl;
        }
        n1 = n1 + 1;
    }
}
int main(){
    int n1 , n2;
    std::cout<<"Yo enter the two boundaries please! "<<::std::endl;
    std::cin>>n1;
    std::cin>>n2;
    primes_in_range(n1,n2);
}