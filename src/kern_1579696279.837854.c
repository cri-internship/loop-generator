#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(410, "random");
	float ***A = create_three_dim_float(1000, 840, 340, "random");

	for (int c = 0; c < 339; c++)
	  for (int b = 1; b < 836; b++)
	    for (int a = 4; a < 409; a++)
	    {
	      
	      B[a]=B[a-4]+0.917;
	      
	      A[a][b][c]=A[a-3][b-1][c]-B[a];
	      
	      A[a][b][c]=0.817;
	      
	      B[a]=A[a][b][c];
	    }

    return 0;
}