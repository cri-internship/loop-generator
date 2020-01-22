#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(580, 620, 60, "random");
	float ***B = create_three_dim_float(490, 130, 70, "random");

	for (int c = 1; c < 60; c++)
	  for (int b = 1; b < 127; b++)
	    for (int a = 4; a < 487; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-1][c-1]*0.219;
	      
	      B[a][b][c]=A[a][b][c];
	      B[a+3][b+3][c]=A[a][b][c];
	    }

    return 0;
}