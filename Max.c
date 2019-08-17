void main()
{
int a[100],max,n,i;
clrscr();
printf("Enter the number of element in array:");
scanf("%d",&n);
printf("Enter any %d number:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("Maximum element in an array is=%d",max);
getch();
}
