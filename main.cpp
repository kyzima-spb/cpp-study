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

// Тестовые примеры

extern int do_something(int a);
extern int do_something(int a, int b);
extern double do_something(double a, double b);

// ===========================================


int main() {
//    task_mail();
//    miles2kilometers();
//    two_numbers();
//    naive_sort_3_values();
//    odd_even();
//    str2int();

    cout << "Функция запущена с одним аргументом: " << do_something(6) << endl;
    cout << "Функция запущена с двумя аргументами int: " << do_something(12, 3) << endl;
    cout << "Функция запущена с двумя аргументами double: " << do_something(12.1, 3.1) << endl;

    return 0;
}
