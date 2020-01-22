#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(830, 240, 960, "ones");
	double ***C = create_three_dim_double(720, 160, 120, "ones");
	double *B = create_one_dim_double(200, "ones");
	double *D = create_one_dim_double(730, "ones");
	double *E = create_one_dim_double(580, "ones");

	for (int b = 4; b < 160; b++)
	  for (int a = 4; a < 200; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-2][a-4]+0.599;
	    
	     C[a][b][a]=C[a-4][b-4][a-1]/B[a]*D[a];
	    
	     D[a]=D[a+5]/0.533;
	    
	     B[a]=E[a]+A[a][b][a];
	     B[a-2]=0.773/C[a][b][a];
	    
	     E[a]=B[a]/A[a][b][a]+C[a][b][a]*D[a];
	     E[a+4]=B[a]*C[a][b][a]/A[a][b][a];
	  }

    return 0;
}