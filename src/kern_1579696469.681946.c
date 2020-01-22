#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(150, 440, "zeros");
	double **D = create_two_dim_double(380, 360, "zeros");
	double **B = create_two_dim_double(720, 100, "zeros");
	double ***C = create_three_dim_double(560, 960, 890, "zeros");

	for (int b = 1; b < 957; b++)
	  for (int a = 4; a < 557; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-1][a-1]/0.888;
	    
	     C[a][b][a]=C[a+2][b+2][a+2]+A[a][b]*B[a][b]-D[a][b];
	    
	     C[a][b][a]=C[a+2][b+3][a+3]/0.275;
	  }

    return 0;
}