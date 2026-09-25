#include "sokol.h"
#include <iostream>
#include <cmath>
// 1. Центростремительное ускорение (a = v^2 / r)
double centripetalAccel(double v, double r) {
    if (r <= 0) {
        std::cout << "Ошибка: Радиус должен быть больше нуля!" << std::endl;
        return -1;
    }
    return (v * v) / r;
}

// 2. Центростремительная сила (F = m * v^2 / r)
double centripetalForce(double m, double v, double r) {
    if (r <= 0) {
        std::cout << "Ошибка: Радиус должен быть больше нуля!" << std::endl;
        return -1;
    }
    if (m < 0) {
        std::cout << "Ошибка: Масса не может быть отрицательной!" << std::endl;
        return -1;
    }
    return (m * v * v) / r;
}

// 3. Угловая скорость (w = v / r) — Добавлено в ветке feature
double angularVelocity(double v, double r) {
    if (r <= 0) {
        std::cout << "Ошибка: Радиус должен быть больше нуля!" << std::endl;
        return -1;
    }
    return v / r;
}