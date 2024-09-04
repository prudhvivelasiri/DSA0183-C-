#include <iostream>
#include <string>
#include <algorithm>
class StringConverter {
public:
    StringConverter(std::string inputString) : str(inputString) {}
    void toUpperCase() {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        std::cout << "Uppercase: " << str << std::endl;
    }
    void toLowerCase() {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        std::cout << "Lowercase: " << str << std::endl;
    }
private:
    std::string str;
};
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    StringConverter converter(input);CHR
    converter.toUpperCase();
    converter.toLowerCase();
    return 0;
}