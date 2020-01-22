#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(650, 310, "zeros");
	int **B = create_two_dim_int(450, 470, "zeros");
	int ***C = create_three_dim_int(450, 990, 720, "zeros");

	for (int c = 1; c < 720; c++)
	  for (int b = 5; b < 310; b++)
	    for (int a = 2; a < 445; a++)
	    {
	      
	      A[a][b]=A[a][b-4]/18;
	      
	      C[a][b][c]=C[a-1][b-4][c-1]/8;
	      
	      A[a][b]=A[a-2][b-5]+42;
	      
	      B[a][b]=C[a][b][c];
	      B[a+5][b+3]=C[a][b][c];
	    }

    return 0;
}