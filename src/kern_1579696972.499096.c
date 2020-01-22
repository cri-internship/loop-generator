#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(790, "random");
	float *C = create_one_dim_float(950, "random");
	float ***A = create_three_dim_float(120, 280, 100, "random");
	float ***E = create_three_dim_float(300, 310, 470, "random");
	float ***B = create_three_dim_float(660, 960, 340, "random");

	for (int b = 2; b < 280; b++)
	  for (int a = 3; a < 120; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-2][a]*E[a][b][a]+D[a];
	    
	     B[a][b][a]=B[a][b+4][a+4]+0.154;
	    
	     B[a][b][a]=0.825;
	    
	     D[a]=C[a]/0.313-B[a][b][a]*B[a][b][a];
	     B[a][b][a]=C[a+3]/A[a][b][a]+E[a][b][a]-D[a];
	    
	     E[a][b][a]=A[a][b][a]+C[a]*E[a][b][a]/D[a]-B[a][b][a];
	     C[a]=A[a-3][b-2][a-3]+B[a][b][a]/C[a];
	  }

    return 0;
}