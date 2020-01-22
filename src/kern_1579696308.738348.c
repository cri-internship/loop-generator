#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(140, 410, 270, "random");
	float *A = create_one_dim_float(510, "random");

	for (int c = 4; c < 510; c++)
	  for (int b = 4; b < 510; b++)
	    for (int a = 4; a < 510; a++)
	    {
	      
	      A[a]=0.907;
	      A[a-4]=0.285;
	      
	      B[a][b][c]=A[a]+B[a][b][c];
	      A[a]=A[a]/B[a][b][c];
	    }

    return 0;
}