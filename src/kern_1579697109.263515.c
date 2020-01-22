#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(110, 460, "zeros");
	double ***A = create_three_dim_double(650, 760, 170, "zeros");
	double *B = create_one_dim_double(510, "zeros");
	double ***D = create_three_dim_double(740, 450, 90, "zeros");

	for (int c = 5; c < 90; c++)
	  for (int b = 5; b < 450; b++)
	    for (int a = 4; a < 110; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-2][c-5]+0.195;
	      
	      C[a][b]=B[a];
	      C[a-4][b-1]=0.64-D[a][b][c];
	      
	      D[a][b][c]=D[a][b][c]/C[a][b];
	      C[a][b]=D[a][b-5][c-2]+A[a][b][c]/B[a];
	    }

    return 0;
}