#include <iostream>
#include <string>

int main() {
    std::string nerd = "ezcrackme";
    std::string pass;
    std::cout << "Password: ";
    std::cin >> pass;

    if (nerd == pass) {
        std::cout << "Correct\n";
    } else {
        std::cout << "Nope\n";
    }

    return 0;
}
