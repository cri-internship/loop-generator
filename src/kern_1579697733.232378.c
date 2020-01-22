#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(930, 40, 310, "random");
	float **A = create_two_dim_float(920, 600, "random");

	for (int c = 4; c < 310; c++)
	  for (int b = 3; b < 40; b++)
	    for (int a = 3; a < 915; a++)
	    {
	      
	      B[a][b][c]=A[a][b];
	      B[a-3][b-3][c-4]=A[a][b];
	      
	      B[a][b][c]=A[a][b]*B[a][b][c];
	      A[a][b]=A[a+5][b+5]*0.159;
	    }

    return 0;
}