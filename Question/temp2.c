#include <stdio.h>
int main()
{
    printf("Enter number of Processes : ");
    int n;
    scanf("%d", &n);
    int process_id[n];
    int arrival_time[n];
    int burst_time[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Process ID for Process %d : ", i);
        scanf("%d", &process_id[i]);
        printf("Enter Burst Time for Process %d : ", i);
        scanf("%d", &burst_time[i]);
        printf("Enter Arrival Time for Process %d : ", i);
        scanf("%d", &arrival_time[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrival_time[i] > arrival_time[j])
            {
                int temp = arrival_time[j];
                arrival_time[j] = arrival_time[i];
                arrival_time[i] = temp;
                temp = burst_time[j];
                burst_time[j] = burst_time[i];
                burst_time[i] = temp;
                temp = process_id[j];
                process_id[j] = process_id[i];
                process_id[i] = temp;
            }
        }
    }
    int prev_time = arrival_time[0];
    int total_waiting_time = 0;
    int total_turnaround_time = 0;
    printf("Process ID | Arrival Time | Burst Time | Waiting Time | Turnarround Time | Completion Time\n");
    for (int i = 0; i < n; i++)
    {
        int temp = prev_time > arrival_time[i] ? prev_time - arrival_time[i] : 0;
        int temp2 = temp + burst_time[i];
        int temp3 = temp2 + arrival_time[i];
        printf("%d    \t| %d \t| %d \t| %d \t| %d \t| %d\n", process_id[i], arrival_time[i], burst_time[i], temp, temp2, temp3);
        total_waiting_time += temp;
        total_turnaround_time += temp2;
        prev_time = temp + burst_time[i] + arrival_time[i];
    }
    printf("Average Waiting Time : %f\n", (float)total_waiting_time / n);
    printf("Average Turnaround Time : %f\n", (float)total_turnaround_time / n);
    return 0;
}