#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(130, "zeros");
	int *A = create_one_dim_int(310, "zeros");
	int **C = create_two_dim_int(380, 430, "zeros");
	int ***D = create_three_dim_int(740, 950, 60, "zeros");

	for (int c = 0; c < 426; c++)
	  for (int b = 0; b < 128; b++)
	    for (int a = 0; a < 128; a++)
	    {
	      
	      B[a]=B[a+2]*D[a][b][c]/A[a];
	      
	      C[a][b]=B[a]-D[a][b][c];
	      C[a+3][b+1]=B[a];
	      
	      C[a][b]=9;
	      
	      A[a]=C[a][b]*40;
	      C[a][b]=C[a][b]+B[a]-D[a][b][c];
	    }

    return 0;
}