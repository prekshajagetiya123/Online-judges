
#include<stdio.h>

void add(int,int,int);
void sub(int,int,int);
void mult(int,int,int);
struct poly{
 float c;
 int e;
} p1[10],p2[10],p3[10],p4[100];

int main(){
  float f;
  int h1,h2,min,max,i,count=0,j,ct=0,ch;
  // input
  printf("enter the highest power of the equation 1\t");
  scanf("%d",&h1);
  printf("enter the highest power for the equation 2\t");
  scanf("%d",&h2);
  printf("\n\nenter the coefficients for equation 1\n\n");
  for(i=0;i <= h1; i++){
    // Taking power
    printf("enter the coefficient for power %d ",i);
    scanf("%f",&f) ;
    p1[i].c=f;
    p1[i].e=i;
  }
  //enter first equation
  printf("\n equation 1 is ");
  printf("%fx^%d",p1[h1].c,p1[h1].e);
  for(i = h1-1 ; i >= 0 ; i--){
    printf("+%fx^%d",p1[i].c,p1[i].e);
  }
  // Enter Second Equation
  printf("\n\n now enter for equation 2\n\n");
  for(i=0 ; i<=h2 ; i++){
    printf("enter the coefficient for power %d ",i);
    scanf("%f",&f) ;
    p2[i].c = f;
    p2[i].e = i;
  }
  // Display Second Equation
  printf("\n equation 2 is :");
  printf("%fx^%d",p2[h2].c,p2[h2].e);
  for(i=h2-1;i>=0;i--){
    printf("+%fx^%d",p2[i].c,p2[i].e);
  }
  if(h1 >= h2){
    max=h1;
    min=h2;
    count = 1;
  } else {
    max=h2;
    min=h1;
    count = 2;
  }
  // Get the user's choice
  printf("\nENTER YOUR CHOICE\n");
  printf("1.addition\n");
  printf("2.subtraction\n");
  printf("3.multiplication\n");
  scanf("%d",&ch);
  switch(ch){
    // Call the respective function 
    case 1 : add(count,min,max);
          break;
    case 2 : sub(count,min,max);
          break;
    case 3 : mult(count,min,max);
          break;
  };
  return 0;
}

void add(int count,int min,int max){
  //  add function
  int i;
  for(i=0;i<=min;i++){
    // Adding the elements by calling the respective array
    p3[i].c=p1[i].c+p2[i].c;
    // storing at the appropriate position i
    p3[i].e=i;
  }
  if(count == 1){
    for(i = min+1;i <= max ; i++){
      p3[i].c = p1[i].c;
      p3[i].e = i;
    }
  }
  else if(count==2){
    for(i=min+1 ; i<=max ; i++){
      p3[i].c=p2[i].c;
      p3[i].e=i;
    }
  }
  printf("\n\nthe sum of these two equation is :\n\n%fx^%d",p3[max].c,p3[max].e);
  for(i=max-1;i>=0;i--){
    // Print the sum from the third array
    printf("+%fx^%d",p3[i].c,p3[i].e);
  }
  printf("\n");
void sub(int count,int min ,int max){
}

    int i;
    for(i=0;i<=min;i++){
    p3[i].c=p1[i].c-p2[i].c;
    p3[i].e=i;
    }
    if(count==1){
    for(i=min+1;i<=max;i++){
      p3[i].c=p1[i].c;
      p3[i].e=i;
    }
    }
    else if(count==2){
    for(i=min+1;i<=max;i++){
      p3[i].c=p2[i].c;
      p3[i].e=i;
    }
    }
    printf("\n\nthe subtraction of these two euation is :\n\n%fx^%d",p3[max].c,p3[max].e);
    for(i=max-1;i>=0;i--){
      if(p3[i].c<0)
      printf("%fx^%d",p3[i].c,p3[i].e);
      else
      printf("+%fx^%d",p3[i].c,p3[i].e);
    }
    printf("\n");
}

  void mult(int count,int min,int max){
    int i,j,ct = 0;
    for(i = 0; i <= max ; i++){
      for(j = 0 ;j <= min; j++){
        if(count == 1){
          p4[ct].c = p1[i].c * p2[j].c;
          p4[ct].e = p2[i].e + p1[i].e;
          ct++;
        }
        else{
          p4[ct].c = p2[i].c * p1[j].c;
          p4[ct].e = p2[i].e + p1[j].e;
          ct++;
        }
      }
    }

  for(i = 0;i < ct ; i++){
    for(j = i+1 ; j < ct; j++){
      if(p4[i].e == p4[j].e){
        p4[i].c = p4[i].c + p4[j].c ;
        p4[j].c = 0;
      }
    }
  }
  printf("\n\n\nthe multiplication of these equation is\n\n");
  printf("%fx^%d",p4[ct-1].c,p4[ct-1].e);
  for(i = ct-2 ; i >= 0; i--){
    if(p4[i].c == 0)
    continue;
    printf("+%fx^%d",p4[i].c,p4[i].e);
  }
  printf("\n");
}
