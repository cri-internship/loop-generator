#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(590, 310, "zeros");
	float *C = create_one_dim_float(380, "zeros");
	float ***B = create_three_dim_float(680, 260, 530, "zeros");
	float ***D = create_three_dim_float(450, 200, 250, "zeros");

	for (int b = 5; b < 200; b++)
	  for (int a = 5; a < 378; a++)
	  {
	    
	     A[a][b]=A[a+3][b+1]-0.306;
	    
	     float var_a=C[a]/0.952;
	     C[a]=0.598;
	    
	     B[a][b][a]=B[a+5][b+4][a+1]-A[a][b]+C[a]/D[a][b][a];
	    
	     A[a][b]=0.89;
	    
	     C[a]=D[a][b][a]-A[a][b]+B[a][b][a];
	     A[a][b]=D[a][b][a-2]/0.781+C[a];
	    
	     B[a][b][a]=A[a][b]/B[a][b][a]+C[a]*D[a][b][a];
	     D[a][b][a]=A[a-1][b-5]/C[a]*0.518-B[a][b][a];
	    
	     float var_b=C[a]+0.52;
	     float var_c=C[a+2]+0.808;
	  }

    return 0;
}