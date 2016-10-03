#ifndef PRINTER_HPP_
#define PRINTER_HPP_

#include <iostream>
#include <string>

class Printer {
public:
	void doPrint(const std::string& word) {
		std::cout << "Word: " << word << std::endl;
	}
};



#endif /* PRINTER_HPP_ */
