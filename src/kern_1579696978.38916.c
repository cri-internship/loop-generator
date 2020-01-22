#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(960, 990, 300, "ones");
	double ***E = create_three_dim_double(960, 380, 150, "ones");
	double ***D = create_three_dim_double(920, 580, 380, "ones");
	double *C = create_one_dim_double(440, "ones");
	double **A = create_two_dim_double(270, 150, "ones");

	for (int b = 4; b < 150; b++)
	  for (int a = 5; a < 270; a++)
	  {
	    
	     B[a][b][a]=B[a][b-4][a-5]/D[a][b][a]*A[a][b]+C[a];
	    
	     A[a][b]=E[a][b][a]-B[a][b][a]+C[a];
	     A[a][b]=0.254*D[a][b][a]-E[a][b][a];
	  }

    return 0;
}