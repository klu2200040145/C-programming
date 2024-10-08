
/*to check the given string is a valid user ID or not
  rules
1)length should be greater than or equal to 5
2)it should not start with digit
3)it may contain lower case, upper case, digit, only special character "_"
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char a[100];
    int c = 1;
    printf("Enter user ID: ");
    gets(a);
    int len = strlen(a);
    if (len < 5 || isdigit(a[0])) {
        c = 0;
    }
    for (int i = 0; i < len; i++) {
        if (!isalnum(a[i]) && a[i] != '_') {
            c = 0;
            break;
        }
    }
    if (c) {
        printf("Valid user ID\n");
    } else {
        printf("Invalid user ID\n");
    }
    printf("c value %d\n", c);
    return 0;
}
