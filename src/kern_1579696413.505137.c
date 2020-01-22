#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(800, "random");
	float **D = create_two_dim_float(1000, 470, "random");
	float ***B = create_three_dim_float(930, 560, 880, "random");
	float ***C = create_three_dim_float(280, 200, 650, "random");

	for (int b = 0; b < 199; b++)
	  for (int a = 0; a < 275; a++)
	  {
	    
	     C[a][b][a]=B[a][b][a]+D[a][b]/0.046;
	     C[a+5][b+1][a]=A[a]+B[a][b][a];
	  }

    return 0;
}