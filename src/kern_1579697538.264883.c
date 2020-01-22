#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(140, 530, 660, "zeros");
	float *A = create_one_dim_float(920, "zeros");
	float ***B = create_three_dim_float(810, 130, 880, "zeros");
	float ***C = create_three_dim_float(70, 100, 690, "zeros");

	for (int b = 4; b < 530; b++)
	  for (int a = 3; a < 137; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-4][a-1]/0.724;
	    
	     D[a][b][a]=D[a+3][b][a+1]/B[a][b][a]+C[a][b][a];
	    
	     A[a]=0.801;
	     A[a-2]=0.119;
	    
	     A[a]=0.024;
	    
	     float var_a=A[a]/0.604;
	     float var_b=A[a-3]/0.366;
	    
	     D[a][b][a]=D[a][b][a]-A[a]/B[a][b][a]+A[a];
	     B[a][b][a]=D[a-2][b-3][a-2]+B[a][b][a]*0.791;
	  }

    return 0;
}