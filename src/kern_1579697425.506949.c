#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(510, "random");
	float ***B = create_three_dim_float(800, 840, 980, "random");
	float ***A = create_three_dim_float(110, 270, 150, "random");

	for (int c = 0; c < 978; c++)
	  for (int b = 0; b < 840; b++)
	    for (int a = 0; a < 508; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b][c+2]-C[a]/A[a][b][c];
	      
	      C[a]=C[a+2]/0.241;
	    }

    return 0;
}