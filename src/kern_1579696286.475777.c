#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(840, 250, 170, "zeros");
	float ***E = create_three_dim_float(210, 490, 880, "zeros");
	float *C = create_one_dim_float(80, "zeros");
	float ***B = create_three_dim_float(340, 720, 110, "zeros");
	float *A = create_one_dim_float(950, "zeros");

	for (int b = 4; b < 250; b++)
	  for (int a = 4; a < 210; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-1][a-4]-0.808;
	    
	     A[a]=0.016;
	     A[a+2]=0.626;
	    
	     B[a][b][a]=D[a][b][a]+E[a][b][a];
	     D[a][b][a]=D[a-1][b-4][a-3]-C[a]/B[a][b][a]+A[a]*E[a][b][a];
	    
	     float var_a=E[a][b][a]/0.148;
	     float var_b=E[a-1][b-2][a-1]-0.276;
	  }

    return 0;
}