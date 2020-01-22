#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,temp,n,list[20];
 clrscr();
 printf("Enter The Number Of Elements : ");
 scanf("%d",&n);
 printf("Enter The Elements : ");
 for (i=0;i<n;i++)
 {
  scanf("%d",&list[i]);
 }
 for (i=1;i<=n-1;i++)
 {
  temp=list[i];
  j=i-1;
  while (j>=0&&temp<list[j])
  {
   list[j+1]=list[j];
   j--;
  }
  list[j+1]=temp;
 }
 printf("Sorted List Is \t");
 for (i=0;i<=n-1;i++)
 {
  printf("%d\t",list[i]);
 }
 getch();
}
