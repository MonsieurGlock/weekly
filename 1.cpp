#include <stdio.h>
struct train{
        int trainNum;
        int stop[5];
        int hour;
        int min;
    };
bool chooseTrain (struct train t , int temp , float time);
int main(){
    int Tn;
    int temp;
    float time;
    bool cat=false;
    printf("Amount of train : ");  
    scanf("%d",&Tn);
    struct train tr[Tn];
    int i,j;
    for(i = 0 ; i < Tn ; i++){
        printf("Enter train number : ");
        scanf("%d",&tr[i].trainNum);
        printf("Enter train departure time : ");
        scanf("%d %d",&tr[i].hour , &tr[i].min);
        for(j = 0 ; j < 5 ; j++){
            printf("Is #%d train stop at #%d station ? : ",i+1,j+1);
            scanf("%d",&tr[i].stop[j]);
        }
    }
    printf("What station you would like to go to : ");
    scanf("%d",&temp);
    printf("What time you would like to go : ");
    scanf("%f",&time);
    printf("You can go to #%d station by train : ",temp);
    for(i = 0 ; i < Tn ; i++){
        cat = chooseTrain(tr[i] , temp , time);
    }
    if(cat == false){
        printf("None");
    }

    return 0;
}

bool chooseTrain (struct train t , int temp , float time){
    int i;
    float d=0;
    bool cat = false;
    d += t.hour;
    t.min = t.min/100;
    d += t.min;
    if(t.stop[temp -1] == 1 && time <= d){
        printf("%d ",t.trainNum);
        return true;
    }
}
