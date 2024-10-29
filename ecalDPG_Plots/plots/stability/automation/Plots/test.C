#include <iostream>
#include <iomanip> 

int main() {
    UInt_t value = 255; 
    std::cout << "The value in hexadecimal is: " << std::hex << std::showbase << value << std::endl;

    return 0;
}