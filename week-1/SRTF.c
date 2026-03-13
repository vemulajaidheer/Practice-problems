
#include <stdio.h>

struct Process {
    int pid;
    int at;
    int bt;
    int rt;
    int ct;
    int tat;
    int wt;
    int resp;
    int started;
};
int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    struct Process p[n];
    for(int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        printf("Enter Arrival Time for Process %d: ", i+1);
        scanf("%d", &p[i].at);
        printf("Enter Burst Time for Process %d: ", i+1);
        scanf("%d", &p[i].bt);
        p[i].rt = p[i].bt;
        p[i].started = 0;
    }
    int completed = 0, current_time = 0;
    float total_wt = 0, total_tat = 0, total_resp = 0;
    while(completed < n) {
        int idx = -1;
        int min_rt = 1e9;
        for(int i = 0; i < n; i++) {
            if(p[i].at <= current_time && p[i].rt > 0) {
                if(p[i].rt < min_rt) {
                    min_rt = p[i].rt;
                    idx = i;
                }
            }
        }
        if(idx == -1) {
            current_time++;
        } else {
            if(p[idx].started == 0) {
                p[idx].resp = current_time - p[idx].at;
                p[idx].started = 1;
            }
            p[idx].rt--;
            current_time++;
            if(p[idx].rt == 0) {
                p[idx].ct = current_time;
                p[idx].tat = p[idx].ct - p[idx].at;
                p[idx].wt = p[idx].tat - p[idx].bt;
                total_wt += p[idx].wt;
                total_tat += p[idx].tat;
                total_resp += p[idx].resp;
                completed++;
            }
        }
    }
    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid, p[i].at, p[i].bt,
               p[i].ct, p[i].tat, p[i].wt, p[i].resp);
    }
    printf("\nAverage Waiting Time = %.2f", total_wt/n);
    printf("\nAverage Turnaround Time = %.2f", total_tat/n);
    printf("\nAverage Response Time = %.2f\n", total_resp/n);
    printf("1BF24CS333");
    return 0;
}
