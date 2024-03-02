#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a == b) {
            cout << "0" << endl;
        } else if (a < b) {
            int transfer = b - a;
            cout << transfer << endl;
        } else {
            int transfer = (a % b == 0) ? 0 : b - (a % b);
            cout << transfer << endl;
        }
    }

    return 0;
}
