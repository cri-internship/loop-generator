#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(690, "random");
	double *C = create_one_dim_double(310, "random");
	double ***B = create_three_dim_double(810, 620, 630, "random");

	for (int c = 1; c < 630; c++)
	  for (int b = 3; b < 620; b++)
	    for (int a = 4; a < 310; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-3][c-1]*A[a]-C[a];
	      
	      C[a]=C[a-2]+0.311;
	      
	      C[a]=C[a-3]-B[a][b][c]*A[a];
	      
	      C[a]=C[a-4]*0.702;
	      
	      B[a][b][c]=A[a]*B[a][b][c];
	      C[a]=A[a]+C[a]*B[a][b][c];
	    }

    return 0;
}