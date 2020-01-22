#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(900, 920, 770, "random");
	float **A = create_two_dim_float(540, 470, "random");

	for (int c = 0; c < 769; c++)
	  for (int b = 5; b < 467; b++)
	    for (int a = 4; a < 536; a++)
	    {
	      
	      A[a][b]=A[a-4][b-5]/0.326;
	      
	      A[a][b]=A[a-1][b-5]+0.073;
	      
	      B[a][b][c]=B[a+5][b][c+1]+0.016;
	    }

    return 0;
}