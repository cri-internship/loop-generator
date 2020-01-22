#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(460, 810, 270, "zeros");
	float ***A = create_three_dim_float(680, 180, 510, "zeros");
	float ***D = create_three_dim_float(50, 260, 430, "zeros");
	float *C = create_one_dim_float(370, "zeros");

	for (int b = 5; b < 260; b++)
	  for (int a = 4; a < 50; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-5][a]-0.124;
	    
	     B[a][b][a]=B[a-2][b-5][a-4]-D[a][b][a]/A[a][b][a];
	    
	     B[a][b][a]=B[a-2][b-3][a-3]*0.847;
	    
	     float var_a=C[a]/0.668;
	     float var_b=C[a]+0.869;
	    
	     float var_c=B[a][b][a]*0.773;
	     float var_d=B[a-2][b][a-3]+0.334;
	  }

    return 0;
}