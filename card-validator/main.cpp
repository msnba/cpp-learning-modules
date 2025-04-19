#include <iostream>

int getDigit(const int number) {
    return number % 10 + (number/10);
}
int sumOddDigits(const std::string& cardNum) {
    int sum = 0;
    for (int i = cardNum.size()-1;i>=0;i-=2) {
        sum += getDigit((cardNum[i] - '0')*2);
    }
    return sum;
}
int sumEvenDigits(const std::string& cardNum) {
    int sum = 0;
    for (int i = cardNum.size()-2;i>=0;i-=2) {
        sum += cardNum[i] - '0';
    }
    return sum;
}

int main() {
    std::string cardNumber;
    int result = 0;

    std::cout<<"Enter a cc number: ";
    std::cin>>cardNumber;

    result = sumEvenDigits(cardNumber)+sumOddDigits(cardNumber);
    //std::cout<<result<<"\n";
    if (result%10==0) {
        std::cout<<"The number is valid!"<<"\n";
    }else{
        std::cout<<"The number is invalid!"<<"\n";
    }
    return 0;
}