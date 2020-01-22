#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(630, "ones");
	double **A = create_two_dim_double(700, 110, "ones");
	double **C = create_two_dim_double(230, 430, "ones");

	for (int c = 4; c < 110; c++)
	  for (int b = 3; b < 230; b++)
	    for (int a = 3; a < 230; a++)
	    {
	      
	      A[a][b]=A[a-3][b-4]+0.47;
	      
	      B[a]=A[a][b]+C[a][b];
	      B[a+4]=A[a][b]+C[a][b];
	      
	      C[a][b]=B[a];
	      C[a][b+2]=B[a]-A[a][b];
	      
	      B[a]=C[a][b];
	      
	      double var_a=C[a][b]-0.069;
	      double var_b=C[a-3][b]-0.972;
	      
	      A[a][b]=C[a][b]*A[a][b];
	      B[a]=C[a-3][b-3]*A[a][b]/B[a];
	    }

    return 0;
}