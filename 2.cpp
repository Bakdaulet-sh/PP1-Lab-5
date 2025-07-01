#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input, reversed = "";
    stack<char> bb;

    cout << "Enter a string: ";
    cin >> input;

    for (char c : input)
        bb.push(c);

    while (!bb.empty()) {
        reversed += bb.top();
        bb.pop();
    }

    cout << "Reversed string: " << reversed << endl;
    return 0;
}
