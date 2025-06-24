//Take a number.
//Reverse it.
//If they are equal, then palindrome.

#include <stdio.h>
int main()
{
    int inp, temp, rev=0, rem; printf("Enter your number:\n"); scanf("%d", &inp); temp = inp; while (temp){rem = temp%10;rev = rev*10+rem;temp /=10;}if (rev==inp){printf("Number is a palindrome\n");}else{printf("not a palindrome\n");}return 0;
}
