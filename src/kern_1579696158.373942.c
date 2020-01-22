#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(170, 540, 470, "random");
	double *A = create_one_dim_double(860, "random");
	double *C = create_one_dim_double(660, "random");

	for (int c = 0; c < 465; c++)
	  for (int b = 3; b < 538; b++)
	    for (int a = 5; a < 167; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-3][c]*C[a]-A[a];
	      
	      C[a]=C[a-2]+0.924;
	      
	      B[a][b][c]=B[a+3][b+2][c+5]*0.561;
	      
	      C[a]=C[a+2]+0.259;
	    }

    return 0;
}