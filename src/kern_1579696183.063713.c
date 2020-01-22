#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(50, 90, 730, "random");
	double *C = create_one_dim_double(510, "random");
	double **B = create_two_dim_double(40, 50, "random");
	double *E = create_one_dim_double(240, "random");
	double ***A = create_three_dim_double(250, 680, 360, "random");

	for (int b = 0; b < 507; b++)
	  for (int a = 0; a < 507; a++)
	  {
	    
	     C[a]=C[a+3]+B[a][b]/E[a];
	  }

    return 0;
}