#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(190, 880, 480, "zeros");
	double *B = create_one_dim_double(490, "zeros");
	double **C = create_two_dim_double(120, 430, "zeros");

	for (int b = 1; b < 430; b++)
	  for (int a = 5; a < 116; a++)
	  {
	    
	     B[a]=B[a-3]+0.053;
	    
	     C[a][b]=C[a-5][b-1]-B[a]*A[a][b][a];
	    
	     C[a][b]=A[a][b][a]-B[a];
	    
	     double var_a=C[a][b]/0.926;
	     double var_b=C[a+4][b]*0.676;
	  }

    return 0;
}