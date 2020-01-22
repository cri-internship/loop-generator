#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(310, "random");
	float **B = create_two_dim_float(10, 30, "random");
	float *C = create_one_dim_float(510, "random");
	float *D = create_one_dim_float(920, "random");
	float ***E = create_three_dim_float(420, 890, 70, "random");

	for (int c = 4; c < 70; c++)
	  for (int b = 2; b < 890; b++)
	    for (int a = 2; a < 420; a++)
	    {
	      
	      D[a]=D[a+3]*0.84;
	      
	      C[a]=C[a+2]/A[a]+E[a][b][c]-D[a];
	      
	      E[a][b][c]=0.192;
	      E[a-2][b-2][c-4]=0.931;
	    }

    return 0;
}