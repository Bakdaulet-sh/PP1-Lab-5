#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> bb;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        int num;
        cin >> num;
        bb.push(num);
    }

    cout << "Stack (Top to Bottom): ";
    while (!bb.empty()) {
        cout << bb.top() << " ";
        bb.pop();
    }
    cout << endl;
    return 0;
}
