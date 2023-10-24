#include <stdio.h>

int main() {
    float height;

    // Input the height from the user in centimeters
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    // Categorize the person based on height
    if (height < 150) {
        printf("Dwarf\n");
    } else if (height == 150) {
        printf("Average\n");
    } else if (height > 150 && height < 165) {
        printf("Average\n");
    } else if (height == 165) {
        printf("Tall\n");
    } else {
        printf("Tall\n");
    }

    return 0;
}
