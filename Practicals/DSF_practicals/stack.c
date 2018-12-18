#include<stdio.h>
void push();
void pop();
void display();
char stack[100][100];
int top, top1=-1 ,top2=50;
int c, ch, i;

int main(){
  do{
    printf("enter your choice\n 1. POP\n 2. PUSH\n 3. Display\n");
    scanf("%d",&c);
    switch(c){
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
  }
  printf("Enter 0 to quit and any other to continue \n");
  scanf("%d",&ch); 
 } while(ch != 0);
return 0;
}

void push(){
  printf("PUSH function");
  if(top1 == top2-1)
    printf("overflow");
    // goto start;
  printf("enter choice\n");
  printf("1.PUSH in stack 1\n");
  printf("2.PUSH in stack 2\n");
  scanf("%d",&c);
  if(c==1){ 
    top1++;
    printf("enter for stack1\n");
    scanf("%s",stack[top1]);
  } else { 
    top2--;
    printf("enter for stack 2\n");
    scanf("%s",stack[top2]);
  }
}

void pop(){
  printf("we are in pop function\n");
  printf("enter choice\n");
  printf("1.POP in stack 1\n");
  printf("2.POP in stack 2\n");
  scanf("%d",&c);

  if(c==1){
    if(top1 == -1)
    printf("Underflow\n");
    else 
    top1--;
  }
  else {
    if(top2 == 50)
        printf("Underflow\n");
    else 
        top2++;
  }
}

void display(){
  printf("we are in display function\n");
  printf("enter choice\n");
  printf("1.pop in stack1\n");
  printf("2.pop in stack 2\n");
  scanf("%d",&c);
  if(c==1){
    for(i=0;i<=top1;i++)
      printf("%s\n",stk[top1]);
    for(i=49;i>=top2;i--)
      printf("%s",stack[top]);
  }
}