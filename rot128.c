/*Peng Gu
 * 09/14/2018
 * rot128.c
 *reads a sentence from the user and translates it into code, and it also reads a number from the command line and starts rotating from there
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int num){
    int output;
    int rot;
    rot = (UCHAR_MAX + 1)/2;
    int input;
    output = num + rot;
    putchar(output);
    while(EOF != (input = getchar())){
	output = input + rot;
	putchar(output);
    }
    return 0;
}

