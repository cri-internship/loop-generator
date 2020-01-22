#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(930, 780, 170, "ones");
	float **A = create_two_dim_float(790, 770, "ones");
	float **C = create_two_dim_float(880, 990, "ones");

	for (int c = 3; c < 170; c++)
	  for (int b = 0; b < 780; b++)
	    for (int a = 5; a < 925; a++)
	    {
	      
	      B[a][b][c]=B[a+5][b][c]+0.398;
	      
	      B[a][b][c]=A[a][b]-0.052;
	    }

    return 0;
}