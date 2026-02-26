#include <iostream>

int main() {
    int totalSeconds;
    std::cout << "Enter a total number of seconds: ";
    std::cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    std::cout << totalSeconds << " seconds is " << hours << " hours, "
              << minutes << " minutes, and " << seconds << " seconds." << std::endl;

    return 0;
}