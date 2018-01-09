#include <iostream>

using namespace std;

bool equalsIgnoreCase(const string &a, const string &b) {
    if(a.length() != b.length()) {
        return false;
    }

    for(int i=0; i<a.size(); i++) {
        if(tolower(a[i]) != tolower(b[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    string a, b;

    while(cin >> a >> b) {
        if(equalsIgnoreCase(a, b)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}