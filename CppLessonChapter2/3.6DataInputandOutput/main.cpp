#include <iostream>
#include <string>

int main(){
    // Printing data 
    /*
    std::cout << "Hello C++26 " << std::endl;

    int age = 21;
    std::cout << "Age : " << age << std::endl;

    std::cerr << "Error message: Something is wrong" << std::endl;
    std::clog << "Log message: Something happened" << std::endl;
*/
  
/*
int age1;
    std::string name;
    std::cout << "Please type your name and age : " << std::endl;
    //std::cin >> name;
    //std::cin >> age1;
    std::cin >> name >> age1;

    std::cout << "Hello " << name << "! You are " << age1 << " years old." << std::endl;
*/

// Data with spaces
    int age;
    std::string full_name;
    std::cout << "Please type your full name and age :" << std::endl;
    std::getline(std::cin,full_name);
    std::cin >> age;
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;
    return 0;
}