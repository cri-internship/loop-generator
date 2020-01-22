#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(200, "zeros");
	double **A = create_two_dim_double(790, 350, "zeros");

	for (int c = 2; c < 345; c++)
	  for (int b = 0; b < 196; b++)
	    for (int a = 0; a < 196; a++)
	    {
	      
	      A[a][b]=A[a+1][b+5]/B[a];
	      
	      A[a][b]=0.289;
	      
	      A[a][b]=B[a]*A[a][b];
	      B[a]=B[a+4]-A[a][b];
	      
	      double var_a=A[a][b]*0.202;
	      double var_b=A[a+2][b+5]-0.115;
	    }

    return 0;
}