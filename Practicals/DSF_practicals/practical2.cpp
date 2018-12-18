#include<stdio>
#include<conio>

struct poly{
    float coeff[20];
    int expo[20];
}p1,p2,p3;

int main(){
    int t1,t2,t3;
    t1 = readPoly(p1);
    printf("\nFirst polynomial");
    displayPoly(p1,t1);
    t1 = readPoly(p1);
    printf("\nFirst polynomial");
    displayPoly(p1,t1);
    t3=
}



void displayPoly(struct poly p[10],int term)
 {
	int k;

	for(k=0;k<term-1;k++)
	printf("%d(x^%d)+",p[k].coeff,p[k].expo);
	printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}