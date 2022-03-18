# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int randNum;

    srand(time(0));
    randNum= rand()%100+1;
    printf("The random number is %d", randNum);
    return 0;
};