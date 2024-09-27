#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    
    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    // Ask the user to input elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
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
        cout  << arr[i] << " ";
    }

    return 0;
}
