# Problem #01
Write a program to loop through first 100 numbers. Print `fizz` if the number is divisible by `3` and print `buzz` if the number is divisible by `5` and `FizzBuzz` if the number is divisible by both `3` and `5`. Otherwise just print the number.
# Solution
```cpp
#include <iostream>

void fizz_buzz(int32_t _upto) {
    for (size_t each{1UL}; each < _upto; each++) {
        if (each % 3 == 0 and each % 5 == 0) std::cout << "FizzBuzz\n";
        else if (each % 3 == 0) std::cout << "Fizz\n";
        else if (each % 5 == 0) std::cout << "Buzz\n";
        else std::cout << each << std::endl;
    }
}

int main() {
    fizz_buzz(100);

}
```
# Problem #02
Given a string, count how many vowels there are in that string.
# Solution
```cpp
#include <iostream>
#include <string_view>
#include <cstring>

int32_t vc_count(std::string_view _sentence, bool vowel = true) {
    int32_t vcount{};
    int32_t ccount{};

    for (auto each : _sentence) {
        switch (tolower(each)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
                vcount++;
                break;
        default:
            if (isalpha(each)) ccount++;
        }
    }

    return vowel ? vcount : ccount;
}

int main() {
    int32_t total_vowels {vc_count("Today is a good day. I think.")};

    std::cout << "The sentence had total (" << total_vowels << ") vowels in it\n";
}
```
# Problem #03
Given any number, print its table of multiplication.
# Solution
```cpp

```
