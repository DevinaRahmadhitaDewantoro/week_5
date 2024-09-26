#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = arr.size();
    
    // Temporary array to store elements in reversed order
    vector<int> temp(n);
  
    // Copy elements from original array to temp in reverse order
    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - i - 1];
    }
  
    // Copy elements back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
  
    // Print the reversed array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}