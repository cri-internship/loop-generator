#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(830, "ones");
	int ***C = create_three_dim_int(60, 730, 440, "ones");
	int *A = create_one_dim_int(570, "ones");

	for (int c = 3; c < 440; c++)
	  for (int b = 0; b < 730; b++)
	    for (int a = 2; a < 60; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b][c-3]*4;
	      
	      A[a]=C[a][b][c]*B[a];
	      A[a-1]=B[a]*C[a][b][c];
	      
	      B[a]=B[a]-A[a];
	      C[a][b][c]=B[a+1]-C[a][b][c]*A[a];
	      
	      A[a]=A[a]-C[a][b][c]/B[a];
	      A[a]=A[a-2]-B[a]*C[a][b][c];
	    }

    return 0;
}