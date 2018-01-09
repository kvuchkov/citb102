#include <iostream>

using namespace std;

char originFor(char c) {
    return isupper(c) ? 'A' : 'a';
}

char rotate(char c, int rot) {
    char origin = originFor(c);
    int n = c - origin;
    n = (n + rot) % 26;
    return origin + n;
}

void encrypt(istream &in, ostream &out, string key) {
    for(char c = in.get(); !in.eof(); c = in.get()) {
        if(isalpha(c)) {
            c = rotate(c, key[i++]);
        }
        out.put(c);
    }
}

int main() {

    encrypt(cin, cout, 13);
    return 0;
}