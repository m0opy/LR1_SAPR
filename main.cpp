#include <iostream>
using namespace std;

int main() {
    long long sum = 0;
    cout << "Введите целые числа (0 — завершить):\n";
    while (true) {
        long long x;
        if (!(cin >> x)) return 0;
        if (x == 0) break;
        sum += x;
    }
    cout << "Сумма: " << sum << "\n";
    return 0;
}
