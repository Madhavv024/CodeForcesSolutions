#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the factorial
int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate the probability
double calculate_probability(string s1, string s2) {
    int target_pos = 0, known_pos = 0, num_questions = 0;

    // Calculate target position from s1
    for (char c : s1) {
        if (c == '+') {
            target_pos++;
        } else if (c == '-') {
            target_pos--;
        }
    }

    // Calculate known position from s2 and count '?'
    for (char c : s2) {
        if (c == '+') {
            known_pos++;
        } else if (c == '-') {
            known_pos--;
        } else if (c == '?') {
            num_questions++;
        }
    }

    // Calculate required change to match target_pos
    int required_change = target_pos - known_pos;

    // Check if the required change is achievable
    if (abs(required_change) > num_questions || (num_questions - abs(required_change)) % 2 != 0) {
        return 0.0;
    }

    // Calculate the number of ways to achieve the required change
    int moves = (num_questions + required_change) / 2;

    // Calculate the probability
    double probability = factorial(num_questions) / 
                         (factorial(moves) * factorial(num_questions - moves)) / 
                         pow(2, num_questions);
    
    return probability;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    double result = calculate_probability(s1, s2);
    cout.precision(9);
    cout << fixed << result << endl;

    return 0;
}
