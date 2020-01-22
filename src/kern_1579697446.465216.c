#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(30, 270, "random");
	float *C = create_one_dim_float(880, "random");
	float *A = create_one_dim_float(250, "random");

	for (int b = 1; b < 267; b++)
	  for (int a = 4; a < 25; a++)
	  {
	    
	     C[a]=C[a-1]-0.557;
	    
	     C[a]=C[a-3]+0.698;
	    
	     B[a][b]=B[a-1][b-1]/0.006;
	    
	     B[a][b]=B[a+5][b+3]/0.245;
	    
	     float var_a=B[a][b]+0.512;
	     float var_b=B[a+4][b]/0.416;
	    
	     float var_c=C[a]-0.152;
	     float var_d=C[a-4]+0.257;
	  }

    return 0;
}