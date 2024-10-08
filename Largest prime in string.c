#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main() {
    char s[100];
    int d[10] = {0}, mp = -1;
    
    printf("Enter a string : ");
    scanf("%s", s);
    
    for (int i = 0; i < strlen(s); i++) {
        if (isdigit(s[i])) {
            int n = s[i] - '0';
            d[n]++;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (d[i] == 1) {
            int f = 1;
            if (i <= 1) f = 0;
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    f = 0;
                    break;
                }
            }
            if (f && i > mp) mp = i;
        }
    }

    if (mp != -1) {
        printf("The largest prime number %d\n", mp);
    } else {
        printf("No prime number\n");
    }
}

/*Here’s an explanation of the code:

1. **Variable Declaration:**
   - `s[100]`: Stores the input string containing letters and digits.
   - `d[10]`: An array to count how many times each digit (0-9) appears in the string.
   - `mp`: Stores the largest prime number that appears only once in the string.

2. **Input String:**
   - The user enters a string, which is stored in `s`.

3. **Digit Counting:**
   - The loop `for (int i = 0; i < strlen(s); i++)` iterates through each character in the string.
   - If a character is a digit (`isdigit(s[i])`), it's converted to an integer and stored in `n`, and `d[n]` is incremented. This counts how many times each digit appears in the string.

4. **Prime Number Checking:**
   - The second loop `for (int i = 0; i < 10; i++)` checks each digit (0-9).
   - If `d[i] == 1`, it means that digit appears only once in the string.
   - The next part checks if that digit `i` is a prime number.
     - `f = 1` assumes it’s prime.
     - For `i <= 1`, it's not prime, so `f = 0`.
     - Then, for `i > 1`, it checks divisibility using a loop to see if `i` is divisible by any number from 2 to `i/2`. If so, `f` is set to 0, meaning it's not prime.
   - If `f` remains 1 (i.e., `i` is prime), the digit is checked against `mp` (the current largest prime). If `i` is greater than `mp`, it updates `mp`.

5. **Output:**
   - If a prime number that appears only once is found, it's printed.
   - If no such prime number exists, a message is printed saying no prime number was found.

*/
