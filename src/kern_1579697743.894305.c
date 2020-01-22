#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(10, 10, "random");
	float *C = create_one_dim_float(90, "random");
	float ***B = create_three_dim_float(840, 750, 540, "random");

	for (int b = 5; b < 750; b++)
	  for (int a = 3; a < 90; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-5][a-3]-0.366;
	    
	     A[a][b]=C[a]/B[a][b][a]*0.309;
	     C[a]=C[a-2]*A[a][b];
	  }

    return 0;
}