#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(770, 360, 70, "random");
	float ***A = create_three_dim_float(560, 440, 490, "random");
	float **D = create_two_dim_float(510, 930, "random");
	float *C = create_one_dim_float(70, "random");

	for (int b = 0; b < 359; b++)
	  for (int a = 0; a < 65; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+1][a]/0.092;
	    
	     C[a]=A[a][b][a];
	     C[a+5]=D[a][b];
	  }

    return 0;
}