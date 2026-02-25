#include <iostream>
#include <vector>
#include <algorithm>   // for find()
using namespace std;

int main() {
    // Create a vector
    vector<int> v = {1, 2, 3, 4, 5};

    // Insert elements
    v.push_back(6);                 // add at end
    v.insert(v.begin() + 1, 9);     // insert 9 at index 1

    // Access elements
    cout << v[2] << endl;           // access using []
    cout << v.at(6) << endl;        // access using at()

    // Traverse using range-based loop
    for (int val : v)
        cout << val << " ";
    cout << endl;

    // Update element
    cout << "Original value at index 0: " << v[0] << endl;
    v[0] = 101;
    cout << "Value after updating: " << v[0] << endl;

    // Print each element on new line
    for (int val : v)
        cout << val << endl;

    // Size of vector
    cout << "Size of the vector: " << v.size() << endl;

    // Traverse using index-based loop
    cout << "Traverse vector: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    // Delete last element
    v.pop_back();

    // Safely erase an element (value at index 3)
    auto it = find(v.begin(), v.end(), v[3]);
    if (it != v.end()) {
        v.erase(it);
    }

    // Print final vector
    cout << "Final vector: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
