#include <stdio.h>

 int main()
  {

 char n;
 double ss,tv,S,X;


 scanf("%s %lf %lf",&n,&ss,&tv);

 S= (tv*15)/100;
 X = S+ss;
  printf("TOTAL = R$ %.2lf\n",X);
    return 0;
}

