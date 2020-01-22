#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(560, 990, "zeros");
	double **D = create_two_dim_double(930, 120, "zeros");
	double *A = create_one_dim_double(390, "zeros");
	double *C = create_one_dim_double(200, "zeros");

	for (int d = 5; d < 120; d++)
	  for (int c = 5; c < 197; c++)
	    for (int b = 5; b < 197; b++)
	      for (int a = 5; a < 197; a++)
	      {
	        
	       D[a][b]=D[a-1][b-5]/0.659;
	        
	       C[a]=C[a+3]*B[a][b];
	        
	       D[a][b]=D[a+4][b]-0.29+A[a]/B[a][b];
	        
	       B[a][b]=0.696;
	       B[a+5][b+3]=0.026;
	        
	       C[a]=D[a][b]+D[a][b];
	      }

    return 0;
}