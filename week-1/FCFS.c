#include <stdio.h>
struct Process{
int pNO;
int AT;
int BT;
int CT;
int TAT;
int WT;
};
int main(){
int n;
printf("Enter the number of process: ");
scanf("%d" , &n);
struct Process p[n],temp;
for(int i=0 ;i<n; i++){
        p[i].pNO = i+1;
        printf("Process [%d]\n",i+1);
        printf("Enter Arrival time:\n");
        scanf("%d", &p[i].AT);
        printf("Enter Brust time:\n");
        scanf("%d", &p[i].BT);
}
for(int i=0 ; i<n-1 ; i++){
    for(int j=i+1 ; j<n ; j++){
        if(p[i].AT > p[j].AT){
            temp = p[i];
            p[i] = p[j];
            p[j] = temp;
        }
    }
}
int current_time = 0;
for(int i=0 ;i<n ;i++){
    if (current_time < p[i].AT){
 current_time = p[i].AT;
 }
 p[i].CT = current_time + p[i].BT;
 p[i].TAT = p[i].CT - p[i].AT;
 p[i].WT = p[i].TAT - p[i].BT;
 current_time = p[i].CT;
}
float total_TAT =0;
float total_WT=0;
for(int i =0;i<n;i++){
    total_TAT += p[i].TAT;
    total_WT  += p[i].WT;
}
float Avg_TAT = total_TAT/n;
float Avg_WT = total_WT/n;
printf("Procees\tArrival Time\tBrust Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
for(int i=0 ;i<n; i++){
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",p[i].pNO,p[i].AT,p[i].BT,p[i].CT,p[i].TAT,p[i].WT);



}
printf("\nAverage Turnarount Time: %f\n",Avg_TAT);
printf("\nAverage Waiting Time: %f\n", Avg_WT);


}
