#include <iostream>
#include <fstream>

using namespace std;


int main() {

    //ввод из консоли
    int a;
    cin >> a;
    cout << a << endl;

    // чтение из файла
    ifstream f("27-74a.txt");
    if (f.is_open()) {
        int b;
        f >> b;
        cout << b << endl;
    }
    else {
        cout << "Failed open the file";
    }

    // Если вам нужно считать несколько значений, просто читайте их через несколько >> (это относится и к cin, и к чтению из файла)
    int c, d;
    cin >> c >> d;
    cout << c << " " << d << endl;
    // Ваши данные во входном потоке могут быть разделены между собой пробелом, переносом строки или табуляцией, никаких split здесь не надо, c++ сам всё рассплитит

    return 0;
}
