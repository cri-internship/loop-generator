#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(240, 750, "random");
	double *B = create_one_dim_double(390, "random");
	double *C = create_one_dim_double(70, "random");
	double *D = create_one_dim_double(360, "random");
	double *A = create_one_dim_double(30, "random");

	for (int c = 3; c < 746; c++)
	  for (int b = 4; b < 240; b++)
	    for (int a = 4; a < 240; a++)
	    {
	      
	      E[a][b]=0.492;
	      E[a-4][b-3]=0.193;
	      
	      double var_a=E[a][b]/0.757;
	      double var_b=E[a][b+4]-0.475;
	    }

    return 0;
}