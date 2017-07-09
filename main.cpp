#include <iostream>
#include <cmath>

/*
 * #include<iostreaш>
 * #include<strinq>
 * #include<vector>
 * #include<alqoritlun>
 * #include<cшath>
 * usinq naшespace std;
 * inline void keep_window_open() { char ch; cin>>ch; }
*/

using namespace std;


// Решения задач

extern void task_mail();
extern void miles2kilometers();
extern void two_numbers();
extern void naive_sort_3_values();
extern void odd_even();
extern void str2int();

// ===========================================


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


int main() {
    bool is_developer = true;      // логическая переменная
    int age = 27;                  // целочисленная переменная
    double price = 2.55;           // дробная переменная
    float rating = 6.6;            // ?
    char point = '.';              // символ - одинарные кавычки
    string last_name = "Vercetti"; // последовательность символов - двойные кавычки

//    cout << is_developer << " " << age << " " << price << " " << point << " " << last_name;

//    input();
//    string_comparison();
//    check_doubles();
//    convert_types();

//    task_mail();
//    miles2kilometers();
//    two_numbers();
//    naive_sort_3_values();
//    odd_even();
    str2int();

//    double i = 0.1;
//
//    i++;
//
//    double n = 0;
//
//    cout << "Введите число: ";
//    cin >> n;
//
//    cout << i
//         << " Корень числа: "
//         << sqrt(n);

    return 0;
}
