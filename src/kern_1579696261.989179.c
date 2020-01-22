#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(760, 700, "zeros");
	float ***C = create_three_dim_float(400, 970, 660, "zeros");
	float ***E = create_three_dim_float(480, 350, 140, "zeros");
	float **B = create_two_dim_float(360, 520, "zeros");
	float ***D = create_three_dim_float(990, 930, 350, "zeros");

	for (int b = 5; b < 695; b++)
	  for (int a = 4; a < 396; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b][a-3]+0.001;
	    
	     C[a][b][a]=C[a+4][b+1][a+4]/E[a][b][a]*D[a][b][a]+B[a][b];
	    
	     A[a][b]=0.126;
	     A[a+3][b+5]=0.451;
	    
	     C[a][b][a]=D[a][b][a]-0.306*A[a][b]+E[a][b][a]/B[a][b];
	     B[a][b]=D[a-4][b-5][a]/C[a][b][a];
	  }

    return 0;
}