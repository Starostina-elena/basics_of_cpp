#include <iostream>
#include <fstream>

using namespace std;


int main() {

    //���� �� �������
    int a;
    cin >> a;
    cout << a << endl;

    ifstream f("27-74a.txt");
    if (f.is_open()) {
        int b;
        f >> b;
        cout << b << endl;
    }
    else {
        cout << "Failed open the file";
    }

    // ���� ��� ����� ������� ��������� ��������, ������ ������� �� ����� ��������� << (��� ��������� � � cin, � � ������ �� �����)
    int c, d;
    cin >> c >> d;
    cout << c << " " << d << endl;
    // ���� ������ �� ������� ������ ����� ���� ��������� ����� ����� ��������, ��������� ������ ��� ����������, ������� split ����� �� ����, c++ ��� �� ����������

    return 0;
}
