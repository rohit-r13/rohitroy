#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cout << "Sample sentence: ";
    getline(cin, x);
    cout << "Reverse sentence: ";
    for (int i = x.length() - 1; i >= 0; i--) {
        cout << x[i];
    }
    return 0;
}
