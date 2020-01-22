#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(160, 550, "ones");
	double ***D = create_three_dim_double(260, 10, 400, "ones");
	double *C = create_one_dim_double(580, "ones");
	double ***B = create_three_dim_double(100, 370, 680, "ones");

	for (int c = 2; c < 400; c++)
	  for (int b = 4; b < 10; b++)
	    for (int a = 5; a < 158; a++)
	    {
	      
	      C[a]=C[a-5]*0.026;
	      
	      A[a][b]=A[a-5][b-4]-0.444;
	      
	      D[a][b][c]=D[a-1][b-4][c-2]*A[a][b]+C[a]/B[a][b][c];
	      
	      A[a][b]=A[a+2][b+5]/0.17;
	      
	      C[a]=D[a][b][c]+0.226;
	    }

    return 0;
}