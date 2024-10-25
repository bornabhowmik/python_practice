#include <iostream>
using namespace std;

// Function declaration for Linear Search
int Linearsearch(int Arr[], int Size, int key);

int main() {
    int Size;

    // Prompt the user to enter the number of elements in the array
    cout << "Enter the number of elements that you want in the array: ";
    cin >> Size;

    int Arr[Size]; // Declare an array of the specified size

    // Prompt the user to enter the elements of the array
    cout << "Enter the elements: ";
    for (int i = 0; i < Size; i++) {
        cin >> Arr[i]; // Read each element into the array
    }

    // Prompt the user to enter the element they want to search for
    int key;
    cout << "Enter the element that you are searching for: ";
    cin >> key;

    // Call LinearSearch function to find the index of the key in the array
    int index = Linearsearch(Arr, Size, key);

    // Output the result of the search
    if (index != -1) {
        // If the key is found, print the index
        cout << "The index of " << key << " is: " << index << endl;
    } else {
        // If the key is not found, notify the user
        cout << "The element " << key << " does not exist in the array." << endl;
    }

    // Thank the user for their input
    cout << "Thank you!" << endl;

    return 0; // Return 0 to indicate successful execution
}

// Function to perform Linear Search
// This function takes an array, its size, and the key to search for as arguments
int Linearsearch(int Arr[], int Size, int key) {
    // Iterate through each element of the array
    for (int i = 0; i < Size; i++) {
        // Check if the current element matches the key
        if (Arr[i] == key) {
            return i; // If found, return the index of the element
        }
    }
    // If the loop completes without finding the key, return -1
    return -1; // Return -1 to indicate that the key was not found
}