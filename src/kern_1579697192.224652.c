#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(170, "zeros");
	double **B = create_two_dim_double(820, 710, "zeros");

	for (int c = 3; c < 709; c++)
	  for (int b = 5; b < 165; b++)
	    for (int a = 5; a < 165; a++)
	    {
	      
	      A[a]=0.342;
	      float  var_a=A[a]/0.591;
	      
	      B[a][b]=B[a-5][b-3]/A[a];
	      
	      A[a]=A[a+5]/0.309;
	      
	      A[a]=A[a+1]/B[a][b];
	      
	      B[a][b]=B[a+5][b+1]-0.383;
	      
	      double var_b=A[a]/0.781;
	      double var_c=A[a+4]-0.597;
	      
	      A[a]=A[a]-B[a][b];
	      B[a][b]=A[a-1]-B[a][b];
	    }

    return 0;
}