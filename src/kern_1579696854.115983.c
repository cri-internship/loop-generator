#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(810, 790, 660, "zeros");
	int *B = create_one_dim_int(440, "zeros");
	int *D = create_one_dim_int(150, "zeros");
	int ***C = create_three_dim_int(70, 60, 120, "zeros");
	int **A = create_two_dim_int(360, 410, "zeros");

	for (int c = 0; c < 440; c++)
	  for (int b = 0; b < 440; b++)
	    for (int a = 0; a < 440; a++)
	    {
	      
	      E[a][b][c]=B[a]-C[a][b][c]*A[a][b]/E[a][b][c];
	      C[a][b][c]=B[a]/D[a]*E[a][b][c]-48;
	    }

    return 0;
}