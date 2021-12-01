#include <stdio.h>
#include <time.h>
#include <iostream>
#include <iomanip>

int main(void)
{
	time_t timer;
	struct tm *timeinfo;
	
	time(&timer);
	timeinfo = localtime(&timer);
	std::cout << "[" << 1900 + timeinfo->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << 1 + timeinfo->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << timeinfo->tm_sec << "]";
}