#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(610, 320, 340, "random");
	float **B = create_two_dim_float(800, 710, "random");
	float **C = create_two_dim_float(470, 520, "random");
	float ***D = create_three_dim_float(710, 390, 310, "random");

	for (int b = 5; b < 320; b++)
	  for (int a = 4; a < 470; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-5][a-4]+0.132;
	    
	     C[a][b]=C[a][b+4]-0.466;
	    
	     B[a][b]=0.548;
	     B[a-1][b-2]=0.53;
	    
	     D[a][b][a]=A[a][b][a];
	    
	     A[a][b][a]=0.128;
	     A[a-4][b-5][a]=0.446;
	    
	     float var_a=A[a][b][a]/0.973;
	     float var_b=A[a-2][b-1][a-3]/0.081;
	    
	     float var_c=D[a][b][a]*0.742;
	     float var_d=D[a+3][b+4][a+1]*0.464;
	  }

    return 0;
}