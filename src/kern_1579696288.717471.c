#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(20, 830, "zeros");
	float ***B = create_three_dim_float(770, 420, 120, "zeros");
	float ***A = create_three_dim_float(490, 110, 990, "zeros");
	float *D = create_one_dim_float(860, "zeros");

	for (int b = 5; b < 420; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     D[a]=D[a-3]/0.76;
	    
	     C[a][b]=C[a][b-5]*0.443;
	    
	     C[a][b]=C[a-4][b-2]-0.042;
	    
	     D[a]=D[a-5]*0.527;
	    
	     B[a][b][a]=B[a+4][b][a+1]+0.472;
	    
	     float var_a=D[a]-0.751;
	  }

    return 0;
}