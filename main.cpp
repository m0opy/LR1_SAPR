#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Введите целые числа (0 — завершить):\n";

    long long sum = 0;
    long long mn = numeric_limits<long long>::max();
    long long mx = numeric_limits<long long>::min();
    bool hasData = false;

    while (true) {
        long long x;
        if (!(cin >> x)) return 0;  // защита от EOF/ошибки
        if (x == 0) break;
        hasData = true;
        sum += x;
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }

    if (!hasData) {
        cout << "Вы не ввели ни одного числа.\n";
        return 0;
    }

    cout << "Сумма: " << sum << "\n";
    cout << "Минимум: " << mn << "\n";
    cout << "Максимум: " << mx << "\n";
    return 0;
}
