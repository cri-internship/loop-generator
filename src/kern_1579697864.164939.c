#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(40, 270, 900, "random");
	float *C = create_one_dim_float(800, "random");
	float ***B = create_three_dim_float(170, 550, 140, "random");

	for (int b = 5; b < 270; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     C[a]=B[a][b][a];
	     C[a+4]=A[a][b][a]/B[a][b][a];
	    
	     C[a]=C[a]*B[a][b][a];
	     B[a][b][a]=C[a+1]*0.089;
	    
	     float var_a=B[a][b][a]-0.869;
	     float var_b=B[a][b-5][a-4]*0.207;
	    
	     A[a][b][a]=A[a][b][a]/C[a]-B[a][b][a];
	     A[a][b][a]=A[a-5][b-5][a]+C[a]/0.688;
	  }

    return 0;
}