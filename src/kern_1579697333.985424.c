#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(180, "ones");
	double ***B = create_three_dim_double(270, 570, 190, "ones");

	for (int b = 5; b < 570; b++)
	  for (int a = 5; a < 178; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-5][a-5]-0.02;
	    
	     B[a][b][a]=B[a+2][b][a+3]+0.796;
	    
	     B[a][b][a]=B[a+2][b][a+4]*0.976;
	    
	     double var_a=A[a]/0.792;
	     double var_b=A[a+2]/0.258;
	    
	     B[a][b][a]=B[a][b][a]-0.737;
	     A[a]=B[a-4][b][a-5]/0.09;
	  }

    return 0;
}