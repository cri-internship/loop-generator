#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(910, 430, "random");
	double *C = create_one_dim_double(380, "random");
	double ***B = create_three_dim_double(240, 380, 160, "random");

	for (int b = 4; b < 427; b++)
	  for (int a = 4; a < 377; a++)
	  {
	    
	     C[a]=C[a-4]+A[a][b]/B[a][b][a];
	    
	     A[a][b]=0.09;
	     A[a][b-4]=C[a];
	    
	     A[a][b]=0.594;
	    
	     C[a]=C[a]/A[a][b];
	     A[a][b]=C[a+3]/0.714;
	  }

    return 0;
}