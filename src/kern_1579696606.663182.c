#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(550, 360, 530, "ones");
	float *B = create_one_dim_float(940, "ones");
	float *D = create_one_dim_float(530, "ones");
	float *A = create_one_dim_float(560, "ones");
	float *C = create_one_dim_float(540, "ones");

	for (int b = 3; b < 527; b++)
	  for (int a = 3; a < 527; a++)
	  {
	    
	     A[a]=A[a-1]-D[a]*B[a];
	    
	     D[a]=D[a+3]-A[a]+C[a]*E[a][b][a]/B[a];
	    
	     B[a]=B[a+3]/C[a];
	    
	     C[a]=D[a];
	     C[a-3]=B[a]-D[a]/E[a][b][a];
	    
	     C[a]=B[a]/D[a];
	     B[a]=B[a-1]/C[a]*D[a];
	    
	     float var_a=B[a]*0.617;
	     float var_b=B[a+4]+0.217;
	  }

    return 0;
}