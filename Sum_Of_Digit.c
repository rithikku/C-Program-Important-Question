// Qustion: Write a program in C to Calculate them sum of digits of a three numbers Using artmetic operators (No loops should be used)

#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
} 

// Output of this program is:
/*
Enter a number:654
Sum is=15

Enter a number:123
Sum is=6
*/