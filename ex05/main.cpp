#include "Harl.hpp"

int main(){
    std::string level;
    Harl comp;

	//while (1){
		getline(std::cin, level);
		if (level == "INFO" || level == "DEBUG" || level == "WARNING" || level == "ERROR")
			comp.complain(level);
		else
			std::cout << "error arg" << std::endl;
	//}
}