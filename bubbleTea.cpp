#include <stdio.h>
struct tea{
        char name[15];
        int quantity;
        float price;
        int order=0;
    };
void ordering(tea fromStock[5]);
int main(){
    tea stock[5];
    int n,i,order;
    for(i = 0 ; i < 5 ; i++){
        printf("#%d tea name : ",i+1);
        scanf("%s",stock[i].name);
        printf("#%d tea quantity : ",i+1);
        scanf("%d",&stock[i].quantity);
        printf("#%d tea price : ",i+1);
        scanf("%f",&stock[i].price);
    }
    ordering(stock);
    return 0;
}

void ordering(tea fromStock[5]){
    float total=0;
    int x,i,temp;
    printf("Enter order");
    scanf("%d",&x);
    while(true){
        if(x % 10 != 0){
            temp = x % 10;
            for(i=0 ; i < 5 ; i++){
                if(temp == i+1){
                    fromStock[i].quantity--;
                    fromStock[i].order ++;
                    total += fromStock[i].price;
                }
            }
            x = x /10;
        }
        else if(x % 10 == 0){
            break;
        }
    }
    printf("* * ORDER * *\n");
    for(i=0 ; i < 5 ; i++){
        printf("%s",fromStock[i].name);
        printf("\t%.2f",fromStock[i].price);
        printf("\t x %d",fromStock[i].order);
        printf(" = %.2f \n",fromStock[i].price * fromStock[i].order);
    }
    printf("Total : %.2f\n",total);

    printf("* * STOCK LEFT * *\n");
    for(i=0 ; i < 5 ; i++){
        printf("%s",fromStock[i].name);
        printf("\t%d\n",fromStock[i].quantity);
    }
    
}