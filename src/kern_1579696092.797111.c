#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(920, 600, "ones");
	double ***B = create_three_dim_double(760, 250, 850, "ones");

	for (int c = 0; c < 845; c++)
	  for (int b = 1; b < 248; b++)
	    for (int a = 0; a < 757; a++)
	    {
	      
	      A[a][b]=A[a][b-1]+B[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+2][c+5]/A[a][b];
	      
	      A[a][b]=A[a+3][b]+0.983;
	    }

    return 0;
}