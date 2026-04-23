#include<stdio.h>
#include<conio.h>

void main()
{
    int ms, bs, nob, ef, n;
    int mp[10], tif = 0;
    int i, p = 0;

    float clrscr();

    printf("Enter total memory (Bytes): ");
    scanf("%d",&ms);

    printf("Enter block size (Bytes): ");
    scanf("%d",&bs);

    nob = ms / bs;              // number of blocks
    ef = ms - (nob * bs);       // external fragmentation

    printf("Enter number of processes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter memory required for process %d: ",i+1);
        scanf("%d",&mp[i]);
    }

    printf("\nNo. of blocks available = %d",nob);
    printf("\n\nPROCESS\tMEMORY\tALLOCATED\tINTERNAL FRAGMENTATION\n");

    for(i=0;i<n && p<nob;i++)
    {
        printf("\nP%d\t%d",i+1,mp[i]);

        if(mp[i] > bs)
        {
            printf("\tNO\t\t---");
        }
        else
        {
            printf("\tYES\t\t%d",bs-mp[i]);
            tif = tif + (bs - mp[i]);
            p++;
        }
    }

    if(i<n)
        printf("\nMemory Full, remaining processes cannot be allocated");

    printf("\n\nTotal Internal Fragmentation = %d",tif);
    printf("\nTotal External Fragmentation = %d",ef);

    getch();
}