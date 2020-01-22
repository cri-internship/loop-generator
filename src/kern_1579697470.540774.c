#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 660, "random");
	double **D = create_two_dim_double(920, 440, "random");
	double ***C = create_three_dim_double(790, 450, 510, "random");
	double *A = create_one_dim_double(830, "random");

	for (int b = 5; b < 446; b++)
	  for (int a = 3; a < 690; a++)
	  {
	    
	     C[a][b][a]=C[a+5][b+4][a+3]*0.756;
	    
	     B[a][b]=D[a][b]+A[a]/C[a][b][a];
	     B[a-3][b-5]=A[a];
	  }

    return 0;
}