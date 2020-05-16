#include<stdio.h>
#include<conio.h>
int main()
{
 int list[30],temp,n,i,j;
 printf("Enter The Number Of Elements : ");
 scanf("%d",&n);
 printf("Enter The Elements : ");
 for (i=1;i<=n;i++)
 {
  scanf("%d",&list[i]);
 }
 printf("The List Are ");
 for (i=1;i<=n;i++)
 {
  printf("%d  ",list[i]);
 }
 for (i=1;i<=n;i++)
 {
  for (j=i+1;j<=n;j++)
  {
   if (list[i]>list[j])
   {
    temp=list[i];
	list[i]=list[j];
	list[j]=temp;
   }
  }
 }
 printf("\nThe Sorted List Is : ");
 for (i=1;i<=n;i++)
 {
  printf("%d  ",list[i]);
 }
 getch();
}
