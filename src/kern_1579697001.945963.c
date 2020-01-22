#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(690, "ones");
	double *C = create_one_dim_double(680, "ones");
	double *B = create_one_dim_double(550, "ones");
	double ***A = create_three_dim_double(650, 50, 600, "ones");
	double ***D = create_three_dim_double(640, 330, 630, "ones");

	for (int c = 2; c < 600; c++)
	  for (int b = 5; b < 50; b++)
	    for (int a = 5; a < 550; a++)
	    {
	      
	      C[a]=C[a-3]+0.805;
	      
	      D[a][b][c]=D[a-3][b-5][c-2]/0.212;
	      
	      B[a]=B[a-1]/A[a][b][c]-E[a]*C[a];
	      
	      A[a][b][c]=0.194;
	      A[a-5][b-3][c-1]=0.257;
	    }

    return 0;
}