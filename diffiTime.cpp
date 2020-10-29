#include <stdio.h>
struct TIME{
    int hour;
    int min;
    int sec;
};
void calTime(struct TIME start ,struct TIME end);
int main(){
    struct TIME start,end;
    printf("Start Time\n");
    printf("Enter Hour\n");
    scanf("%d",&start.hour);
    printf("Enter minuet\n");
    scanf("%d",&start.min);
    printf("Enter sec\n");
    scanf("%d",&start.sec);

    printf("End Time\n");
    printf("Enter Hour\n");
    scanf("%d",&end.hour);
    printf("Enter minuet\n");
    scanf("%d",&end.min);
    printf("Enter sec\n");
    scanf("%d",&end.sec);
    calTime(start ,end);
    return 0;
}

void calTime(struct TIME start ,struct TIME end){
    struct TIME diff;
    if(end.sec < start.sec){
        end.sec += 60;
        end.min -= 1;
    }
    diff.sec = (end.sec - start.sec);

    if(end.min < start.min){
        end.min += 60;
        end.hour -= 1;
    }
    diff.min = (end.min - start.min);
    diff.hour = (end.hour - start.hour);
    printf("%d : %d : %d", diff.hour , diff.min , diff.sec);
}