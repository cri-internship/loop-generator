#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(70, 500, "ones");
	float *D = create_one_dim_float(540, "ones");
	float *B = create_one_dim_float(150, "ones");
	float **C = create_two_dim_float(880, 670, "ones");

	for (int b = 5; b < 496; b++)
	  for (int a = 1; a < 69; a++)
	  {
	    
	     B[a]=B[a+5]*0.422;
	    
	     C[a][b]=C[a][b+5]/0.719;
	    
	     C[a][b]=C[a+3][b+3]/0.969;
	    
	     D[a]=B[a]/A[a][b];
	     D[a+4]=C[a][b]*0.723;
	    
	     A[a][b]=D[a]+C[a][b]-B[a];
	     A[a-1][b-5]=B[a]/D[a];
	    
	     A[a][b]=C[a][b]+0.01;
	    
	     float var_a=C[a][b]*0.58;
	     float var_b=C[a][b+3]-0.697;
	  }

    return 0;
}