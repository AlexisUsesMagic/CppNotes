#include <iostream>

int productNumbers(int multiplicand, int multiplier){

    int productResult = multiplicand * multiplier;

    return productResult;
}

int main(){
 int first_number = 0;
 int second_number = 9; 

std::cout << "First number : " << first_number << "\nSecond number : " << second_number << std::endl;

 int product = first_number * second_number;
 std::cout << "The product of the first and second number is : " << product << std::endl;

product = productNumbers(5,15);
std::cout << "The product of function productNumbers : " << product << std::endl;

std::cout << "The product of funtion productNumbers declared in a cout statement is : " << productNumbers(5,2) << std::endl;

return 0;

}
