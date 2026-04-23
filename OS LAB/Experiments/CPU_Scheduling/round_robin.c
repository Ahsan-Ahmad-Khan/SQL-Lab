#include<stdio.h>
#include<conio.h>

void main()
{
    int bu[10], wa[10], tat[10], ct[10];
    int i,j,n,t,max;
    float awt=0, att=0, temp=0;

    float clrscr();

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter Burst Time for P%d: ", i+1);
        scanf("%d",&bu[i]);
        ct[i]=bu[i];
    }

    printf("Enter Time Slice: ");
    scanf("%d",&t);

    max=bu[0];
    for(i=1;i<n;i++)
        if(max<bu[i]) max=bu[i];

    for(j=0;j<(max/t)+1;j++)
        for(i=0;i<n;i++)
            if(bu[i]!=0)
            {
                if(bu[i]<=t)
                {
                    tat[i]=temp+bu[i];
                    temp+=bu[i];
                    bu[i]=0;
                }
                else
                {
                    bu[i]-=t;
                    temp+=t;
                }
            }

    for(i=0;i<n;i++)
    {
        wa[i]=tat[i]-ct[i];
        att+=tat[i];
        awt+=wa[i];
    }

    printf("\nPROCESS\tBT\tWT\tTAT\n");
    for(i=0;i<n;i++)
        printf("P%d\t%d\t%d\t%d\n", i+1, ct[i], wa[i], tat[i]);

    printf("\nAverage WT = %f", awt/n);
    printf("\nAverage TAT = %f", att/n);

    getch();
}