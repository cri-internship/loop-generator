#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(250, 150, 120, "ones");
	float *E = create_one_dim_float(250, "ones");
	float **B = create_two_dim_float(790, 670, "ones");
	float **D = create_two_dim_float(890, 110, "ones");
	float *C = create_one_dim_float(670, "ones");

	for (int b = 0; b < 106; b++)
	  for (int a = 0; a < 670; a++)
	  {
	    
	     B[a][b]=B[a+1][b+1]/C[a]+A[a][b][a];
	    
	     D[a][b]=0.76;
	     D[a+4][b+4]=0.379;
	    
	     C[a]=B[a][b]-E[a];
	     C[a]=D[a][b]+E[a]/D[a][b];
	    
	     C[a]=D[a][b]-A[a][b][a]+E[a]/C[a];
	     A[a][b][a]=D[a+2][b+4]-0.184;
	  }

    return 0;
}