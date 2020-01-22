#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(170, 790, "zeros");
	double ***A = create_three_dim_double(630, 110, 370, "zeros");
	double *C = create_one_dim_double(710, "zeros");
	double *D = create_one_dim_double(380, "zeros");
	double *E = create_one_dim_double(700, "zeros");

	for (int b = 1; b < 787; b++)
	  for (int a = 4; a < 166; a++)
	  {
	    
	     B[a][b]=B[a][b-1]+0.916;
	    
	     B[a][b]=B[a-4][b]/0.44;
	    
	     B[a][b]=B[a+1][b+3]*0.421;
	    
	     B[a][b]=B[a+4][b]/0.327;
	    
	     double var_a=D[a]-0.714;
	     double var_b=D[a-1]-0.884;
	  }

    return 0;
}