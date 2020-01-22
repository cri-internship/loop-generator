#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(210, "ones");
	double ***A = create_three_dim_double(710, 400, 160, "ones");

	for (int c = 3; c < 158; c++)
	  for (int b = 3; b < 400; b++)
	    for (int a = 5; a < 206; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c-3]/0.4;
	      
	      B[a]=A[a][b][c];
	      B[a]=A[a][b][c];
	      
	      B[a]=A[a][b][c]+B[a];
	      A[a][b][c]=A[a+4][b][c+2]-B[a];
	    }

    return 0;
}