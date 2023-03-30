//https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, count(0);
    cin >> n;
    string var;
    while (n--) {
        cin >> var;
        if (var[1] == '+') {
            ++count;
        }
        else {
            --count;
        }
    }
    cout << count << endl;
    return 0;
}
