#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(30, 610, 50, "random");
	double **D = create_two_dim_double(40, 550, "random");
	double *B = create_one_dim_double(880, "random");
	double **C = create_two_dim_double(400, 140, "random");

	for (int b = 0; b < 880; b++)
	  for (int a = 0; a < 880; a++)
	  {
	    
	     double var_a=B[a]*0.447;
	     B[a]=0.613;
	  }

    return 0;
}