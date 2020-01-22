#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(710, "random");
	double ***B = create_three_dim_double(420, 90, 770, "random");
	double **A = create_two_dim_double(270, 180, "random");

	for (int b = 0; b < 85; b++)
	  for (int a = 0; a < 416; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+5][a+4]/0.061;
	  }

    return 0;
}