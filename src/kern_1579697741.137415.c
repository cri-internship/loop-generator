#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(170, 790, "zeros");
	float ***B = create_three_dim_float(50, 150, 420, "zeros");

	for (int c = 4; c < 420; c++)
	  for (int b = 4; b < 150; b++)
	    for (int a = 4; a < 50; a++)
	    {
	      
	      A[a][b]=A[a+1][b+2]+0.395;
	      
	      A[a][b]=0.134;
	      
	      B[a][b][c]=B[a][b][c]-A[a][b];
	      A[a][b]=B[a-4][b-4][c-4]/A[a][b];
	    }

    return 0;
}