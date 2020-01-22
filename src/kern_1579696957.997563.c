#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(20, 390, 240, "ones");
	double *B = create_one_dim_double(510, "ones");

	for (int c = 0; c < 235; c++)
	  for (int b = 0; b < 389; b++)
	    for (int a = 1; a < 15; a++)
	    {
	      
	      B[a]=B[a-1]-0.835;
	      
	      B[a]=B[a+4]/A[a][b][c];
	      
	      B[a]=A[a][b][c]-B[a];
	      A[a][b][c]=A[a+5][b+1][c+5]/B[a];
	    }

    return 0;
}