#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << "array[" << i << "]=" << a[i] << endl;
    }
}

int sum(const vector<int> &a) {
    int s = 0;

    for (int i = 0; i < a.size(); i++) {
        s += a[i];
    }

    return s;
}

double avg(const vector<int> &a) {
    return sum(a) / a.size();
}

int maxn(const vector<int> &a) {
    int best = a[0];
    for (int i = 0; i < a.size(); i++) {
        best = max(best, a[i]);
    }
    return best;
}

int minn(const vector<int> &a) {
    int best = a[0];
    for (int i = 0; i < a.size(); i++) {
        best = min(best, a[i]);
    }
    return best;
}

int main() {

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    print(a);
    cout << "Sum: " << sum(a) << endl;
    cout << "Avg: " << avg(a) << endl;


    return 0;
}