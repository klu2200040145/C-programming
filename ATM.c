#include<stdio.h>
int min(int c){
    int a, b = 2000, w, nd, d, nb, bal, pin=1234, na, aa, opt;
    switch(c){
        case 1:
        printf("Deposit Menu\n");
        printf("Enter The PIN : ");
        scanf("%d", &a);
        if(a == pin){
            printf("Enter the Deposit Amount : ");
            scanf("%d",&d);
            if(d==0){
                printf("You Cannot Deposit '0'\n");
            }
            else if(d % 100 == 0){
                nd = b+d;
                printf("Amount Deposited successfully\n");
                printf("Will you like to Check the bank balance\n");
                printf("1.YES\n2.NO\n");
                scanf("%d", &opt);
                if(opt == 1){
                    printf("Balance : %d\n", nd);
                }else if(opt == 2){
                    printf("Thank you for using The ATM\n");
                }else{
                    printf("Invalid Choice\n");
                }
            }else{
                printf("Please Enter amount in the denomination of 100\n");
            }
        }else{
            printf("Invalid Number\n");
        }
        break;
        case 2:
        printf("Withdraw Menu\n");
        printf("Enter The PIN : ");
        scanf("%d", &a);
        if(a == pin){
            printf("Enter the Withdrawal Amount :");
            scanf("%d", &w);
            if(w == 0){
                printf("You cannot withdraw '0'\n");
            }
            else if(w % 100 == 0){

            if(b > w){
                nb = b - w;
                printf("Collect the cash\n");
                printf("Will you like to Check the bank balance\n");
                printf("1.YES\n2.NO\n");
                scanf("%d", &opt);
                if(opt == 1){
                    printf("Balance : %d\n", nb);
                }else if(opt == 2){
                    printf("Thank you for using The ATM\n");
                }else{
                    printf("Invalid Choice\n");
                }
            }else{
                printf("Invalid Balanace\n");
            }
            }else{
                printf("Enter the Amount in the Denomination of 100\n");
            }
        }else{
            printf("Invalid number\n");
        }
        break;
        case 3:
        printf("Balance Menu\n");
        printf("Enter The PIN : ");
        scanf("%d", &a);
        if(a == pin){
            bal = nd - nb;
            printf("Current balance : %d\n", b);
        }else{
            printf("Invalid PIN\n");
        }
        break;
        case 4:
        printf("PIN Change Menu\n");
        printf("Enter Old pin : ");
        scanf("%d", &a);
        if(a==pin){
        printf("Enter New pin : ");
        scanf("%d", &aa);
        printf("Enter New Pin : ");
        scanf("%d", &na);
        if(aa == na){
            printf("PIN Changed Successfully\n");
        }else{
            printf("Please Enter The same PIN (New Pin)\n");
        }
        }else{
            printf("Incorrect PIN NUmber\n");
        }
        break;
        default:
        printf("Invalid option\n");
        break;
    }
    return 0;
    }
void main(){
    int a, b, c;
    printf("****************\n");
    printf("1.Deposit\n");
    printf("2.Withdraw\n");
    printf("3.Balance\n");
    printf("4.PIN Change\n");
    printf("Select the option : ");
    scanf("%d", &c);
    min(c);
}