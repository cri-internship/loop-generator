#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(50, "ones");
	double *C = create_one_dim_double(90, "ones");
	double **A = create_two_dim_double(820, 120, "ones");

	for (int d = 3; d < 115; d++)
	  for (int c = 5; c < 50; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       B[a]=0.1;
	       B[a]=0.234;
	        
	       A[a][b]=0.729;
	       A[a+4][b+1]=B[a];
	        
	       A[a][b]=0.651;
	        
	       C[a]=C[a]*A[a][b]-B[a];
	       A[a][b]=C[a-4]*A[a][b];
	        
	       B[a]=A[a][b]*C[a]/B[a];
	       B[a]=A[a-5][b-3]*C[a];
	        
	       double var_a=A[a][b]*0.58;
	       double var_b=A[a+5][b+4]+0.393;
	      }

    return 0;
}