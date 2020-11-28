#include <stdio.h>
int main(){
    int num[6]= {0,0,0,0,0,0};
    scanf("%d",&num[0]);
    int i;
    // for(i=0 ; i < 5 ; i++){
    //     if(num > score[0] && i==0){
    //         score[0] = num;
    //     }
    //     if(num > score[i+1] && num < score[i-1] && i > 0 && i < 4){
    //         score[i+1] = score[i];
    //         score[i] = num;
    //     }
    //     if(num < score[3] && num > score[4] &&i == 4){
    //         score[4] = num;
    //     }
    // }
    int j;
    int n=6;
    int m;
    for(i=0 ; i <= n-2 ; i++ ){
        for(j=0 ; j <= n-i ; j++){
            if(num[j]>num[j+1]){
                m = num[j];
                num[j] = num[j+1];
                num[j+1] = m;
            }
        }    
    }
    for(i=0 ; i < n ; i++){
        printf("%d\n",num[i]);
    }

    return 0;
}