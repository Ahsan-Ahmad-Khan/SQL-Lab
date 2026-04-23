#include<stdio.h>
#include<conio.h>

void main()
{
    int p[20], bt[20], wt[20], tat[20];
    int i, k, n, temp;
    float wtavg, tatavg;

    float clrscr();

    printf("\nEnter number of processes: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        p[i]=i;
        printf("Enter Burst Time for Process %d: ", i);
        scanf("%d", &bt[i]);
    }

    // Sorting
    for(i=0;i<n;i++)
        for(k=i+1;k<n;k++)
            if(bt[i] > bt[k])
            {
                temp=bt[i]; bt[i]=bt[k]; bt[k]=temp;
                temp=p[i]; p[i]=p[k]; p[k]=temp;
            }

    wt[0]=0;
    tat[0]=bt[0];
    wtavg=0;
    tatavg=bt[0];

    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=tat[i-1]+bt[i];
        wtavg+=wt[i];
        tatavg+=tat[i];
    }

    printf("\nPROCESS\tBT\tWT\tTAT\n");

    for(i=0;i<n;i++)
        printf("P%d\t%d\t%d\t%d\n", p[i], bt[i], wt[i], tat[i]);

    printf("\nAverage WT = %f", wtavg/n);
    printf("\nAverage TAT = %f", tatavg/n);

    getch();
}