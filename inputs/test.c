#include <iostream>
#include <iomanip>
#include <sstream>
#include <ctime>

int main() {
    std::string timeStr = "07/17/23 00:51:10";
    std::tm t = {};
    std::istringstream ss(timeStr);
    ss >> std::get_time(&t, "%m/%d/%y %H:%M:%S");
    if (ss.fail()) {
        std::cerr << "Parse failed\n";
    } else {
        std::time_t time = std::mktime(&t);
        std::cout << "Timestamp: " << time << std::endl;
    }
    return 0;
}