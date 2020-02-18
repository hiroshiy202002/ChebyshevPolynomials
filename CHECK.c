#include <stdio.h>

#define N 100
#define NT 10
#define ND 2

void chebyshev_polynomials(double*, double, int, int);

int main(void){
   double Tn[(ND+1)*(NT+1)];
   double x;
   int i, id, it;
   for(i=0; i<=N; i++){
      x = -1.0+2.0/N*i;
      chebyshev_polynomials(Tn, x, ND, NT);
      printf("%lf", x);
      id = 0;
      for(it=0; it<=NT; it++){
         printf(" %lf", Tn[id+it*(ND+1)]);
      }
      printf("\n");
   }
   return(0);
}
