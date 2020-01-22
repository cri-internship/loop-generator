#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(770, 950, 410, "zeros");
	int ***D = create_three_dim_int(940, 150, 500, "zeros");
	int **A = create_two_dim_int(250, 780, "zeros");
	int *B = create_one_dim_int(340, "zeros");

	for (int c = 2; c < 778; c++)
	  for (int b = 3; b < 245; b++)
	    for (int a = 3; a < 245; a++)
	    {
	      
	      A[a][b]=A[a-2][b-2]+39;
	      
	      B[a]=B[a-3]-C[a][b][c]/D[a][b][c]*43;
	      
	      A[a][b]=A[a+5][b+2]+6/B[a]-D[a][b][c];
	    }

    return 0;
}