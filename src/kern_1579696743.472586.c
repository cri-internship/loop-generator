#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(70, 260, 880, "ones");
	float *E = create_one_dim_float(50, "ones");
	float *D = create_one_dim_float(620, "ones");
	float **A = create_two_dim_float(820, 120, "ones");
	float *B = create_one_dim_float(680, "ones");

	for (int b = 5; b < 260; b++)
	  for (int a = 5; a < 46; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-5][a]/0.239;
	    
	     D[a]=D[a-3]+0.087;
	    
	     B[a]=B[a+4]+C[a][b][a];
	    
	     E[a]=B[a]*D[a];
	     E[a+4]=A[a][b]*A[a][b]-0.419/B[a];
	    
	     B[a]=D[a]+E[a]*E[a]-A[a][b];
	  }

    return 0;
}