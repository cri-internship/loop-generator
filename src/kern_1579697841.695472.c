#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(140, "zeros");
	int ***A = create_three_dim_int(990, 670, 520, "zeros");

	for (int c = 4; c < 519; c++)
	  for (int b = 4; b < 666; b++)
	    for (int a = 5; a < 136; a++)
	    {
	      
	      A[a][b][c]=A[a][b-2][c-4]/17;
	      
	      A[a][b][c]=A[a-4][b-4][c]*28;
	      
	      B[a]=B[a-5]/A[a][b][c];
	      
	      A[a][b][c]=A[a][b+4][c+1]*B[a];
	      
	      A[a][b][c]=A[a+4][b+1][c+1]/B[a];
	      
	      B[a]=A[a][b][c];
	    }

    return 0;
}