#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(450, 740, 30, "ones");
	float *B = create_one_dim_float(110, "ones");
	float ***D = create_three_dim_float(440, 720, 510, "ones");
	float *A = create_one_dim_float(230, "ones");

	for (int b = 5; b < 718; b++)
	  for (int a = 5; a < 105; a++)
	  {
	    
	     B[a]=B[a+5]/0.977;
	    
	     B[a]=B[a+1]+A[a]-C[a][b][a];
	    
	     B[a]=B[a+2]+D[a][b][a]*D[a][b][a]-0.324;
	    
	     C[a][b][a]=B[a]-D[a][b][a];
	     C[a-1][b-5][a-5]=B[a]/A[a];
	    
	     float var_a=D[a][b][a]*0.787;
	     float var_b=D[a+5][b+2][a+5]/0.277;
	  }

    return 0;
}