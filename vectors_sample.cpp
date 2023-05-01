#include <iostream>
#include <vector>

using namespace std;


int main() {

    int i;

    // вектор без известной изначально длины
    vector<int> data;
    for (i = 0; i < 5; i++) {
        data.push_back(i);
    }
    for (i = 0; i < data.size(); i++) { // data.size() эквивалентно питоновскому len(data)
        cout << data[i] << " ";
    }
    cout << endl;


    // вектор с известной изначально длиной
    vector<int> data2(5);
    for (i = 0; i < 5; i++) {
        data2[i] = i * 2;
    }
    for (i = 0; i < data2.size(); i++) {
        cout << data2[i] << " ";
    }
    cout << endl;


    // вектор с известной изначально длиной и значением 0 по умолчанию для всех элементов
    vector<int> data3(5, 0);
    for (i = 0; i < data3.size(); i++) {
        cout << data3[i] << " ";
    }
    cout << endl;


    // вектор, у которого сразу заполнены элементы
    vector<int> data4 = {5, 6, 7, 8, 9};
    for (i = 0; i < data4.size(); i++) {
        cout << data4[i] << " ";
    }
    cout << endl;


    return 0;
}
