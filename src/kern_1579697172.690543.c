#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(390, 20, 290, "ones");
	float **C = create_two_dim_float(870, 260, "ones");
	float *D = create_one_dim_float(400, "ones");
	float ***E = create_three_dim_float(200, 430, 120, "ones");
	float **B = create_two_dim_float(980, 750, "ones");

	for (int b = 5; b < 260; b++)
	  for (int a = 4; a < 200; a++)
	  {
	    
	     E[a][b][a]=E[a][b][a-2]+B[a][b]-C[a][b];
	    
	     B[a][b]=0.5;
	     B[a-1][b-5]=0.755;
	    
	     D[a]=E[a][b][a]/A[a][b][a]-A[a][b][a]*B[a][b];
	     D[a-4]=A[a][b][a]/C[a][b]+B[a][b]-E[a][b][a];
	    
	     float var_a=C[a][b]*0.319;
	     float var_b=C[a-3][b-3]*0.676;
	  }

    return 0;
}