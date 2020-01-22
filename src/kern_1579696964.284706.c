#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(50, 510, 630, "ones");
	float ***B = create_three_dim_float(270, 960, 630, "ones");
	float **C = create_two_dim_float(540, 680, "ones");

	for (int c = 3; c < 677; c++)
	  for (int b = 5; b < 537; b++)
	    for (int a = 5; a < 537; a++)
	    {
	      
	      C[a][b]=C[a-5][b-3]-A[a][b][c];
	      
	      C[a][b]=C[a][b+1]+0.699;
	      
	      C[a][b]=C[a+3][b+2]/B[a][b][c];
	    }

    return 0;
}