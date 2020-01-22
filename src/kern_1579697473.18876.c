#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(150, 710, 880, "ones");
	float **B = create_two_dim_float(360, 640, "ones");
	float **E = create_two_dim_float(630, 490, "ones");
	float *D = create_one_dim_float(960, "ones");
	float **A = create_two_dim_float(260, 160, "ones");

	for (int b = 2; b < 485; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     B[a][b]=B[a+1][b+2]*0.482;
	    
	     D[a]=D[a+2]*0.899;
	    
	     E[a][b]=0.284;
	     E[a][b+4]=0.278;
	    
	     float var_a=C[a][b][a]+0.566;
	     float var_b=C[a-4][b-2][a-5]+0.509;
	    
	     D[a]=E[a][b]*A[a][b];
	     B[a][b]=E[a+3][b+5]/C[a][b][a]+D[a];
	  }

    return 0;
}