#include <iostream>

//Function:
int addNumbers( int first_param, int second_param) {

    int result = first_param + second_param;
    return result;
}

int multiplyNumbers( int first_param, int second_param){
    
    int result = first_param * second_param;
    return result;
}

int first_Number = 12; // Statement
int second_Number = 28;
int sum = first_Number + second_Number;

int main(){
    std::cout << "The first number is: " << first_Number << std::endl;
    std::cout << "The second number is: " << second_Number << std::endl; 
    std::cout << "That makes the sum: " << sum << std::endl;


    sum = addNumbers(33,4);
    
    std::cout << "On second thought its: " << sum << std::endl;

    sum = addNumbers(99,32);

    std::cout << "Or was it " << sum << "?" << std::endl;

    std::cout << "If you were to multiply them it would be: " << multiplyNumbers(12,28) << std::endl;
    return 0;
}