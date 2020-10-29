#include <stdio.h>
struct info{
    float aveSpeed;
    float Min;
};
float distance=0;
void findDis(float v , float t , int n);
float hrToMin(float x);

int main(){
    int n,i;
    printf("How many direction you go :");
    scanf("%d",&n);
    struct info x[n];
    for(i=0 ; i<n ; i++){
        printf("#%d Average speed [km/hr] :",i+1);
        scanf("%f",&x[i].aveSpeed);
        x[i].aveSpeed = hrToMin(x[i].aveSpeed);
        printf("#%d Minute :",i+1);
        scanf("%f",&x[i].Min);
    }
    for(i=0 ; i<n ; i++){
        findDis(x[i].aveSpeed , x[i].Min , n);
    }
    printf("Total distance is %.3f km",distance);
    return 0;
}

float hrToMin(float x){
    x = x/60;
    return x;
}

void findDis(float v , float t , int n){
    distance += v*t;
    n--;

}

