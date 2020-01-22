#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(120, "random");
	float *A = create_one_dim_float(580, "random");
	float ***B = create_three_dim_float(30, 660, 210, "random");

	for (int b = 0; b < 115; b++)
	  for (int a = 0; a < 115; a++)
	  {
	    
	     C[a]=0.892;
	     C[a+1]=0.167;
	    
	     float var_a=C[a]/0.539;
	     float var_b=C[a+4]+0.19;
	    
	     float var_c=C[a]+0.231;
	     float var_d=C[a+5]+0.192;
	    
	     B[a][b][a]=A[a]-B[a][b][a];
	     C[a]=A[a+4]*0.679;
	  }

    return 0;
}