#include <stdio.h>

int main() {
    double height, width;
    double perimeter, area;

    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
 
    perimeter = 2 * (height + width);
    area = height * width;

    printf("Perimeter of the rectangle: %.2lf\n", perimeter);
    printf("Area of the rectangle: %.2lf\n", area);

    return 0;
}
