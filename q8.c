#include<stdio.h>
int main()
{
int a,b,c;
printf("enter 3 no of which 2 are same and one is different\n");
scanf("%d%d%d",&a,&b,&c);
(a==b?(printf("%d\n",c)):((b==c)?(printf("%d\n",a)):(printf("%d\n",b))));
}
