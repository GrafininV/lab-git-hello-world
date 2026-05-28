#include <iostream>
#include <string>

// Main function of the program
int main() {
    std::string name; // Variable for storing the user's name

    // Ask user for name
    std::cout << "Enter your name: ";
    std::cin >> name; // Read the name

    // Print greeting with name
    std::cout << "Hello world from " << name << std::endl;

    return 0;
}
