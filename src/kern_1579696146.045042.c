#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(410, "random");
	double ***D = create_three_dim_double(220, 670, 180, "random");
	double **A = create_two_dim_double(200, 930, "random");
	double ***B = create_three_dim_double(590, 490, 230, "random");

	for (int b = 0; b < 408; b++)
	  for (int a = 0; a < 408; a++)
	  {
	    
	     C[a]=C[a+2]-A[a][b]+B[a][b][a];
	  }

    return 0;
}