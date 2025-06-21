#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    cout << "Huy\n";
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 2;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<string> names = {"Alice", "Bob", "Charlie"};
    for (const auto& name : names) {
        cout << name << " ";
    }
    cout << endl;
    sort(names.begin(), names.end());
    cout << "Sorted names: ";
    for (const auto& name : names) {
        cout << name << " ";
    }
    cout << endl;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "You entered: " << input << endl;
    if (input.empty()) {
        cout << "You entered an empty string." << endl;
    } else {
        cout << "Length of the string: " << input.length() << endl;
    }
    vector<int> numbers = {5, 3, 8, 6, 2};
    sort(numbers.begin(), numbers.end());
    cout << "Sorted numbers: ";
    for (const auto& number : numbers) {
        cout << number << " ";
    }
    cout << endl;
    cout << "Goodbye!" << endl;
    return 0;
}
//Tui đi học lttk tiếp đây =)))