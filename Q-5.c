//Q.5 Write a Program to print the below pattern using nested for loop.

//5 4 3 2 1
//  4 3 2 1
//    3 2 1
//      2 1
//        1

#include<stdio.h>
main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}