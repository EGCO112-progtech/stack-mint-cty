#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

//void push(NodePtr *top, int x);
//int pop(NodePtr* top);

  int main(int argc, char **argv){
    
  int i,N1=0,N2=0,N3=0,j;
  Stack s;
  s.top=NULL;
  s.size=0;
 // NodePtr *top=NULL;
    
  for(i=1;i<argc;i++){
    for(j=0;j<strlen(argv[i]);j++){
      switch(argv[i][j]){
        case'{':
        case'[':
          push(&s,argv[i][j]); 
          N1=1;
          break;
        case'}':
          N2=1;
          if(pop(&s)!='{'){ 
          N3=1;
            }
        break;
        case']':
          N2=1;
          if(pop(&s)!='['){ 
            N3 = 1;
            
            }
          break;
           }
      }
    if(N1==1 && N2==1 && N3!=1 && (strlen(argv[i]) % 2)==0){
    printf("argv %d: Correct \n",i);
      } 
    else if(N1==1 && N2==1 && N3==1 && (strlen(argv[i]) % 2)==0){
     printf("argv %d: Incorrect mismatch\n",i); 
      }
    else if(N1==1&&(N2==0||N3==0)){
        printf("argv %d: Incorrect too many open parenthesis\n",i); 
      }
    else {
        printf("argv %d: Incorrect too many close parenthesis\n",i);
    }
  N1=0;
  N2=0;
  N3=0;
    pop_all(&s);
    }
    return 0;
    }





    
/*while(top){
 printf("%d\n",pop(&top));
}
     
  push(&top,5);
  printf("%d\n",pop(&top));
  pop(&top);
  push(&top,7);
  push(&top,8);
 printf("%d\n",pop(&top));
 printf("%d\n",pop(&top));
 printf("%d\n",pop(&top));
  


 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
        Use stack to help with the parentheses

     }



}  */

   

