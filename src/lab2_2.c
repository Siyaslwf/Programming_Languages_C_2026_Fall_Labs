#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
   long long result = 1;

   for(int i=1; i<=n; i++){
   result = result*i; 
}
    return result; // placeholder
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if(n<0){
        printf("Error:n must be a non-negative integer (0 or greater)\n");
        return 1;
    }else{
        long long result = factorial(n);
        printf("Factorial of %d is: %lld\n",n, result);
        return 1;

    }

    // TODO: validate input, call function, print result

    return 0;
}
