#include <iostream>

int main(){
    int number1 {45};
    int number2 {60};

    std::cout << "number1 :" << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing Variables" << std::endl;

    std::cout << std::boolalpha << std::endl; // Make bool show up as true or false instead of 1/0
    // Stress the need for parenteses here

    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 < number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    //std::cout << std::noboolalpha;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

// Another way of testing 

bool result = (number1 == number2);
std::cout << number1 << " == " << number2 << " : "  << result << std::endl;
// can store in a variable and print it out

    return 0;

}