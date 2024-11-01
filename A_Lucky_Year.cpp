#include <iostream>
#include <cmath>

int main() {
    int currentYear;
    std::cin >> currentYear;

    int numDigits = std::to_string(currentYear).length();
    
  
    int firstDigit = currentYear / std::pow(10, numDigits - 1);

    
    int nextLuckyYear;
    if (firstDigit == 9) {
      
        nextLuckyYear = 10 * std::pow(10, numDigits - 1);
    } else {
        nextLuckyYear = (firstDigit + 1) * std::pow(10, numDigits - 1);
    }

  
    int difference = nextLuckyYear - currentYear;

    std::cout <<  difference << std::endl;

    return 0;
}
