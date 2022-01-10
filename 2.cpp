#include <stdio.h>
#include <conio.h>
void print_arr(int arr[],int len);
int main()
{
 int x[7]={1,15,8,14,5,16,2},len;
 len=sizeof(x)/sizeof(x[0]);
 print_arr(x,len);
 getch();
}

void print_arr(int *a,int len)
{  int i, COLUMS,cout;
 do
{ printf("Kolichestvo elementov v stroke=");
scanf("%d",&COLUMS);}
while (COLUMS<0);
 for(i=0,cout=0; i!=len; i++,cout++)
{ if (cout==COLUMS) {cout=0; printf("\n");}
printf("arr[%d]=%d\t",i,*(a+i));
}
return; }
