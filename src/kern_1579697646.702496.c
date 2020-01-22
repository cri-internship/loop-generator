#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(460, "ones");
	float **C = create_two_dim_float(270, 80, "ones");
	float **B = create_two_dim_float(270, 990, "ones");
	float ***D = create_three_dim_float(930, 460, 930, "ones");

	for (int b = 5; b < 80; b++)
	  for (int a = 5; a < 268; a++)
	  {
	    
	     B[a][b]=B[a-5][b-3]/0.805;
	    
	     D[a][b][a]=D[a][b-3][a-1]+C[a][b]*B[a][b]/A[a];
	    
	     D[a][b][a]=D[a][b][a+5]+A[a]*B[a][b];
	    
	     B[a][b]=B[a+2][b+5]-0.416;
	    
	     C[a][b]=0.326;
	     C[a-5][b-5]=0.42;
	    
	     float var_a=D[a][b][a]+0.855;
	     float var_b=D[a+3][b+5][a+2]-0.778;
	  }

    return 0;
}