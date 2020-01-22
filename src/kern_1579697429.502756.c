#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(140, "zeros");
	float **E = create_two_dim_float(940, 80, "zeros");
	float ***B = create_three_dim_float(870, 790, 880, "zeros");
	float ***D = create_three_dim_float(350, 240, 960, "zeros");
	float *A = create_one_dim_float(930, "zeros");

	for (int b = 5; b < 78; b++)
	  for (int a = 2; a < 137; a++)
	  {
	    
	     E[a][b]=E[a-2][b-5]+0.694;
	    
	     E[a][b]=A[a]*D[a][b][a]/B[a][b][a];
	    
	     C[a]=E[a][b];
	     C[a+3]=B[a][b][a]*0.114/D[a][b][a];
	    
	     E[a][b]=B[a][b][a]*C[a]+E[a][b]-D[a][b][a]/A[a];
	     D[a][b][a]=B[a+4][b+5][a+5]-0.204;
	  }

    return 0;
}