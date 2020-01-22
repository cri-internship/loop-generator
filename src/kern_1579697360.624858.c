#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(840, 160, "zeros");
	double *D = create_one_dim_double(770, "zeros");
	double **B = create_two_dim_double(480, 760, "zeros");
	double *C = create_one_dim_double(480, "zeros");
	double **A = create_two_dim_double(30, 580, "zeros");

	for (int d = 0; d < 758; d++)
	  for (int c = 4; c < 477; c++)
	    for (int b = 4; b < 477; b++)
	      for (int a = 4; a < 477; a++)
	      {
	        
	       D[a]=D[a-3]+A[a][b]/B[a][b];
	        
	       B[a][b]=B[a+3][b+2]+C[a]/E[a][b]*D[a]-C[a];
	        
	       double var_a=C[a]-0.503;
	       double var_b=C[a-4]/0.777;
	        
	       E[a][b]=D[a]+0.172;
	      }

    return 0;
}