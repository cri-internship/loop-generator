#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(20, 290, 280, "zeros");
	float *C = create_one_dim_float(990, "zeros");
	float ***A = create_three_dim_float(390, 540, 470, "zeros");

	for (int b = 3; b < 290; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     C[a]=C[a-3]*0.437;
	    
	     A[a][b][a]=A[a-5][b-3][a-5]+0.727;
	    
	     A[a][b][a]=A[a+3][b+2][a+4]/0.449;
	    
	     C[a]=A[a][b][a]/C[a];
	     A[a][b][a]=A[a-4][b][a-2]/B[a][b][a]-C[a];
	    
	     B[a][b][a]=B[a][b][a]/A[a][b][a]*C[a];
	     B[a][b][a]=B[a-3][b-3][a-1]+A[a][b][a]*C[a];
	    
	     float var_a=A[a][b][a]-0.147;
	     float var_b=A[a+2][b+5][a+2]/0.379;
	    
	     float var_c=A[a][b][a]-0.963;
	     float var_d=A[a-5][b-1][a-2]-0.088;
	  }

    return 0;
}