#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Declare a vector to store the FizzBuzz results for numbers 1 to 100
    vector<string> fizzBuzzResults(100);

    // Loop through numbers from 1 to 100
    for (int i = 0; i < 100; ++i) {
        int number = i + 1;  
        if (number % 3 == 0 && number % 5 == 0) {
            fizzBuzzResults[i] = "FizzBuzz";  // Multiples of both 3 and 5
        } else if (number % 3 == 0) {
            fizzBuzzResults[i] = "Fizz";      // Multiples of 3
        } else if (number % 5 == 0) {
            fizzBuzzResults[i] = "Buzz";      // Multiples of 5
        } else {
            fizzBuzzResults[i] = to_string(number);  // Other numbers
        }
    }

    // Print the contents of the vector
    for (const string & result : fizzBuzzResults) {
        cout << result << " ";
    }
    
    cout << endl; // a new line at the end of the output for better formatting

    return 0;  
}
