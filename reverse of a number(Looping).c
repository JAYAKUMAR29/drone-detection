#include <stdio.h>
int main()
 {
    int number, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int original = number;
    while (number != 0)
     {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
     }
    printf("The reverse of %d is: %d\n", original, reverse);
    return 0;
}
