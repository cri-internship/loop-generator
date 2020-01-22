#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(360, 620, "ones");
	double **C = create_two_dim_double(290, 830, "ones");
	double ***B = create_three_dim_double(550, 1000, 400, "ones");

	for (int d = 5; d < 395; d++)
	  for (int c = 5; c < 619; c++)
	    for (int b = 5; b < 288; b++)
	      for (int a = 5; a < 288; a++)
	      {
	        
	       C[a][b]=C[a-5][b-4]+0.924;
	        
	       B[a][b][c]=B[a+1][b][c+5]+0.885;
	        
	       B[a][b][c]=B[a+3][b+3][c+3]-A[a][b];
	        
	       C[a][b]=0.565;
	        
	       A[a][b]=B[a][b][c]/C[a][b]+0.3;
	       B[a][b][c]=B[a-4][b-5][c-5]*A[a][b]+C[a][b];
	        
	       double var_a=A[a][b]/0.751;
	       double var_b=A[a+4][b+1]-0.017;
	        
	       double var_c=A[a][b]/0.095;
	       double var_d=A[a-4][b-4]*0.058;
	      }

    return 0;
}