#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p[10][5],temp[5];
	int i,j,pt[10],wt[10],totwt=0,pr[10],temp1,n;
	float avgwt;
	printf("Enter no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter student %d name:",i+1);
  		scanf("%s",&p[i]);
		printf("enter process time:");
		scanf("%d",&pt[i]);
		printf("enter no of gifts:");
		scanf("%d",&pr[i]);
	}
  	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pr[i]<pr[j])
			{
				temp1=pr[i];
				pr[i]=pr[j];
				pr[j]=temp1;
				temp1=pt[i];
				pt[i]=pt[j];
				pt[j]=temp1;
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}
		}
	}
	wt[0]=0;
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+wt[i-1];
		totwt=totwt+wt[i];
	}
	avgwt=(float)totwt/n;
	printf("student_name\t Process_time\t No.Gifts\t\n");
	for(i=0;i<n;i++)
	{
	   printf(" %s\t\t %d\t\t %d\t \t\n" ,p[i],pt[i],pr[i]);
	}
	
	getch();
}
