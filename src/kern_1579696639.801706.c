#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(190, "zeros");
	int ***A = create_three_dim_int(410, 830, 280, "zeros");
	int **C = create_two_dim_int(220, 450, "zeros");

	for (int c = 0; c < 276; c++)
	  for (int b = 0; b < 447; b++)
	    for (int a = 0; a < 186; a++)
	    {
	      
	      B[a]=B[a+4]/17;
	      
	      C[a][b]=B[a];
	      C[a+5][b+3]=B[a]-A[a][b][c];
	      
	      A[a][b][c]=C[a][b];
	      A[a+2][b+2][c+4]=2;
	      
	      C[a][b]=C[a][b]-A[a][b][c]*B[a];
	      B[a]=C[a+5][b+3]-B[a];
	    }

    return 0;
}