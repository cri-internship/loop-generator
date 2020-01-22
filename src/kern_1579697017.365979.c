#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(620, 790, "random");
	int ***C = create_three_dim_int(350, 620, 750, "random");
	int *E = create_one_dim_int(360, "random");
	int *A = create_one_dim_int(580, "random");
	int ***B = create_three_dim_int(950, 190, 720, "random");

	for (int c = 0; c < 716; c++)
	  for (int b = 4; b < 190; b++)
	    for (int a = 2; a < 355; a++)
	    {
	      
	      D[a][b]=D[a-2][b-4]+C[a][b][c];
	      
	      A[a]=A[a+3]+D[a][b]/E[a]-B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b][c+4]-7+E[a];
	      
	      E[a]=E[a+5]*27;
	    }

    return 0;
}