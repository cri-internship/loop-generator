#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(920, "random");
	double ***B = create_three_dim_double(60, 10, 770, "random");

	for (int c = 2; c < 770; c++)
	  for (int b = 2; b < 10; b++)
	    for (int a = 3; a < 60; a++)
	    {
	      
	      A[a]=A[a-1]+0.628;
	      
	      A[a]=A[a-3]-B[a][b][c];
	      
	      B[a][b][c]=0.617;
	      B[a-1][b-2][c-2]=0.15;
	    }

    return 0;
}