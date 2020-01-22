#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(800, 300, 890, "random");
	double *B = create_one_dim_double(510, "random");

	for (int c = 2; c < 890; c++)
	  for (int b = 2; b < 297; b++)
	    for (int a = 3; a < 508; a++)
	    {
	      
	      B[a]=B[a-1]*0.149;
	      
	      A[a][b][c]=A[a+5][b+3][c]-B[a];
	      
	      B[a]=0.026;
	      
	      A[a][b][c]=B[a];
	    }

    return 0;
}