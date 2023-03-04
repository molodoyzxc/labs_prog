//
// Created by semen on 02.03.2023.
//
#include <iostream>
#include <cmath>
#include "lab2_h.h"

void value(double a, double b, double c, double x) {
    printf("value in x = %lf\n", ((a * x * x) + (b * x) + c));
}

char number(double a, double b, double c) {
    if (((b * b) - (4 * a * c) < 0)) {
        return 0;
    } else if (!((b * b) - (4 * a * c))) {
        return 1;
    } else if (((b * b) - (4 * a * c)) > 0) {
        return 2;
    }
}

void roots(double a, double b, double c) {
    if (!number(a, b, c)) {
        printf("No roots\n");
    } else if (number(a, b, c) == 1) {
        printf("root = %lf\n", (-b) / (2 * a));
    } else if (number(a, b, c) == 2) {
        printf("roots = %lf\t%lf\n", (-b - sqrt((b * b) - (4 * a * c))) / (2 * a),
               (-b + sqrt((b * b) - (4 * a * c))) / (2 * a));
    }
}

void min(double a, double b, double c) {
    if (!number(a, b, c)) {
        printf("No roots\n");
    } else if (number(a, b, c) == 1) {
        printf("min = %lf\n", (-b) / (2 * a));
    } else if (number(a, b, c) == 2) {
        printf("min = %lf\n",
               std::min((-b - sqrt((b * b) - (4 * a * c))) / (2 * a), (-b + sqrt((b * b) - (4 * a * c))) / (2 * a)));
    }
}

void max(double a, double b, double c) {
    if (!number(a, b, c)) {
        printf("No roots\n");
    } else if (number(a, b, c) == 1) {
        printf("max = %lf\n", (-b) / (2 * a));
    } else if (number(a, b, c) == 2) {
        printf("max = %lf\n",
               std::max((-b - sqrt((b * b) - (4 * a * c))) / (2 * a), (-b + sqrt((b * b) - (4 * a * c))) / (2 * a)));
    }
}

void output(double a, double b, double c) {
    printf("(%.2lfx^2)+(%.2lfx)+(%.2lf)", a, b, c);
}
