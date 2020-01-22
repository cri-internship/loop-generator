#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(620, 710, "random");
	float **B = create_two_dim_float(630, 100, "random");

	for (int c = 4; c < 100; c++)
	  for (int b = 4; b < 615; b++)
	    for (int a = 4; a < 615; a++)
	    {
	      
	      A[a][b]=A[a+5][b+1]*B[a][b];
	      
	      B[a][b]=0.498;
	      B[a-4][b-4]=0.143;
	    }

    return 0;
}