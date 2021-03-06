//
// Created by kyzima-spb on 08.08.17.
//

#include <iostream>
#include <cmath>

using namespace std;


void task_4_12345() {
    /**
     * Напишите программу, содержащую цикл while, в котором считываются и выводятся на экран два числа типа int.
     * Для выхода из программы используйте символ '|'
     *
     * Измените программу так,
     * чтобы она выводила на экран строку "Наименьшее значение равно: " с последующим наименьшим значением,
     * а затем - строку "Наибольшее значение равно: " с последующим наибольшим значением.
     *
     * Исправьте программу так. чтобы она выводила строку "Числа равны", но только при равенстве введенных чисел.
     *
     * Измените программу так, чтобы она работала с числами типа douЬle, а не int.
     *
     * Измените программу так. чтобы она выводила строку "Числа почти равны",
     * если числа отличаются одно от другого меньше чем на 1.0/100.
     */

    double a = 0, b = 0;

    while (cin >> a >> b) {
        if (a == b) {
            cout << "Числа равны" << endl;
        } else if (fabs(a - b) < 1.0 / 100) {
            cout << "Числа почти равны" << endl;
        } else {
            cout << "Наименьшее значение равно: "
                 << (a < b ? a : b)
                 << endl
                 << "Наибольшее значение равно: "
                 << (a > b ? a : b)
                 << endl;
        }
    }
}


void section4_tasks() {
    task_4_12345();
}
