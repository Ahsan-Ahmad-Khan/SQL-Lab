#include<stdio.h>
#include<conio.h>

void main()
{
    int p[20], bt[20], pri[20];
    int wt[20], tat[20];
    int i, k, n, temp;
    float wtavg, tatavg;

    float clrscr();

    printf("Enter the number of processes -- ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        p[i] = i+1;
        printf("Enter Burst Time and Priority for Process %d -- ",i+1);
        scanf("%d %d",&bt[i], &pri[i]);
    }

    // Sorting based on Priority (Lower number = Higher priority)
    for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
            if(pri[i] > pri[k])
            {
                temp = pri[i]; pri[i] = pri[k]; pri[k] = temp;
                temp = bt[i]; bt[i] = bt[k]; bt[k] = temp;
                temp = p[i]; p[i] = p[k]; p[k] = temp;
            }
        }
    }

    wt[0] = 0;
    tat[0] = bt[0];
    wtavg = 0;
    tatavg = tat[0];

    for(i=1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
        tat[i] = tat[i-1] + bt[i];
        wtavg += wt[i];
        tatavg += tat[i];
    }

    printf("\nPROCESS\tPRIORITY\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
        p[i], pri[i], bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %f", wtavg/n);
    printf("\nAverage Turnaround Time = %f", tatavg/n);

    getch();
}
