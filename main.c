#include <stdio.h>
#include <math.h>

int count_intersection_points(double x1, double y1, double r1, double x2, double y2, double r2) {

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    if (x1 == x2 && y1 == y2 && r1 == r2) {
        return -1;
    }


    if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        return 0;
    }


    if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        return 1;
    }


    return 2;
}

int main() {
    double x1, y1, r1, x2, y2, r2;

    printf("Введіть координати центрів та радіуси двох кіл (x1, y1, r1, x2, y2, r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    int result = count_intersection_points(x1, y1, r1, x2, y2, r2);
    printf("Кількість точок перетину: %d\n", result);

    return 0;
}
