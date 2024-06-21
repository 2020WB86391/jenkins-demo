#include <stdio.h>
int main() {

    int number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
<<<<<<< HEAD
    sum = number1 + number2;
=======
    difference = number1 + number2;
>>>>>>> branch

    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
//function added in branch1
int func_add(int a, int b)
{
        // i am in main branch
        // i am making this changes in
        // one more change
        return a+b;
}
