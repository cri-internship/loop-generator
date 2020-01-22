#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(690, "zeros");
	double ***B = create_three_dim_double(920, 580, 900, "zeros");
	double *C = create_one_dim_double(680, "zeros");

	for (int c = 3; c < 896; c++)
	  for (int b = 5; b < 580; b++)
	    for (int a = 3; a < 686; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-5][c-3]*0.194;
	      
	      A[a]=A[a+4]+C[a];
	      
	      B[a][b][c]=0.086;
	      
	      A[a]=0.433;
	    }

    return 0;
}