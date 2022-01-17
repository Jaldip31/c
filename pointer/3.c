/*#include<stdio.h>
struct students
{
    int rollno,account,stat,eco;
    char name[10];

};
int main()
{
    struct students a[10];
    int i,total;
    float pr;
    char g;

    for(i=0;i<2;i++)
    {
        printf("Roll no[%d]\n",i+1);

        printf("Enter name :");
        scanf("%s",a[i].name);

        printf("Enter marks of Account : ");
        scanf("%d",&a[i].account);

        printf("Enter marks of Stat : ");
        scanf("%d",&a[i].stat);

        printf("Enter marks of Eco : ");
        scanf("%d",&a[i].eco);
    }
    printf("\n");

    printf("Rollno\tname\tAccount\tStat\tEco\tTotal\tPr\tGrade\tP/S");
    for(i=0;i<2;i++)
    {total=a[i].account+a[i].stat+a[i].eco;
    pr=total/3;
    g=(pr>90)?'A':(pr>80)?'B':(pr>70)?'C':(pr>60)?'D':(pr>50)?'E':'F';

        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t%c",i+1,a[i].name,a[i].account,a[i].stat,a[i].eco,total,pr,g);
        (a[i].account>33 || a[i].stat>33 || a[i].eco>33)?printf("\tpass"):printf("\tfail");
    }

}*/
/*Roll no[1]
Enter name :jaldip
Enter marks of Account : 99
Enter marks of Stat : 88
Enter marks of Eco : 11
Roll no[2]
Enter name :rakesh
Enter marks of Account : 99
Enter marks of Stat : 88
Enter marks of Eco : 77

Rollno  name    Account Stat    Eco     Total   Pr      Grade   P/S
1       jaldip  99      88      11      198     66.00   D       fail
2       rakesh  99      88      77      264     88.00   B       pass*/

#include<stdio.h>
struct students
{
    int rollno,account,stat,eco,total,grade;
    float pr;
    char name[10];

};
int main()
{
    struct students a[10];
    int i,x=0,y=0,z=0;
    char g;

    for(i=0;i<2;i++)
    {
        printf("Roll no[%d]\n",i+1);

        printf("Enter name :");
        scanf("%s",a[i].name);

        printf("Enter marks of Account : ");
        scanf("%d",&a[i].account);

        printf("Enter marks of Stat : ");
        scanf("%d",&a[i].stat);

        printf("Enter marks of Eco : ");
        scanf("%d",&a[i].eco);

        a[i].total=a[i].account+a[i].stat+a[i].eco;
        a[i].pr=a[i].total/3;
        a[i].grade=(a[i].pr>90)?'A':(a[i].pr>80)?'B':(a[i].pr>70)?'C':(a[i].pr>60)?'D':(a[i].pr>50)?'E':'F';
        x+=a[i].account;
        y+=a[i].stat;
        z+=a[i].eco;
    }

    printf("Rollno\tname\tAccount\tStat\tEco\tTotal\tPr\tGrade\tP/S");
    for(i=0;i<2;i++)
    {
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t%c",i+1,a[i].name,a[i].account,a[i].stat,a[i].eco,a[i].total,a[i].pr,a[i].grade);
        (a[i].account>33 && a[i].stat>33 && a[i].eco>33)?printf("\tpass"):printf("\tfail");
    }
    printf("\ntotal\t\t%d\t%d\t%d\t%d",x,y,z,x+y+z);

}

 //                > - &&
 //                < - ||

/*
Roll no[1]
Enter name :jal
Enter marks of Account : 99
Enter marks of Stat : 55
Enter marks of Eco : 11
Roll no[2]
Enter name :99
Enter marks of Account : 66
Enter marks of Stat : 88
Enter marks of Eco : 77
Rollno  name    Account Stat    Eco     Total   Pr      Grade   P/S
1       jal     99      55      11      165     55.00   E       fail
2       99      66      88      77      231     77.00   C       pass
total           165     143     88      396
*/