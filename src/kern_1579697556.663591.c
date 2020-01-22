#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(700, 50, 1000, "ones");
	float *A = create_one_dim_float(560, "ones");
	float ***E = create_three_dim_float(470, 740, 260, "ones");
	float **B = create_two_dim_float(600, 890, "ones");
	float ***D = create_three_dim_float(660, 30, 400, "ones");

	for (int b = 4; b < 30; b++)
	  for (int a = 5; a < 600; a++)
	  {
	    
	     D[a][b][a]=D[a][b-2][a-5]/0.602;
	    
	     C[a][b][a]=C[a-2][b-2][a-5]+E[a][b][a]/A[a]-D[a][b][a];
	    
	     B[a][b]=C[a][b][a];
	     B[a-4][b-4]=E[a][b][a]*A[a]+D[a][b][a]-C[a][b][a];
	    
	     C[a][b][a]=0.257;
	  }

    return 0;
}