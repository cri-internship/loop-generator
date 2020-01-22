#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(160, 260, 590, "zeros");
	double *A = create_one_dim_double(490, "zeros");
	double **B = create_two_dim_double(850, 250, "zeros");

	for (int b = 5; b < 250; b++)
	  for (int a = 5; a < 160; a++)
	  {
	    
	     B[a][b]=B[a-5][b-3]*A[a]/C[a][b][a];
	    
	     C[a][b][a]=C[a-1][b-3][a-3]/B[a][b];
	    
	     B[a][b]=0.976;
	  }

    return 0;
}