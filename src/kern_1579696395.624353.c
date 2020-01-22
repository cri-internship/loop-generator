#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(130, "ones");
	float *E = create_one_dim_float(170, "ones");
	float ***C = create_three_dim_float(200, 410, 790, "ones");
	float *D = create_one_dim_float(980, "ones");
	float **A = create_two_dim_float(870, 880, "ones");

	for (int b = 5; b < 408; b++)
	  for (int a = 5; a < 130; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-5][a-3]*0.439;
	    
	     B[a]=B[a-4]/0.721;
	    
	     B[a]=B[a-5]/D[a]-C[a][b][a]+E[a];
	    
	     C[a][b][a]=C[a+1][b+2][a+4]*B[a]/E[a]-A[a][b]+B[a];
	    
	     float var_a=E[a]*0.168;
	     float var_b=E[a+4]+0.404;
	  }

    return 0;
}