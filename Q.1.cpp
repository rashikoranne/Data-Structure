#include <stdio.h>
#include <conio.h>

int main(){
    int feet, result;
    printf("Enter the length in feet : ");
    scanf("%d", &feet);
    result = (feet*30);
    printf("The length in cm is = %d", result);

    return 0;
}