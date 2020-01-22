#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(640, 790, 640, "ones");
	double ***D = create_three_dim_double(460, 210, 190, "ones");
	double **B = create_two_dim_double(290, 820, "ones");
	double *A = create_one_dim_double(260, "ones");
	double **E = create_two_dim_double(470, 150, "ones");

	for (int b = 0; b < 207; b++)
	  for (int a = 1; a < 260; a++)
	  {
	    
	     D[a][b][a]=D[a+2][b+3][a+1]/0.011;
	    
	     E[a][b]=A[a]/B[a][b];
	     A[a]=A[a-1]/D[a][b][a]+C[a][b][a];
	  }

    return 0;
}