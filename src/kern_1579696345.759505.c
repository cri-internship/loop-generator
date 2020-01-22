#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(990, 420, "zeros");
	float *B = create_one_dim_float(870, "zeros");

	for (int b = 1; b < 416; b++)
	  for (int a = 1; a < 865; a++)
	  {
	    
	     B[a]=B[a+5]*A[a][b];
	    
	     B[a]=B[a+4]/A[a][b];
	    
	     A[a][b]=A[a+3][b+4]+0.829;
	    
	     A[a][b]=0.48;
	    
	     float var_a=A[a][b]-0.496;
	     float var_b=A[a][b-1]/0.426;
	    
	     B[a]=B[a]/A[a][b];
	     A[a][b]=B[a-1]*0.174;
	  }

    return 0;
}