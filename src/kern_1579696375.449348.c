#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(220, 830, "random");
	double ***A = create_three_dim_double(210, 130, 520, "random");
	double *B = create_one_dim_double(140, "random");
	double ***C = create_three_dim_double(360, 1000, 210, "random");

	for (int b = 0; b < 1000; b++)
	  for (int a = 4; a < 360; a++)
	  {
	    
	     C[a][b][a]=0.834;
	     C[a-4][b][a-2]=0.39;
	  }

    return 0;
}