#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(700, 150, 390, "ones");
	float *E = create_one_dim_float(860, "ones");
	float *D = create_one_dim_float(260, "ones");
	float ***B = create_three_dim_float(990, 840, 110, "ones");
	float *C = create_one_dim_float(430, "ones");

	for (int b = 5; b < 150; b++)
	  for (int a = 5; a < 260; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-4][a-2]+0.528;
	    
	     A[a][b][a]=A[a-1][b-5][a-1]*0.372;
	    
	     A[a][b][a]=B[a][b][a];
	    
	     D[a]=A[a][b][a]+E[a]-C[a];
	     D[a-1]=E[a];
	  }

    return 0;
}