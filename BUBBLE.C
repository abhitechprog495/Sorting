#include<stdio.h>
#include<conio.h>
int main()
{
 int list[30],i,j,n,temp;
 printf("Enter The Number Of Elements : ");
 scanf("%d",&n);
 printf("Enter The Elements : ");
 for (i=0;i<n;i++)
 {
  scanf("%d", &list[i]);
 }
 for (i=0;i<n-1;i++)
 {
  for (j=0;j<n-i-1;j++)
  {
   if (list[j]>list[j+1])
   {
    temp=list[j];
    list[j]=list[j+1];
    list[j+1]=temp;
   }
  }
 }
 printf("After Sorting, The List Is : ");
 for (i=0;i<n;i++)
 {
  printf("%d  ",list[i]);
 }
 getch();
}
