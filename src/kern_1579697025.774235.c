#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(360, 260, 670, "ones");
	float ***B = create_three_dim_float(160, 240, 480, "ones");
	float **E = create_two_dim_float(110, 550, "ones");
	float ***A = create_three_dim_float(520, 610, 720, "ones");
	float *D = create_one_dim_float(480, "ones");

	for (int b = 4; b < 240; b++)
	  for (int a = 4; a < 160; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-4][a]+0.083;
	    
	     C[a][b][a]=C[a+1][b+1][a]-D[a]*A[a][b][a];
	    
	     float var_a=A[a][b][a]*0.347;
	     float var_b=A[a+1][b+1][a+4]*0.01;
	  }

    return 0;
}