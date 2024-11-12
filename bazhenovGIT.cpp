#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers(5); // Создаем вектор для хранения 5 чисел

    cout << "Пожалуйста, введите пять чисел через пробел:\n";

    // Ввод чисел в цикле
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    cout << "\nВведенные вами числа:\n";

    // Вывод чисел в цикле
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}