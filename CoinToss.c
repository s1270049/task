#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char coinToss(int);

#define N 3

int main(){
  int num,i,j;
  int win_cou=0, los_cou=0;
  char coin;
  char name[20];

  printf("\n");

  printf("Who are you?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name); 

  srand(time(NULL));

  printf("Tossing a coin...\n");

  for(i=0;i<N;i++){
    num=rand();
    //printf("%d\n",num);

    coin=coinToss(num%2);

    printf("Round %d: ",i+1);

    if(coin=='H'){
      win_cou++;
      printf("Heads\n");
    }
    else if(coin=='T'){
      los_cou++;
      printf("Tails\n");
    }

    
  }
  printf("Heads: %d, Tails: %d\n",win_cou,los_cou);
  if(win_cou>los_cou)printf("%s won!\n",name);
  else printf("%s lose.\n",name);
  printf("\n");
  return 0;
}

char coinToss(int num){
  if(num==0)return 'T';
  else return 'H';
}
  

  
  
