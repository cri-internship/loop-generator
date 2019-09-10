#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(50, 50, "ones");
	float *A = create_one_dim_float(100, "ones");
	float ***C = create_three_dim_float(50, 50, 50, "ones");

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 45; b++)
	    for (int a = 1; a < 48; a++)
	    {
	      
	C[a][b][c]=0.25401;
	      
	float  var_a=C[a][b][c]*0.14561;
	      
	      A[a]=A[a-1]*0.70073;
	      
	      float var_b=C[a][b][c]-0.45714;
	      C[a][b][c]=0.88477;
	      
	      A[a]=A[a+1]-0.15982;
	      
	      C[a][b][c]=0.75868;
	      C[a][b][c]=0.04778;
	      
	      B[a][b+2]=0.50736;
	      B[a][b+2]=0.93726;
	      
	      float var_c=C[a][b][c]/0.35187;
	      float var_d=C[a][b][c]/0.94293;
	      
	      float var_e=A[a-1]+0.18177;
	      float var_f=A[a-1]*0.70171;
	    }

    return 0;
}