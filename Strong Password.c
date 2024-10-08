#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int b = 0, c = 0, d = 0, e = 0, f = 0;
    char a[20];
    printf("Enter password : ");
    gets(a);
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        if(islower(a[i])){
            b++;
        }
        else if(isupper(a[i])){
            c++;
        }
        else if(isdigit(a[i])){
            d++;
        }
        else if(!(isalnum(a[i]))){
            e++;
        }
        else if(isspace(a[i])){
            f++;
        }
    }
    if(n >= 8 && f == 0 && b >= 1 && c >= 1 && d >= 1 && e >= 1 ){
        printf("Strong Password\n");
    }else{
        printf("Retry\n");
    }
    printf("f value %d\n", f);
    return 0;
}
