#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(400, 40, "ones");
	double *A = create_one_dim_double(230, "ones");
	double ***D = create_three_dim_double(190, 520, 840, "ones");
	double ***C = create_three_dim_double(250, 980, 930, "ones");

	for (int b = 3; b < 37; b++)
	  for (int a = 5; a < 188; a++)
	  {
	    
	     D[a][b][a]=D[a-5][b-3][a-4]/A[a]*B[a][b];
	    
	     D[a][b][a]=D[a+2][b+3][a]-0.014;
	    
	     B[a][b]=0.316;
	     B[a][b+3]=0.516;
	  }

    return 0;
}