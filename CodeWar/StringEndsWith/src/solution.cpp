#include <string>
#include <iostream>

bool solution(std::string const &str, std::string const &ending) {
    std::string endStr = str.substr(str.length() - ending.length());
    return endStr == ending;
}

int main() {
    std::cout << solution("abcde", "cde") << std::endl;
    return 0;
}
