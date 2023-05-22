#include <iostream>

int main() {
    auto mod3 = [](int i) -> std::string {
        if (i%3==0)
            return "Fizz";
        return "";
    };
    auto mod5 = [](int i) -> std::string {
        if (i%5==0)
            return "Buzz";
        return "";
    };

    std::string output;

    for (int i = 1; i < 100; ++i) {
        output = mod3(i) + mod5(i);
        if (output.length() == 0)
            std::cout << std::to_string(i) << '\n';
        else std::cout << output << '\n';
    }

}
