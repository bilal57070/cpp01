#include <string>
#include <iostream>

int main()
{
    std::string uno = "HI THIS IS BRAIN";
    std::string *stringPTR = &uno;
    std::string &stringREF = uno;

    std::cout << "adress de uno " << &uno << std::endl;
    std::cout << "adress de strptr " << stringPTR << std::endl;
    std::cout << "adress de strref " << &stringREF << std::endl;

    std::cout << "value of uno " << uno << std::endl;
    std::cout << "value of strptr " << *stringPTR << std::endl;
    std::cout << "value of strref " << stringREF << std::endl;
}