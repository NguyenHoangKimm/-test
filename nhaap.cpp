 //dieu kien la 1 so nguyen to,tat ca so trong no la stn, tong la snt 
#include <stdio.h>
main()
{
	int a,b,tt,t,s,n,i; 
	printf("Nhap 2 khoang de kiem tra: \n");
	scanf("%d %d",&a,&b);
	t=0;
	for (i=a;i<=b;i++)
		for (n=a;n<=b;n++)
			if (i%n==0)
		printf("%d",i);
		
		
 } 
