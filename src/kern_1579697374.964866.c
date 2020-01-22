#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(280, 550, 330, "zeros");
	float *D = create_one_dim_float(320, "zeros");
	float **B = create_two_dim_float(730, 410, "zeros");
	float ***C = create_three_dim_float(760, 400, 910, "zeros");
	float **A = create_two_dim_float(710, 390, "zeros");

	for (int b = 5; b < 386; b++)
	  for (int a = 4; a < 280; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-5][a-4]-0.166;
	    
	     A[a][b]=A[a+4][b+4]/0.694;
	    
	     A[a][b]=A[a+3][b+3]-E[a][b][a]*C[a][b][a];
	    
	     A[a][b]=A[a+5][b+1]-0.025;
	    
	     E[a][b][a]=D[a]-A[a][b];
	     E[a-2][b-1][a]=0.881;
	  }

    return 0;
}