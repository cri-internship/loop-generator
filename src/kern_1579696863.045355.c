#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(360, 220, "ones");
	float **E = create_two_dim_float(170, 30, "ones");
	float **B = create_two_dim_float(50, 460, "ones");
	float ***D = create_three_dim_float(270, 900, 730, "ones");
	float ***A = create_three_dim_float(630, 440, 720, "ones");

	for (int c = 0; c < 720; c++)
	  for (int b = 0; b < 437; b++)
	    for (int a = 0; a < 627; a++)
	    {
	      
	      A[a][b][c]=0.351;
	      A[a+3][b+3][c]=0.984;
	    }

    return 0;
}