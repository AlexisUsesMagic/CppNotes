#include <iostream>

int addNumbers(int first_parameter , int second_parameter){

    int result = first_parameter + second_parameter;
    return result;
}
 
int main(){

int first_number = 3; // statement
int second_number = 7; // statement 
std::cout << "first number : "  << first_number << std::endl; // 3
std::cout <<  "second number : " << second_number << std::endl; // 7

int sum = first_number + second_number; // Sum of variable first and second number
std::cout << "Sum of First number and second number is " << sum << std::endl;


sum = addNumbers(70, 10); // Sum variable data rewritten from result of addNumber function
std::cout << "Sum of addNumbers function " << sum << std::endl;


sum = addNumbers (30, 54);
std::cout << "Sum of second set of numbers in addNumbers function " << sum << std::endl;

std:: cout << "sum of addNumbers function written within a cout statement : " << addNumbers(3,42) << std::endl;

// Remember statements are executed in order 

    return 0;
}