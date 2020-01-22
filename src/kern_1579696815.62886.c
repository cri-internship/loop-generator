#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(390, 500, "random");
	float *B = create_one_dim_float(730, "random");
	float **E = create_two_dim_float(200, 740, "random");
	float *A = create_one_dim_float(190, "random");
	float ***C = create_three_dim_float(250, 50, 960, "random");

	for (int b = 2; b < 500; b++)
	  for (int a = 0; a < 390; a++)
	  {
	    
	     D[a][b]=D[a][b-2]-0.739;
	  }

    return 0;
}