#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(110, "ones");
	float ***A = create_three_dim_float(50, 620, 440, "ones");
	float ***D = create_three_dim_float(830, 360, 100, "ones");
	float **C = create_two_dim_float(200, 870, "ones");
	float **E = create_two_dim_float(690, 560, "ones");

	for (int b = 5; b < 559; b++)
	  for (int a = 4; a < 110; a++)
	  {
	    
	     B[a]=0.351;
	     float  var_a=B[a]*0.783;
	    
	     C[a][b]=C[a-4][b-5]-B[a]*A[a][b][a]/D[a][b][a]+E[a][b];
	    
	     E[a][b]=C[a][b]*D[a][b][a];
	     E[a-3][b-4]=C[a][b]*D[a][b][a]+B[a];
	    
	     float var_b=E[a][b]-0.729;
	     float var_c=E[a][b+1]*0.918;
	  }

    return 0;
}