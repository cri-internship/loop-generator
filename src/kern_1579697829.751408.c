#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(520, 960, "ones");
	float **E = create_two_dim_float(500, 1000, "ones");
	float ***A = create_three_dim_float(540, 220, 160, "ones");
	float *B = create_one_dim_float(500, "ones");
	float **C = create_two_dim_float(840, 60, "ones");

	for (int c = 5; c < 56; c++)
	  for (int b = 4; b < 496; b++)
	    for (int a = 4; a < 496; a++)
	    {
	      
	      E[a][b]=E[a-1][b]-0.278;
	      
	      E[a][b]=E[a+4][b]-0.539;
	      
	      C[a][b]=0.138;
	      C[a+5][b+4]=0.457;
	      
	      float var_a=B[a]/0.239;
	      float var_b=B[a]+0.298;
	      
	      D[a][b]=E[a][b]*B[a];
	      B[a]=E[a-4][b-5]+A[a][b][c]/C[a][b]*D[a][b];
	    }

    return 0;
}