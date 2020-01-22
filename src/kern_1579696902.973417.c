#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(240, 820, "random");
	float ***C = create_three_dim_float(270, 330, 480, "random");
	float *D = create_one_dim_float(200, "random");
	float ***A = create_three_dim_float(850, 330, 780, "random");

	for (int b = 3; b < 325; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     D[a]=D[a-2]*0.415;
	    
	     B[a][b]=B[a-5][b-2]*0.084;
	    
	     C[a][b][a]=C[a-4][b-3][a]/A[a][b][a];
	    
	     D[a]=D[a-3]/B[a][b];
	    
	     A[a][b][a]=A[a+3][b+5][a+3]+0.421;
	    
	     float var_a=D[a]*0.422;
	     float var_b=D[a]/0.086;
	  }

    return 0;
}