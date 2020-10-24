#include <stdio.h>

struct member{
        char name[31];
        int score = 0;
    };
struct ar{
    struct member mem[8];
}array;
void findHighest(struct ar x);
int main(){
    int i,j,n;
    
    for(i=0 ; i < 8 ; i++){
        scanf("%s A C",array.mem[i].name);
    }
    scanf("%d",&n);
    int vote[n];
    for(i=0 ; i < n ; i++){
        scanf("%d",&vote[i]);
    }
    for(i=0 ; i < n ; i++){
        for(j = 0 ; j < 8 ; j++){
            if(vote[i] == j+1){
                array.mem[j].score += 1;
            }
        }
    }
    /*for(i=0 ; i < 8 ; i++){
        printf("%d \n",array.mem[i].score);
    }*/
    findHighest(array);
    
    return 0;
}
void findHighest(struct ar x){
    int i,high=0,low;
    for(i = 0 ; i < 8 ; i++){
        if(x.mem[i].score > high){
            high = x.mem[i].score;
        }
    }
    low = high;
    for(i = 0 ; i < 8 ; i++){
        if(x.mem[i].score < low){
            low = x.mem[i].score;
        }
    }
    while(high != 0){
        if(high == low){
                break;
            }
        for(i=0 ; i < 8 ; i++){
            if(high == x.mem[i].score){
                printf("%s\n",x.mem[i].name);
            }
        }
        high--;
    }
}