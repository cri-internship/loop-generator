#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(570, "ones");
	double ***C = create_three_dim_double(180, 70, 40, "ones");
	double **D = create_two_dim_double(300, 440, "ones");
	double ***E = create_three_dim_double(800, 30, 630, "ones");
	double *B = create_one_dim_double(240, "ones");

	for (int b = 3; b < 70; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     A[a]=A[a-2]+C[a][b][a]-D[a][b]/B[a];
	    
	     B[a]=B[a-1]/0.924;
	    
	     C[a][b][a]=C[a-4][b-3][a-4]-0.285;
	    
	     A[a]=A[a+1]/E[a][b][a]+E[a][b][a]*0.161;
	    
	     B[a]=A[a]+A[a]*E[a][b][a]-C[a][b][a];
	  }

    return 0;
}