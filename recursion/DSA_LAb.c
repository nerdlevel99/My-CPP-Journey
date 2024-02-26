// #first program

// #include <stdio.h>

// int factorial(int n )
// {
// 	if(n==0) return 1;

// 	else return n *factorial(n-1);
// }
// int main()
// {
// 	int n ;
// 	printf("Enter the number you want factorial of : " );
// 	scanf("%d" , &n);
// 	int fact = factorial(n);
// 	printf("Factorial of %d is %d " , n , fact);
// }

// ########################Second Code ###########################

//   #include <stdio.h>

// int fibo(int n)
// {
// 	if(n==1||n==2) return 1;

// 	else return fibo(n-1) + fibo(n-2);
// }
// int main()
// {
// 	int n ;
// 	printf("Enter the number you want fibonacci term : " );
// 	scanf("%d" , &n);
// 	int i = n;
// 	for(i = 1; i <= n; i++)
// 	{
// 		printf("%d\t" ,  fibo(i));
// 	}

// }

// ###########################################################################################################
// #include <stdio.h>

// int gcd(int a , int b)
// {
// 	if(b%a==0) return a;

// 	else
// 	return gcd(b%a, a);
// }
// int main()
// {
// 	int a , b ;
// 	printf("Enter the value for a : " );
// 	scanf("%d" , &a);

// 	printf("Enter the value for b : " );
// 	scanf("%d" , &b);

// 	printf("Gcd of %d and %d is %d" ,a , b ,  gcd(a , b));

// }

// ######################################################
// #include <stdio.h>
// #include
// void tower(int n , char s ,  char h , char d)
// {
// 	if(n==0) return;
// 	tower(n-1 , s  , d , h);
// 	printf("%c --> %c\n" , s , d);

// 	tower(n-1, h , s, d);

// }

// int main()
// {
// 	int n;
// 	printf("Enter the no. of disks : ");
// 	scanf("%d" ,&n );
// 	printf("Number of moves required will be : %d" , )

// 	tower(n ,'A' , 'B' , 'C');
// }

// ##############################################################################

// #include<stdio.h>

// int factorial(int n )
// {
// 	int fact = 1;
// 	int i;
// 	for(i = 1; i <=n; i++) fact *= i;

// 	return fact;
// }

// void fibonacci(int n)
// {
// 	int first=1 , second=1 , sum , i;

// 	printf("%d  %d"  , first , second);

// 	for( i = 3; i <=n; i++)
// 	{
// 		sum = first + second;
// 		printf(" %d " , sum);

// 		first = second;
// 		second = sum;
// 	}
// }

// int gcd(int a , int b)
// {
// 	int i =0;
// 	int hcf = 1;

// 	for( i = 1;  i <=a; i++)
// 	{
// 		if(a%i == 0 && b%i ==0)
// 		{
// 			hcf= i ;
// 		}
// 	}

// 	return hcf;
// }

// int main()
// {
// 	int n , a  , b , choice;

// 	printf("\n----------------------Menu-------------------------\n1.Factorial \n2.Fibonacci\n3.Greatest Common Divisor\n\tYour choice : ");
// 	scanf("%d" , &choice);

// 	switch(choice)
// 	{
// 		case 1: printf("Enter a number : "); scanf("%d"  , &n); printf("Factorial of %d is %d : "  ,n,  factorial(n) ); break;

// 		case 2 : printf("Enter a number : "); scanf("%d"  , &n); fibonacci(n); break;

// 		case 3 : printf("Enter the value of a "); scanf("%d" , &a); printf("Enter the value of b : " );scanf("%d" , &b); printf("Highest common factor of %d and %d  is %d " , a , b , gcd(a , b));
// 	}

// }
