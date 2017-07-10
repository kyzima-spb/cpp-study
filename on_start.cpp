//
// Created by kyzima-spb on 10.07.17.
//

#include <iostream>

using namespace std;


void input() {
    string first_name;
//    int age = -1;
    double age = -1;

//    cout << "Введите имя: ";
//    cin >> first_name;
//
//    cout << "Введите возраст: ";
//    cin >> age;

    cout << "Введите имя: и возраст: ";
    cin >> first_name >> age;

    cout << "Привет, " << first_name << ". Тебе " << age * 12 << " месяцев." << endl;
}


void string_comparison() {
    string name1;
    string name2;

    cout << "Введите два имени: ";
    cin >> name1 >> name2;

    if (name1 == name2) {
        cout << "Имена одинаковые" << endl;
    } else if (name1 < name2) {
        cout << name1
             << " предшествует "
             << name2
             << " в алфавитном порядке"
             << endl;
    } else {
        cout << name1
             << " следует за "
             << name2
             << " в алфавитном порядке"
             << endl;
    }
}


void check_doubles() {
    string previous = " ";
    string current;

    while (cin >> current) {
        if (current == previous) {
            cout << "Повторяющееся слово " << current << endl;
        }
        previous = current;
    }
}


void convert_types() {
    char c = 'x';
    int code = c;
    char cc = code;
    cout << c << " " << code << " " << cc << endl;
}
