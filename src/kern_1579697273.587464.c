#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(150, 110, 990, "random");
	float *D = create_one_dim_float(40, "random");
	float **B = create_two_dim_float(540, 120, "random");
	float ***C = create_three_dim_float(470, 150, 750, "random");
	float *E = create_one_dim_float(600, "random");

	for (int b = 5; b < 150; b++)
	  for (int a = 5; a < 470; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-5][a-5]*A[a][b][a]/E[a]-B[a][b]+D[a];
	  }

    return 0;
}