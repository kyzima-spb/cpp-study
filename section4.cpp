//
// Created by kyzima-spb on 07.08.17.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


constexpr double PI = 3.14159; // символическая константа, значение должно быть известно до компиляции
//PI = 5;

void use(int n) {
    const double C = n + PI; // символическая константа, значение не известно во время компиляции
    cout << C << endl;
}


void print_short_ascii_table() {
    /**
     * Символ 'b' равен char('a' + 1), 'c' равен char('a' + 2) и т.д.
     * Используя цикл, выведите на экран таблицу символов и соответствующих им целочисленных значений.
     */

    int i = 'a';
    int n = 'z';

    while (i <= n) {
        cout << char(i) << "\t" << i << endl;
        ++i;
    }


    /**
     * Перепишите программу с помощью инструкции for.
     * Затем модифицируйте программу так, чтобы таблица содержала значения для прописных символов и цифр.
     */

    for (int k = '0', m = '9'; k <= m; ++k) {
        cout << char(k) << "\t" << k << endl;
    }

    for (int k = 'a', m = 'z'; k <= m; ++k) {
        cout << char(k) << "\t" << k << endl;
    }

    for (int k = 'A', m = 'Z'; k <= m; ++k) {
        cout << char(k) << "\t" << k << endl;
    }
}


int square(int x) {
    /**
     * Реализуйте функцию square() не используя оператор умножения.
     * Иначе говоря. выполните умножение х * х с помощью повторяющегося сложения
     * (начните с переменной. равной нулю, и х раз добавьте к ней число х).
     * Затем выполните версию "первопрограммы". используя функцию square().
     */

    int result = 0;

    for (int i = 0; i < x; ++i) {
        result += x;
    }

    return result;
}


void square_by_david_wheeler() {
    /**
     * В качестве примера итерации рассмотрим первую программу, выполненную на машине с хранимой программой (EDSAC).
     * Она была написана Дэвидом Уилером (David Wheeleг)
     * в компьютерной лаборатории Кэмбриджского университета (Cambridge Univeгsity, England) 6 мая 1 949 года.
     * Эта программа вычисляет и распечатывает простой список квадратов.
     */

    for (int i = 0; i < 100; ++i) {
        cout << i << "\t" << square(i) << endl;
    }
}


void print_vector(vector<int> v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << ", ";
    }
    cout << endl;
}

void print_vector(vector<string> v) {
    for (string i : v) {
        cout << i << ", ";
    }
    cout << endl;
}


vector<double> load_temp() {
    vector<double> temps;

    // Чтобы ограничить область видимости входной переменной temp циклом, мы используем цикл for, а не цикл while
    for (double temp; cin >> temp;) {
        temps.push_back(temp);
    }

    return temps;
}

double temp_average(vector<double> temps) {
    // Вычисление средней темпера туры

    double sum = 0;

    for (double t : temps) {
        sum += t;
    }

    return sum / temps.size();
}

double temp_median(vector<double> temps) {
    // Вычисление медианы температуры
    sort(temps.begin(), temps.end());
    return temps[temps.size() / 2];
}


void word_filter(vector<string> disliked) {
    /**
     * Напишите программу. "заглушающую" нежелательные слова.
     * Иначе говоря, считывайте слова из потока cin и выводите их в поток cout,
     * заменяя нежелательные слова словом BLEEP.
     * Начните с одного нежелательного слова, например
     *   string disliked = "Broccoli";
     * Когда отладите программу, добавьте еще несколько нежелательных слов.
     */

    for (string word; cin >> word; ) {
        if (find(disliked.begin(), disliked.end(), word) != disliked.end()) {
            cout << " BLEEP";
        } else {
            cout << " " << word;
        }
    }
}


void section4() {
//    print_short_ascii_table();
//    square_by_david_wheeler();

    // Вектор - это просто последовательность элементов, к которым можно обращаться по индексу.
    vector<int> v = {5, 7, 9, 4, 6, 8}; // Вектор из 6 целых чисел
    vector<string> users
            = {"kyzima-spb", "mhz-svetik", "md6hash"}; // Вектор из 3-х строк
    users.push_back("something");

    // vector заданного размера, не указывая значения элементов.
    // элементы получают значение по умолчанию для данного типа.
    vector<int> vi(6);    // vector из 6 int, инициализированных 0
    vector<string> vs(4); // vector из 4 строк, инициализированных ""

    print_vector(v);
    print_vector(users);
    print_vector(vi);
    print_vector(vs);
//
//    cout << "Введите температуру:" << endl;
//    vector<double> temps = load_temp();
//
//    cout << "Средняя температура: " << temp_average(temps) << endl
//         << "Медианная температура: " << temp_median(temps) << endl;

    vector<string> disliked
            = {"Ппц", "Капец"};

    word_filter(disliked);


//    constexpr double CM_PER_INCH = 2.54;
//    double length = 1;
//    char unit = 0;
//
//    cout << "Пожалуйста введите длину и единицу измерения (c или i): ";
//    cin >> length >> unit;
//
//    switch (unit) {
//        case 'i':
//            cout << length << "in == " << CM_PER_INCH * length << "cm" << endl;
//            break;
//        case 'c':
//            cout << length << "cm == " << length / CM_PER_INCH << "in" << endl;
//            break;
//        default:
//            cout << "Извините, я не знаю такую единицу измерения" << endl;
//            break;
//    }
}