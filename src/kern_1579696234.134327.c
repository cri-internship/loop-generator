#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(480, "zeros");
	double ***D = create_three_dim_double(110, 810, 960, "zeros");
	double **B = create_two_dim_double(500, 480, "zeros");
	double ***A = create_three_dim_double(710, 600, 880, "zeros");

	for (int b = 5; b < 478; b++)
	  for (int a = 3; a < 110; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-5][a-3]+0.647;
	    
	     C[a]=B[a][b]-A[a][b][a]+0.223;
	     C[a]=A[a][b][a]*B[a][b];
	    
	     D[a][b][a]=B[a][b]+C[a]-D[a][b][a];
	     B[a][b]=B[a+3][b+2]/C[a];
	  }

    return 0;
}