#include <stdio.h>

int main(){
    
    const float pi = 3.14;
    float radius, area, circumference;
    int choice;

    printf("Press 1 to find area of circle or any other number to find circumference : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the radius of the circle : ");
        scanf("%f", &radius);
        area = pi * (radius*radius);
        printf("Area of the circle is = %f", area);
    } else {
        printf("Enter the radius of the circle : ");
        scanf("%f", &radius);
        circumference = 2 * pi * radius;
        printf("Circumference of the circle is = %f", circumference);
    }
    

    return 0;
}
