//
// Created by semen on 02.03.2023.
//

#ifndef LAB2_PROG_LAB2_CLASS_H
#define LAB2_PROG_LAB2_CLASS_H

#include <iostream>
#include "lab2_h.h"

class app {
public:
    void start() {
        double a, b, c, x;
        char input;
        printf("input a b c\na=");
        scanf("%lf", &a);
        printf("b=");
        scanf("%lf", &b);
        printf("c=");
        scanf("%lf", &c);
        printf("Functions:\n1.find value in x\n2.find number of roots\n3.find roots\n4.find min\n5.find max\n6.output\n\ninput command\n");
        while (scanf("%d", &input)) {
            if (input == 1) {
                printf("input x\nx=");
                scanf("%lf", &x);
                value(a, b, c, x);
            } else if (input == 2) {
                printf("number of roots = %d\n", number(a, b, c));
            } else if (input == 3) {
                roots(a, b, c);
            } else if (input == 4) {
                min(a, b, c);
            } else if (input == 5) {
                max(a, b, c);
            } else if (input == 6) {
                output(a, b, c);
            }
        }
    }
};


#endif //LAB2_PROG_LAB2_CLASS_H
