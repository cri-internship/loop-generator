#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(240, 270, 940, "zeros");
	float ***C = create_three_dim_float(470, 790, 640, "zeros");
	float ***B = create_three_dim_float(740, 580, 370, "zeros");
	float *A = create_one_dim_float(800, "zeros");

	for (int b = 0; b < 265; b++)
	  for (int a = 0; a < 237; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+1][a]+A[a]-D[a][b][a]*C[a][b][a];
	    
	     D[a][b][a]=D[a+1][b+5][a+3]/0.919-A[a];
	    
	     A[a]=A[a+4]+0.406;
	    
	     float var_a=A[a]/0.212;
	     float var_b=A[a+1]-0.478;
	  }

    return 0;
}