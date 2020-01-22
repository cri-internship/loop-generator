#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(970, 310, 170, "ones");
	float **D = create_two_dim_float(850, 830, "ones");
	float ***E = create_three_dim_float(70, 340, 120, "ones");
	float ***B = create_three_dim_float(400, 200, 730, "ones");
	float ***C = create_three_dim_float(90, 380, 320, "ones");

	for (int b = 3; b < 197; b++)
	  for (int a = 4; a < 70; a++)
	  {
	    
	     E[a][b][a]=E[a-4][b-1][a-4]*0.79;
	    
	     B[a][b][a]=B[a+2][b][a+2]/0.534;
	    
	     float var_a=C[a][b][a]*0.746;
	     float var_b=C[a+3][b][a+5]+0.281;
	    
	     E[a][b][a]=B[a][b][a]+C[a][b][a]-E[a][b][a]*D[a][b]/A[a][b][a];
	     A[a][b][a]=B[a+1][b+3][a+1]+A[a][b][a]*E[a][b][a]-C[a][b][a]/D[a][b];
	    
	     float var_c=C[a][b][a]*0.92;
	     float var_d=C[a][b-3][a-2]-0.77;
	  }

    return 0;
}