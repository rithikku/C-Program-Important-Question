// Question : Write a program to Print all Armstrong numbers form 1 to 500

#include <stdio.h>
int main(){
    int num,sum,count=1,r;
    while (count<=500){
        num=count;
        sum=0;
        while (num){
            r=num%10;
            sum=sum+r*r*r;
            num=num/10;
        }
        if (count==sum){
            printf("%d is an Armstrong number.\n",count);
        }
        count++;
    }
    return 0;
}

// Output of this Program is 
/*
1 is an Armstrong number.
153 is an Armstrong number.
370 is an Armstrong number.
371 is an Armstrong number.
407 is an Armstrong number.
*/