#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(280, "random");
	float *E = create_one_dim_float(890, "random");
	float ***D = create_three_dim_float(850, 60, 120, "random");
	float *B = create_one_dim_float(110, "random");
	float *C = create_one_dim_float(50, "random");

	for (int c = 4; c < 49; c++)
	  for (int b = 4; b < 49; b++)
	    for (int a = 4; a < 49; a++)
	    {
	      
	      B[a]=B[a-4]*E[a]+D[a][b][c]-0.235;
	      
	      C[a]=C[a+1]-0.304;
	    }

    return 0;
}