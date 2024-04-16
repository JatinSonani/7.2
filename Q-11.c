//Q.11 Write a Program to print the below pattern using nested for loop.
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *

#include<stdio.h>
main()
{
	int i,j,k,z=1;
	for(i=1;i<=5;i++)
	{
		for(k=5-1;k>=i;k-- )
		{
			printf("  ");
		}
		for(j=1;j<=z;j++)
		{
			printf("* ");
		}
		z+=2;
		printf("\n");
	}
}
		