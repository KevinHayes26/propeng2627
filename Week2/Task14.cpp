#include <iostream>
int main()
{
    double n1 , n2 , sum ;
    std:: cout << " Please enter a number" << std :: endl;
    std:: cin >> n1;
    
    std::cout << "Enter the second number twin" << std:: endl;
    std:: cin >> n2;
    sum = n1 + n2;

    std:: cout<< n1 << " + " << n2 << " = " << sum << std::endl;

    int n, rem ;
    std :: cout << " Please enter number for remainder! " << std::endl;
    std:: cin >> n;
    rem = n % 2;
    std::cout << "if the following line is 1 then the number you put is odd, if its 0 then even my friend"<<std::endl;
    std :: cout << rem << std::endl;

    std::cout << 5/2.0 << std::endl;
    
}