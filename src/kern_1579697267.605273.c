#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(880, 830, "zeros");
	double *A = create_one_dim_double(60, "zeros");
	double *B = create_one_dim_double(500, "zeros");
	double **D = create_two_dim_double(620, 290, "zeros");
	double ***C = create_three_dim_double(420, 800, 430, "zeros");

	for (int b = 4; b < 290; b++)
	  for (int a = 5; a < 420; a++)
	  {
	    
	     B[a]=0.043;
	     float  var_a=B[a]+0.694;
	    
	     D[a][b]=D[a-5][b-3]/B[a]-E[a][b]+C[a][b][a];
	    
	     D[a][b]=D[a-2][b-1]/A[a]*C[a][b][a]+0.073;
	    
	     C[a][b][a]=D[a][b];
	     C[a-5][b-4][a-2]=A[a]*D[a][b]-0.439/B[a];
	  }

    return 0;
}