#include <iostream>
#include <vector>

using namespace std;

vector<int> add(const vector<int> &a, const vector<int> &b) {
    vector<int> result(a.size());

    for(int i=0; i<a.size(); i++) {
        result[i] = a[i] + b[i];
    }

    return result;
}

void print(const vector<int> &v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> a, b;
    int aSize, bSize;

    cin >> aSize;
    a.resize(aSize);
    for(int i=0; i<aSize; i++) {
        cin >> a[i];
    }
    print(a);

    cin >> bSize;
    b.resize(bSize);
    for(int i=0; i<bSize; i++) {
        cin >> b[i];
    }
    print(b);

    if(a.size() != b.size()) {
        cout << "To add two vectors they must be of the same size!" << endl;
        return -1;
    }

    vector<int> result = add(a, b);
    print(result);

    return 0;
}