#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(160, 220, "ones");
	float *B = create_one_dim_float(300, "ones");

	for (int b = 4; b < 216; b++)
	  for (int a = 3; a < 156; a++)
	  {
	    
	     B[a]=0.702;
	     B[a-3]=0.906;
	    
	     float var_a=A[a][b]*0.441;
	     float var_b=A[a+4][b+4]+0.026;
	    
	     A[a][b]=A[a][b]*B[a];
	     B[a]=A[a-2][b-4]+B[a];
	  }

    return 0;
}