/*Peng Gu
 * 09/14/2018
 * diamond.c
 * The user can decide the size of the diamond to print with input, and if inputis negative the diamond will be of opposite color
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int getdigit(){
    int input;
    int a;
    input = getchar();
    while(EOF != input && 0 == isdigit(input) && '-' != input){
	input = getchar();
    }
    if ('-' == input){
        a = getchar();
	a = a-'0';
	a = -a;
	return a;
    }
    if (EOF == input)
	return -1;
    return input-'0';
}

int main(){
    printf("I will print a diamond for you, enter a size between 1-9: \n");
    int num = getdigit();
    int k, i, count;
    if (num>0){
	count = num-1;
        for (i = 1; i <= num; i++){
	    for (k = 1; k <= count; k++)
		printf(" ");
	    count--;
	    for (k = 1; k <= 2*i - 1; k++)
		printf("*");
	    printf("\n");
	}
	count = 1;
	for (i = 1; i<= num-1;i++){
	    for(k = 1; k <= count; k++)
		printf(" ");
	    count++;
	    for(k = 1; k<=2*(num-i)-1; k++)
		printf("*");
	    printf("\n");
	}
    }
    if (num<0){
	count = -num;
	for (i = 1; i <= count; i++){
	    for (k = 1; k<=count-i; k++)
		printf("*");
	    for (k = 1; k<=2*i-1; k++)
		printf(" ");
	    for (k = count-i; k>0; k--)
		printf("*");
	    printf("\n");
	}
	for (i = count-1; i>0; i--){
	    for (k = count-i; k>0; k--)
		printf("*");
	    for (k = 1; k<=2*i-1; k++)
		printf(" ");
	    for (k = count-i; k>0; k--)
		printf("*");
	    printf("\n");
	}
    }
    return 0;
}
