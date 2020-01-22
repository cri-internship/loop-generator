#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(840, "zeros");
	int **C = create_two_dim_int(810, 470, "zeros");
	int ***B = create_three_dim_int(880, 120, 880, "zeros");
	int ***A = create_three_dim_int(40, 760, 790, "zeros");

	for (int c = 1; c < 880; c++)
	  for (int b = 1; b < 120; b++)
	    for (int a = 5; a < 880; a++)
	    {
	      
	      C[a][b]=B[a][b][c]-D[a]+A[a][b][c]*C[a][b];
	      B[a][b][c]=B[a-5][b-1][c-1]+5-C[a][b]/D[a];
	    }

    return 0;
}