#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(530, 490, "zeros");
	float **A = create_two_dim_float(330, 40, "zeros");
	float *B = create_one_dim_float(630, "zeros");
	float **D = create_two_dim_float(170, 850, "zeros");

	for (int b = 0; b < 36; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     B[a]=B[a-5]+0.76;
	    
	     C[a][b]=B[a]/A[a][b]*D[a][b];
	     C[a-5][b]=D[a][b];
	    
	     B[a]=0.017;
	    
	     float var_a=A[a][b]/0.133;
	     float var_b=A[a][b+4]+0.806;
	  }

    return 0;
}