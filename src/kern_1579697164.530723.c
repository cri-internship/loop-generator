#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(650, "ones");
	double **C = create_two_dim_double(540, 600, "ones");
	double ***B = create_three_dim_double(270, 800, 710, "ones");
	double ***E = create_three_dim_double(220, 60, 390, "ones");
	double ***D = create_three_dim_double(710, 120, 880, "ones");

	for (int b = 3; b < 600; b++)
	  for (int a = 1; a < 538; a++)
	  {
	    
	     A[a]=A[a+1]*0.549;
	    
	     C[a][b]=C[a+2][b]/B[a][b][a]-E[a][b][a];
	    
	     C[a][b]=0.202;
	  }

    return 0;
}