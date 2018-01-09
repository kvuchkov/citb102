#include <iostream>
#include <vector>

using namespace std;

void executePut(vector<int> &state) {
    int value;
    cin >> value;

    state.insert(state.begin(), value);
}

void executeTake(vector<int> &state) {
    cout << state.back() << endl;
    state.pop_back();
}

void executeSum(const vector<int> &state) {
    int sum = 0;
    for(int i=0; i<state.size(); i++) {
        sum += state[i];
    }
    cout << sum << endl;
}

int main() {
    vector<int> state;

    string cmd;
    while(cin >> cmd) {
        if(cmd == "put") {
            executePut(state);
        } else if(cmd == "take") {
            executeTake(state);
        } else if(cmd == "sum") {
            executeSum(state);
        } else {
            cout << "Unrecognized command: " << cmd << endl;
        }
    }

    return 0;
}