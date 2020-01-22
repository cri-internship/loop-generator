#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(470, "random");
	double *C = create_one_dim_double(350, "random");
	double **A = create_two_dim_double(680, 290, "random");

	for (int d = 1; d < 287; d++)
	  for (int c = 5; c < 345; c++)
	    for (int b = 5; b < 345; b++)
	      for (int a = 5; a < 345; a++)
	      {
	        
	       A[a][b]=A[a-1][b-1]/B[a];
	        
	       A[a][b]=A[a][b]+C[a]-C[a];
	       B[a]=A[a+1][b+3]*C[a]-B[a];
	        
	       double var_a=C[a]+0.368;
	       double var_b=C[a+5]-0.77;
	        
	       C[a]=B[a]-0.84;
	       B[a]=B[a-3]/A[a][b]-C[a];
	        
	       double var_c=B[a]-0.604;
	       double var_d=B[a-5]*0.667;
	        
	       A[a][b]=B[a]*A[a][b]-C[a];
	       C[a]=B[a-1]/C[a]*A[a][b];
	      }

    return 0;
}