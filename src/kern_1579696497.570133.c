#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(530, 950, 370, "ones");
	double ***B = create_three_dim_double(230, 600, 970, "ones");
	double **D = create_two_dim_double(480, 960, "ones");
	double *A = create_one_dim_double(1000, "ones");
	double *C = create_one_dim_double(540, "ones");

	for (int b = 2; b < 596; b++)
	  for (int a = 5; a < 225; a++)
	  {
	    
	     E[a][b][a]=E[a-5][b-2][a]/0.421;
	    
	     D[a][b]=D[a+3][b+4]-C[a];
	    
	     B[a][b][a]=D[a][b]/B[a][b][a]+A[a];
	     A[a]=D[a][b+1]*E[a][b][a]+C[a]-E[a][b][a];
	    
	     double var_a=B[a][b][a]*0.273;
	     double var_b=B[a+2][b+4][a+5]+0.954;
	  }

    return 0;
}