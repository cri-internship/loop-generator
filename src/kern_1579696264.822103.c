#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(400, 150, "zeros");
	double **C = create_two_dim_double(540, 540, "zeros");
	double *B = create_one_dim_double(190, "zeros");

	for (int d = 5; d < 150; d++)
	  for (int c = 3; c < 396; c++)
	    for (int b = 3; b < 396; b++)
	      for (int a = 3; a < 396; a++)
	      {
	        
	       A[a][b]=A[a][b-3]*C[a][b]/B[a];
	        
	       A[a][b]=A[a-3][b-1]-0.143;
	        
	       A[a][b]=A[a+4][b]-0.237;
	        
	       C[a][b]=A[a][b]*B[a];
	       C[a-2][b-4]=A[a][b];
	        
	       double var_a=C[a][b]*0.428;
	       double var_b=C[a-3][b-5]*0.942;
	      }

    return 0;
}