#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(350, "zeros");
	float ***C = create_three_dim_float(810, 680, 470, "zeros");
	float ***A = create_three_dim_float(890, 230, 870, "zeros");

	for (int b = 4; b < 230; b++)
	  for (int a = 2; a < 810; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-2][a-2]*B[a];
	    
	     float var_a=C[a][b][a]/0.628;
	     C[a][b][a]=0.327;
	    
	     A[a][b][a]=A[a+4][b][a+3]+0.504;
	    
	     C[a][b][a]=A[a][b][a];
	    
	     float var_b=C[a][b][a]-0.878;
	     float var_c=C[a-2][b-1][a-2]-0.404;
	  }

    return 0;
}