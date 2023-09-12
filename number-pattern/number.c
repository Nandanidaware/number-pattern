/*//1234
//1234
//1234
//1234

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
//1
//12
//123
//1234
#include<stdio.h>
int  main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}

*/
/*
//1234
//123
//12
//1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
//1
//22
//333
//4444

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 1*2*3*4*5
// 1*2*3*4
// 1*2*3
// 1*2
// 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i-1;j++)
		{
			printf("%d * ",j);
		}
		printf("%d",i);
		printf("\n");
	}
	return 0;
}
*/
/*
//5555
//555
//55
//5

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",N);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 01234
// 0123
// 012
// 01

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 1 
// 33
// 555
// 7777

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",k);
		}
		printf("\n");
		k=k+2;
	}
	return 0;
}
*/
/*
//4444
//333
//22
//1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
//1
//21
//321
//4321

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int k=i;
		for(int j=1;j<=i;j++)
		{
			printf("%d",k);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 54321
// 4321
// 321
// 21
// 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		int k=i;
		for(int j=1;j<=i;j++)
		{
			printf("%d",k);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}

*/
/*
// 1
// 32
// 654
// 10987

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=1;
	int m=3;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",k);
			k=k-1;
		}
		printf("\n");
		k=k+m;
		m=m+2;
	}
	return 0;
}
*/
/*

//        1
//	1 2
//    1 2 3
//  1 2 3 4	

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
			{
				printf("%d",j);
			}
			printf("\n");
	}
	return 0;
}
*/
/*
//         1
// 	 2 4
//     3 6 9	
// 4 8 12 16

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j*i);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
//1 2 3 4 5
//2 2 3 4 5
//3 3 3 4 5
//4 4 4 4 5
//5 5 5 5 5

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		for(int j=i+1;j<=N;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

*/
/*
// 1 3 5 7 9
// 3 5 7 9
// 5 7 9
// 7 9
// 9

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=1;
	for(int i=N;i>0;i--)
	{
		int t=k;
		for(int j=1;j<=i;j++)
		{
			printf("%d",t);
			t=t+2;
		}
		printf("\n");
		k=k+2;
	}
	return 0;
}

*/
/*
// 10 
// 10 8
// 10 8 6
// 10 8 6 4

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int k=10;
		for(int j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k-2;
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 1
// 2 3 4
// 5 6 7 8 9
// 10 11 12 13 14 15 16

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int s=1;
	int p=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=p;j++)
		{
			printf("%d ",s);
			s=s+1;
		}
		printf("\n");
		p=p+2;
	}
}
*/
/*
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int s=1;
	for(int i=1;i<=N;i++)
	{
		for(int  j=1;j<=i;j++)
		{
			printf("%d ",s);
			s=s+1;
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 0 
// 1 0 1
// 2 1 0 1 2
// 3 2 1 0 1 2 3
// 4 3 2 1 0 1 2 3 4

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
	{
		int k=i;
		for(int j=i;j>=0;j--)
		{
			printf("%d ",j);
		}
		for(int j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 24
// 23 22
// 21 20 19
// 18 17 16 15
// 14 13 12 11 10

#include<stdio.h>
int main()
{
	int N,A;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&A);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",A);
			A=A-1;
		}
		printf("\n");
	}
	return 0;
	
}

*/
/*
// 0
// 2 4
// 4 8 8
// 8 16 16 16 
// 16 32 32 32 32

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int m=0;
	int s=1;
	for(int i=0;i<=N;i++)
	{
		printf("%d ",m);
		for(int j=0;j<i;j++)
		{
			printf("%d ",m*2);
		}
		printf("\n");
		s=s*2;
		m=s;
	}
	return 0;
}
*/
/*

// 5 4 3 2 1 1 2 3 4 5 
// 5 4 3 2     2 3 4 5
// 5 4 3         3 4 5
// 5 4             4 5
// 5                 5

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=0;
	int p=1;
	for(int i=N;i>0;i--)
	{
		int r=N;
		for(int j=1;j<=i;j++)
		{
			printf("%d ",r);
			r=r-1;
		}
		for(int j=1;j<=k;j++)
		{
			printf("  ");
		}
		int s=N;
		for(int m=p;m<=s;m++)
		{
			printf("%d ",m);
		}
		printf("\n");
		k=k+2;
		p=p+1;
	}
	
	return 0;
}
*/
/*
// 1
// 1 2 1 
// 1 2 3 2 1
// 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",j);
			
		}
		for(int s=i-1;s>=1;s--)
		{
			printf("%d ",s);
		}
		printf("\n");
		k=k+2;
	}
	return 0;
}
*/
/*
//PASCAL TRIANGLE
// 1
// 1 2
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
	{
		int s=1;
		for(int j=0;j<=i;j++)
		{
			printf("%d ",s);
			s=s*(i-j)/(j+1);
		}
		printf("\n");
	}
	return 0;

}
*/
/*

// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(k%2==0)
			{
				printf("0 ");
				k++;
			}
			else
			{
				printf("1 ");
				k++;
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*
// 5
// 5 4 
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
	{
		int k=N;
		for(int j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k-1;
		}
		printf("\n");
	}
	return 0;
}

*/
/*
// 1 2 3 4 5 
//   2 3 4 5 
//     3 4 5 
//       4 5
//         5

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=0;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=k*2;j++)
		{
			printf(" ");
		}
		for(int j=i;j<=N;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		k=k+1;
	}
	return 0;
}
*/
/*

// 0
// 2 4
// 4 8 8 
// 8 16 32 64
// 16 32 64 128 256

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int m=0,s=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",m);
			m=m*2;
		}
		printf("\n");
		s=s*2;
		m=s;
	}
	return 0;
}
*/
/*


//            1                  
//	       1 0 1 
//	   1 0 1 0 1
//     1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int i=1;
	int s=N-i*2;
	for(int k=1;k<=N;k+=1)
	{
		for(int j=1;j<=s;j++)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			if(j==1 || j==i)
			{
				printf("1 ");
			}
			else if(j%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
		i=i+2;
	}
	return 0;
}
*/
/*

// 4 4 3 2
//  3 4 3
//   2 4 
//    1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		int a=N;
		for(int k=1;k<=i;k++)
		{
			if(k==1)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d ",a);
				a=a-1;
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*

// 1
// 2 4
// 3 4 3
// 4 4 3 2

#include <stdio.h>
int main()
{
	int N;
	printf("ENTER THHE NUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		int a=N;
		for(int k=1;k<=i;k++)
		{
			if(k==1)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d ",a);
				a=a-1;
			}
		}
		printf("\n");
		
	}
	return 0;
}
*/
/*
// 1
// 1 1
// 1 2 1
// 1 3 2 1
// 1 4 3 2 1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE  NUMBER:- ");
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
	{
		if(i==0)
		{
			printf("1 ");
			printf("\n");
		}
		else
		{
			int k=i;
			for(int j=0;j<=i;j++)
			{
				if(j==0)
				{
					printf("1 ");
				}
				else if(k>=1)
				{
					printf("%d ",k);
					k=k-1;
				}
			}
			printf("\n");
		}
	}
	return 0;
}

*/
/*

//    1
//   2 4
//  3 4 3
// 4 4 3 2

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE ENUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		int a=N;
		for(int s=1;s<=i;s++)
		{
			if(s==1)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d ",a);
				a=a-1;
			}
		}
		printf("\n");
	}
	return 0;
}

*/
/*
//   1
//  2 4
// 3 4 3
//4 4 3 2
// 3 4 3
//  2 4
//   1

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE ENUMBER:- ");
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		int a=N;
		for(int s=1;s<=i;s++)
		{
			if(s==1)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d ",a);
				a=a-1;
			}
		}
		printf("\n");
	}
	for(int i=N-1;i>0;i--)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		int a=N;
		for(int k=1;k<=i;k++)
		{
			if(k==1)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d ",a);
				a=a-1;
			}
		}
		printf("\n");
	}
	return 0;
}
*/
/*	

// 4 4 3 2
//  3 4 3
//   2 4
//    1
//   2 4
//  3 4 3
// 4 4 3 2

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	for(int i=N;i>0;i--)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		int a=N;
		for(int k=1;k<=i;k++)
		{
			if(k==1)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d ",a);
				a=a-1;
			}
		}
		printf("\n");
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N-i;j++)
		{
			printf(" ");
		}
		int a=N;
		for(int s=1;s<=i;s++)
		{
			if(s==1)
			{
				printf("%d ",i);
			}
			else
			{
				printf("%d ",a);
				a=a-1;
			}
		}
		printf("\n");
	}

	return 0;	
}
*/
/*

// 5
// 0 0
// 3 3 3
// 0 0 0 0
// 1 1 1 1 1 
// 0 0 0 0 0 0

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=N-1;
	for(int i=0;i<=N;i++)
	{
		if(i%2==0)
		{
			for(int j=1;j<=i;j++)
			{
				printf("0");
			}
			printf("\n");
		}
		else
		{
			for(int j=1;j<=i;j++)
			{
				printf("%d",k);
			}
			printf("\n");
			k=k-2;
		}
	}
	return 0;
}
*/
/*
// 1
// * *
// 3 3 3
// * * * *
// 5 5 5 5 5 
// * * * * * *
// 7 7 7 7 7 7 7

#include<stdio.h>
int main()
{
	int N;
	printf("ENTER THE NUMBER:- ");
	scanf("%d",&N);
	int k=1;
	for(int i=0;i<=N;i++)
	{
		if(i%2==0)
		{
			for(int j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			for(int j=1;j<=i;j++)
			{
				printf("%d ",k);
			}
			printf("\n");
			k=k+2;
		}
	}
	return 0;
}
*/















































































































































































































































































































