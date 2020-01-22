#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(440, 1000, 400, "random");
	float **A = create_two_dim_float(320, 470, "random");
	float **B = create_two_dim_float(950, 30, "random");
	float *D = create_one_dim_float(650, "random");

	for (int b = 5; b < 470; b++)
	  for (int a = 2; a < 320; a++)
	  {
	    
	     D[a]=D[a-2]-C[a][b][a];
	    
	     D[a]=A[a][b]*D[a]/B[a][b];
	     C[a][b][a]=A[a][b-5]-B[a][b]+C[a][b][a];
	  }

    return 0;
}