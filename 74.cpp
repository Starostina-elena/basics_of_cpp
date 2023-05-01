#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main() {

    ifstream f("27-74b.txt");

    if (f.is_open()) {
        long long int n, i, j, s, counter = 0;
        f >> n;
        vector<long long int> data(n);
        vector<long long int> prefix(n + 1);
        prefix[0] = 0;
        for (i = 0; i < n; i++) {
            f >> data[i];
            prefix[i + 1] = prefix[i] + data[i];
        }
        for (i = 0; i < n; i++) {
            for (j = i; j < min(i + 20, n); j++) {
                s = prefix[j + 1] - prefix[i];
                if (s % 39 == 0) {
                    counter++;
                }
            }
        }
        cout << counter;
    }
    else {
        cout << "Error";
    }

    return 0;
}
