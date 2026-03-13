#include<stdio.h>

struct time{
    int at;
    int wt;
    int pid;
    int mark;
    int bt;
    int ct;
    int tat;
    int remaining_bt;
    int completed;
};

void non_preemptive(struct time p[],int n){
int completed=0,current_time=0;
int total_wt=0,total_tat=0;
while(completed<n){
    int idx=-1;
    int min_bt=9909;
    for(int i=0;i<n;i++){
       if(p[i].at<=current_time && p[i].completed==0){
            if(p[])

       }
    }
}




}

int main(){
int n,choice;
struct time p[10];
printf("enter the number of processes:");
scanf("%d",&n);

for(int i=0;i<n;i++){
    p[i].pid = i+1;
    printf("process:%d\n",p[i].pid);
    printf("enter the at:");
    scanf("%d",&p[i].at);
    printf("enter the bt:");
    scanf("%d",&p[i].bt);

    p[i].completed=0;
}

printf("\ncpu scheduling list:\n");
printf("1.non preemptive\n");
printf("2.premptive \n");
printf("enter ur choice:");
scanf("%d",&choice);

switch(choice){
   case 1:
       non_preemptive(p,n);
       break;
   case 2:
       preemptive(p,n);
       break;
   default:
        printf("invalid choice");
}
 return 0;

}


