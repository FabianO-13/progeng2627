#include <iostream>

int Getscore () {
    int score{};
    std::cout << "Please enter score: ";
    std::cin >> score;
    return score;
}
int main() {
int score {Getscore()};
std::string result = "";
result = (score == 100) ? "good" : (score >= 90 && score < 100) ? "alright" : "shit";
std::cout << "your score is " << result;
return 0;
}
