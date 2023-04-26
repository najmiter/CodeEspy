#include <iostream>

void print_diamond(int32_t _radius) {
    static int32_t upper_boudary{_radius+1};
    static int32_t lower_boudary{_radius-1};
    static int32_t that_char{};
    static bool lower{};

    if (that_char <= lower_boudary) {
        std::cout << ' ';
        print_diamond(++that_char);
    } else if (that_char < upper_boudary) {
        std::cout << '*';
        print_diamond(++that_char);
    }

    if (lower_boudary != upper_boudary) {
        if (not lower_boudary) lower = true;

        if (lower) {
            lower_boudary++;
            upper_boudary--;
        } else {
            lower_boudary--;
            upper_boudary++;
        }

        std::cout << '\n';
        that_char = 0;
        print_diamond(0);
    }

}

int main() {
    print_diamond(50);


}
