#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(160, 170, "zeros");
	float **D = create_two_dim_float(890, 600, "zeros");
	float **B = create_two_dim_float(110, 900, "zeros");
	float ***C = create_three_dim_float(90, 910, 990, "zeros");

	for (int c = 3; c < 170; c++)
	  for (int b = 5; b < 108; b++)
	    for (int a = 5; a < 108; a++)
	    {
	      
	      A[a][b]=A[a][b-3]*B[a][b]/C[a][b][c];
	      
	      D[a][b]=0.141;
	      D[a-1][b-1]=0.284;
	      
	      float var_a=B[a][b]-0.887;
	      float var_b=B[a-5][b-2]-0.456;
	      
	      float var_c=B[a][b]/0.935;
	      float var_d=B[a+2][b+1]*0.233;
	      
	      float var_e=D[a][b]-0.061;
	      float var_f=D[a-4][b-1]-0.418;
	    }

    return 0;
}