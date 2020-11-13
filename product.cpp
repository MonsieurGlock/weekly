#include <stdio.h>
#include <string.h>
struct list{
    char name[10];
    int quantity;
    float price;
};
void display(char name[10] , int qu , float price );
void star(void);
int main(){
    int n,i;
    printf("Amount of product : ");
    scanf("%d",&n);
    struct list product[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter #%d product name : ",i+1);
        scanf("%s",product[i].name);
        printf("Enter #%d product quantity : ",i+1);
        scanf("%d", &product[i].quantity);
        printf("Enter #%d product price : ",i+1);
        scanf("%f", &product[i].price);
        printf("\n");
    }
    star();
    printf("*Product name * Quantity * Price\n");
    star();
    for(i = 0 ; i < n ; i++){
        display(product[i].name , product[i].quantity , product[i].price);
    }
    star();
    return 0;
}

void display(char name[10] , int qu , float price ){
    int temp = 0,i,amount;
    printf("*");
    for(i=0 ; i < strlen(name) && i < 9 ; i++){
        printf("%c",name[i]);
    }
    temp = 12 - strlen(name);
    if(strlen(name) >= 9){
        printf("..  ");
    }

    while(temp >= 0){
        temp--;
        printf(" ");
    }
    printf("* ");
    temp = 0;
    amount = qu;
    while(true){
        if(qu%10 != 0){
            qu = qu /10;
            temp++;
        }
        else if(qu%10 == 0){
            if(qu - 1 >= 0){
                qu = qu /10;
                temp++;
            }
            if(qu - 1 < 0){
                break;
            }
        }
    }
    printf("%d",amount);
    temp = 8 - temp;
    while(temp >= 0){
        temp--;
        printf(" ");
    }
    printf("* %.2f\n",price);
}

void star(void){
    int i;
    for(i = 1 ; i <= 32; i++){
        printf("*");
    }
    printf("\n");
}
