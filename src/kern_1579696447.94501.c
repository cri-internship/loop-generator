#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(600, "random");
	float ***D = create_three_dim_float(690, 90, 270, "random");
	float *A = create_one_dim_float(240, "random");
	float *B = create_one_dim_float(200, "random");

	for (int c = 0; c < 269; c++)
	  for (int b = 0; b < 86; b++)
	    for (int a = 0; a < 685; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b+4][c+1]-0.387;
	    }

    return 0;
}