#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(510, 580, 270, "zeros");
	double *A = create_one_dim_double(280, "zeros");

	for (int b = 3; b < 576; b++)
	  for (int a = 3; a < 275; a++)
	  {
	    
	     A[a]=A[a-2]*0.186;
	    
	     B[a][b][a]=B[a+2][b+4][a+2]/A[a];
	    
	     A[a]=A[a+5]/0.899;
	    
	     B[a][b][a]=0.027;
	    
	     double var_a=A[a]*0.628;
	     double var_b=A[a-1]/0.039;
	  }

    return 0;
}