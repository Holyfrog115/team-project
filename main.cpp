// Командный проект. Группа ПИ-52.
// Команда: Конышев (в. 63, техлид), Сокол (в. 39).
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "sokol.h"

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int choice;
    double m, v, r;

    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";
        cout << "3. Центростремительное ускорение\n";
        cout << "4. Центростремительная сила\n";
        cout << "5. Угловая скорость\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
        case 3:
            cout << "Введите скорость (v) и радиус (r): ";
            cin >> v >> r;

            double a;
            a = centripetalAccel(v, r);
            if (a != -1) {
                cout << "Центростремительное ускорение = " << a << "\n";
            }
            break;
        case 4:
            cout << "Введите массу (m), скорость (v) и радиус (r): ";
            cin >> m >> v >> r;

            double F;
            F = centripetalForce(m, v, r);
            if (F != -1) {
                cout << "Центростремительная сила = " << F << "\n";
            }
            break;
        case 5:
            cout << "Введите скорость (v) и радиус (r): ";
            cin >> v >> r;

            double w;
            w = angularVelocity(v, r);
            if (w != -1) {
                cout << "Угловая скорость = " << w << " рад/с\n";
            }
            break;
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
        cout << "Нажмите любую клавишу для продолжения"; 
        _getch();
        system("cls");
    } while (choice != 0);
}