#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Declare a vector to store the FizzBuzz results
    vector<string> fizzBuzzResults(200);

    // Loop through numbers from 1 to 200
    for (int i = 0; i < 200; ++i) {
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

    // Hardcoded expected FizzBuzz results for numbers 1 to 200
    vector<string> expectedResults = {
        "1", "2", "Fizz", "4", "Buzz", "Fizz", "7", "8", "Fizz", "Buzz",
        "11", "Fizz", "13", "14", "FizzBuzz", "16", "17", "Fizz", "19", "Buzz",
        "Fizz", "22", "23", "Fizz", "Buzz", "26", "Fizz", "28", "29", "FizzBuzz",
        "31", "32", "Fizz", "34", "Buzz", "Fizz", "37", "38", "Fizz", "Buzz",
        "41", "Fizz", "43", "44", "FizzBuzz", "46", "47", "Fizz", "49", "Buzz",
        "Fizz", "52", "53", "Fizz", "Buzz", "56", "Fizz", "58", "59", "FizzBuzz",
        "61", "62", "Fizz", "64", "Buzz", "Fizz", "67", "68", "Fizz", "Buzz",
        "71", "Fizz", "73", "74", "FizzBuzz", "76", "77", "Fizz", "79", "Buzz",
        "Fizz", "82", "83", "Fizz", "Buzz", "86", "Fizz", "88", "89", "FizzBuzz",
        "91", "92", "Fizz", "94", "Buzz", "Fizz", "97", "98", "Fizz", "Buzz",
        "101", "Fizz", "103", "104", "FizzBuzz", "106", "107", "Fizz", "109", "Buzz",
        "Fizz", "112", "113", "Fizz", "Buzz", "116", "Fizz", "118", "119", "FizzBuzz",
        "121", "122", "Fizz", "124", "Buzz", "Fizz", "127", "128", "Fizz", "Buzz",
        "131", "Fizz", "133", "134", "FizzBuzz", "136", "137", "Fizz", "139", "Buzz",
        "Fizz", "142", "143", "Fizz", "Buzz", "146", "Fizz", "148", "149", "FizzBuzz",
        "151", "152", "Fizz", "154", "Buzz", "Fizz", "157", "158", "Fizz", "Buzz",
        "161", "Fizz", "163", "164", "FizzBuzz", "166", "167", "Fizz", "169", "Buzz",
        "Fizz", "172", "173", "Fizz", "Buzz", "176", "Fizz", "178", "179", "FizzBuzz",
        "181", "182", "Fizz", "184", "Buzz", "Fizz", "187", "188", "Fizz", "Buzz",
        "191", "Fizz", "193", "194", "FizzBuzz", "196", "197", "Fizz", "199", "Buzz"
    };

    // Check if the results match the expected output
    bool testPassed = true; // Initialize testPassed to true
    for (int i = 0; i < 200; ++i) {
        if (fizzBuzzResults[i] != expectedResults[i]) {
            testPassed = false; // Set to false if any result doesn't match
            break; // Exit the loop on first mismatch
        }
    }

    // Output the results
    if (testPassed) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    return 0;  
}
