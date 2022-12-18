#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int numerator;
    int denominator;

}Fraction;

int gcd(int x, int y)
{
x=abs(x);
y=abs(y);
    if (x == 0)
       return y;
    if (y == 0)
       return x;
    if (x == y)
        return x;
    if (x > y)
    return gcd(x-y, x);
    else
    return gcd(x, y-x);
}
Fraction add(Fraction num1, Fraction num2){

Fraction result;

result.denominator=num1.denominator*num2.denominator;
result.numerator=num1.numerator*num2.denominator+num1.denominator*num2.numerator;
return result;
}
Fraction subtract(Fraction num1, Fraction num2){

Fraction result;

result.denominator=num1.denominator*num2.denominator;
result.numerator=num1.numerator*num2.denominator-num1.denominator*num2.numerator;
return result;
}
Fraction multiply(Fraction num1, Fraction num2){
    Fraction result;
result.denominator=num1.denominator*num2.denominator;
result.numerator=num1.numerator*num2.numerator;
return result;
}
Fraction divide(Fraction num1, Fraction num2){
    Fraction result;
result.denominator=num1.denominator*num2.numerator;
result.numerator=num1.numerator*num2.denominator;
return result;
}
Fraction Finalresult(Fraction x){
Fraction Fresult;
Fresult.numerator=x.numerator/gcd(x.numerator,x.denominator);
Fresult.denominator=x.denominator/gcd(x.numerator,x.denominator);
if(Fresult.numerator<0&&Fresult.denominator<0){
    Fresult.numerator=abs(Fresult.numerator);
    Fresult.denominator=abs(Fresult.denominator);
}
return Fresult;


}

int main()
{
    int ch=1;
    Fraction x,y,r,fr;
    char calc;
   printf("Enter first fraction and operator and second fraction:\n");
   scanf("%d/%d\n",&x.numerator,&x.denominator);
   scanf("%c\n",&calc);
   scanf("%d/%d",&y.numerator,&y.denominator);

        if((y.numerator==0)&&(calc=='/'))
        ch=0;

   if ((x.denominator!=0&&y.denominator!=0)&&ch==1){
   switch (calc){
    case '+' : r=add(x,y);
    break;
    case '-' : r=subtract(x,y);
    break;
    case '*' : r=multiply(x,y);
    break;
    case '/' : r=divide(x,y);
    break;
     default :
      printf("Error");
          ch=0;
   }
   fr=Finalresult(r);
   if(ch==1)
   printf("%d/%d",fr.numerator,fr.denominator);
   }
   else printf("Error");

 return 0;
}

