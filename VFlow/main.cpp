#include <iostream>
#include "SysInfo.h"

int main() {
	std::cout << "CPU Threads: " << SysInfo::getCPUThreads() << '\n';
	return 0; 
}