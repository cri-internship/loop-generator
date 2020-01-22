#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "ones");
	int **D = create_two_dim_int(970, 900, "ones");
	int **C = create_two_dim_int(810, 800, "ones");
	int ***B = create_three_dim_int(130, 400, 380, "ones");
	int ***E = create_three_dim_int(780, 600, 950, "ones");

	for (int c = 0; c < 376; c++)
	  for (int b = 0; b < 397; b++)
	    for (int a = 0; a < 126; a++)
	    {
	      
	      E[a][b][c]=E[a][b][c+1]*B[a][b][c]/A[a];
	      
	      int var_a=A[a]-19;
	      A[a]=13;
	      
	      B[a][b][c]=B[a+4][b+3][c+4]-C[a][b]/D[a][b]*E[a][b][c];
	    }

    return 0;
}