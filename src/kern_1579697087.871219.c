#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(490, 320, 150, "ones");
	double **C = create_two_dim_double(80, 640, "ones");
	double ***B = create_three_dim_double(910, 130, 560, "ones");

	for (int b = 3; b < 130; b++)
	  for (int a = 3; a < 75; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-3][a-2]/C[a][b]+B[a][b][a];
	    
	     B[a][b][a]=B[a-1][b-3][a-3]/0.873;
	    
	     C[a][b]=C[a+5][b]-0.311;
	  }

    return 0;
}