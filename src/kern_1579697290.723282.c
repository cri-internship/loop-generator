#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(730, 180, 390, "ones");
	float *B = create_one_dim_float(60, "ones");

	for (int c = 0; c < 390; c++)
	  for (int b = 0; b < 177; b++)
	    for (int a = 5; a < 60; a++)
	    {
	      
	      B[a]=B[a-3]/A[a][b][c];
	      
	      A[a][b][c]=A[a+3][b+3][c]-B[a];
	      
	      B[a]=0.175;
	    }

    return 0;
}