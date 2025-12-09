#pragma once
#include <thread>
#include <string>

struct SysInfo {
	static unsigned int getCPUThreads() { return std::thread::hardware_concurrency(); }
};