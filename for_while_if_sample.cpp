#include <iostream>

using namespace std;


int main() {

    setlocale(0, "");

    int i;

    for (i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;


    i = 10;
    while (i > 0) {
        cout << i * 3 << " ";
        i--;
    }
    cout << endl;


    if (4 > 5) {
        cout << "Отлично, мы в другой вселенной, в которой 4 > 5\n";
    }
    else {
        if (4 < 5) {
            cout << "4 определенно меньше 5\n";
        }
        else {
            cout << "Вы действительно думаете, что 4 = 5?\n";
        }
    }

    return 0;
}
