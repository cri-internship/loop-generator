#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(480, 920, "ones");
	float **B = create_two_dim_float(540, 180, "ones");
	float *A = create_one_dim_float(590, "ones");
	float ***C = create_three_dim_float(600, 990, 440, "ones");
	float **E = create_two_dim_float(460, 350, "ones");

	for (int b = 4; b < 920; b++)
	  for (int a = 5; a < 480; a++)
	  {
	    
	     D[a][b]=D[a-5][b-4]*0.102;
	    
	     float var_a=A[a]/0.081;
	     A[a]=0.819;
	    
	     A[a]=C[a][b][a]/0.619;
	     B[a][b]=C[a-4][b-3][a-1]*A[a]/D[a][b]-B[a][b];
	  }

    return 0;
}