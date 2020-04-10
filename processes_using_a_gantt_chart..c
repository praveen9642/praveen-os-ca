#include<stdio.h>
#include<conio.h>
int main()
 {
   int x,n,p[10],pp[10],bt[10],w[10],t[10],awt,atat,i,at[10],tq;
 
   printf("n is number of process");
   printf("\n\t p is process");
   printf("\n\t pp is process priority");
   printf("\n\t bt is process burst time");
   printf("\n\t w is wait time");
   printf("\n\t t is turnaround time");
   printf("\n\t awt is average waiting time");
   printf("\n\t atat is average turnaround time");
   printf("\n\t at is arrival time");
   printf("\n\t tq is time qunatum");
 
 
   printf("\n\t Enter the number of process : ");
   scanf("%d",&n);
   printf("Enter time quantum");
   scanf("%d",&tq);
   printf("\n\t Enter time priorities : burst time : Arrival time  \n");
 
   for(i=0;i<n;i++)
    {
      
      printf("\n Process %d ",i+1);
      
      scanf("%d %d %d",&pp[i],&bt[i],&at[i]);
	  p[i]=i+1;
    }
 
//sorting on the basis of priority
int j;
  for(i=0;i<n-1;i++)
   {
     for(j=i+1;j<n;j++)
     {
       if(pp[i]<pp[j])
       {
     x=pp[i];
     pp[i]=pp[j];
     pp[j]=x;
     x=bt[i];
     bt[i]=bt[j];
     bt[j]=x;
     x=p[i];
     p[i]=p[j];
     p[j]=x;
      }
      
   }
}
w[0]=0;
awt=0;
t[0]=bt[0];
atat=t[0];
for(i=1;i<n;i++)
 {
 	if(tq<n || tq>n) {
	 
   w[i]=t[i-1];
   awt+=w[i];
   t[i]=w[i]+bt[i];
   atat+=t[i];
	 }
 }
 
 
 printf("\n");
 printf("Gantt chart\n");
 for(i=0;i<n;i++)
 {
 	printf("P %d ",p[i]);
 }

 
printf("\n\nProcess \t Burst Time \t Wait Time \t Turn Around Time   Priority \tArrival time \n");
for(i=0;i<n;i++){
printf("\n  %d",p[i]); printf("\t\t %d",bt[i]); printf("\t\t %d",w[i]); printf("\t\t %d",t[i]); printf("\t\t %d",pp[i]); printf("\t\t %d",at[i]);

}
awt/=n;
atat/=n;
printf("\n Average Wait Time : %d ",awt);
printf("\n Average Turn Around Time : %d",atat);
getch();
}
