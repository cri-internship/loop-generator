#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(280, "ones");
	double ***D = create_three_dim_double(380, 110, 490, "ones");
	double *C = create_one_dim_double(650, "ones");
	double **A = create_two_dim_double(540, 930, "ones");

	for (int b = 5; b < 927; b++)
	  for (int a = 4; a < 280; a++)
	  {
	    
	     C[a]=C[a-4]*A[a][b]/D[a][b][a];
	    
	     A[a][b]=A[a+3][b+3]+C[a];
	    
	     A[a][b]=B[a];
	    
	     double var_a=B[a]*0.38;
	  }

    return 0;
}