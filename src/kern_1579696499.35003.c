#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(20, 280, "zeros");
	double **C = create_two_dim_double(130, 170, "zeros");
	double **B = create_two_dim_double(70, 430, "zeros");

	for (int d = 4; d < 168; d++)
	  for (int c = 3; c < 16; c++)
	    for (int b = 3; b < 16; b++)
	      for (int a = 3; a < 16; a++)
	      {
	        
	       B[a][b]=B[a-2][b-4]+A[a][b];
	        
	       B[a][b]=B[a+4][b+4]-0.03;
	        
	       C[a][b]=0.292;
	       C[a+3][b+2]=0.956;
	        
	       A[a][b]=C[a][b]/B[a][b];
	       A[a+4][b+5]=B[a][b]/C[a][b];
	        
	       double var_a=B[a][b]+0.359;
	       double var_b=B[a-3][b]-0.382;
	      }

    return 0;
}