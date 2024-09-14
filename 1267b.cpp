#include <iostream>
#include <string>

int main() {
    std::string l;
    std::cin >> l;

    int i = 0;
    int j = l.length() - 1;
    int q = 0;
    int c = 0;

    while (i <= j) {
        char d = l[i];
        c = 0;

        // Check if the characters at the ends are different
        if (l[i] != l[j]) {
            q = 1;
            break;
        }

        // Count contiguous characters from the start
        while (i <= j && l[i] == d) {
            i++;
            c++;
        }

        // Count contiguous characters from the end
        while (i <= j && l[j] == d) {
            j--;
            c++;
        }

        // Check if the segment length is valid
        if (c <= 2 && i < j) {
            q = 1;
            break;
        }
    }

    // Print the result based on conditions
    if (c >= 2 && q == 0) {
        std::cout << (c + 1) << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }

    return 0;
}
