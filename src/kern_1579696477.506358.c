#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(730, 660, 560, "ones");
	double ***D = create_three_dim_double(380, 620, 790, "ones");
	double ***E = create_three_dim_double(530, 840, 410, "ones");
	double **A = create_two_dim_double(850, 120, "ones");
	double *B = create_one_dim_double(280, "ones");

	for (int b = 0; b < 120; b++)
	  for (int a = 3; a < 280; a++)
	  {
	    
	     B[a]=B[a-3]+0.785;
	    
	     B[a]=A[a][b]-B[a]/C[a][b][a]+E[a][b][a];
	     E[a][b][a]=A[a][b]+D[a][b][a]-B[a];
	  }

    return 0;
}