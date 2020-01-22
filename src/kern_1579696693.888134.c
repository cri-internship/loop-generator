#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(50, 640, "random");
	float **C = create_two_dim_float(260, 470, "random");
	float *B = create_one_dim_float(850, "random");
	float *E = create_one_dim_float(470, "random");
	float *A = create_one_dim_float(150, "random");

	for (int c = 0; c < 466; c++)
	  for (int b = 5; b < 50; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      C[a][b]=C[a][b+4]+D[a][b]*E[a]-B[a]/A[a];
	      
	      D[a][b]=0.842;
	      D[a-5][b]=0.075;
	      
	      E[a]=0.371;
	      E[a+3]=0.851;
	    }

    return 0;
}