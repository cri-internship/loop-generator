#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(120, 860, 480, "ones");
	float **A = create_two_dim_float(1000, 640, "ones");

	for (int b = 2; b < 640; b++)
	  for (int a = 4; a < 120; a++)
	  {
	    
	     A[a][b]=A[a-4][b-2]-0.149;
	    
	     float var_a=A[a][b]*0.327;
	     float var_b=A[a][b-2]*0.128;
	    
	     A[a][b]=B[a][b][a]*A[a][b];
	     B[a][b][a]=B[a-3][b][a-2]/A[a][b];
	  }

    return 0;
}