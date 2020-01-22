#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(90, 380, "random");
	int **B = create_two_dim_int(60, 220, "random");
	int ***E = create_three_dim_int(120, 760, 990, "random");
	int ***C = create_three_dim_int(750, 860, 330, "random");
	int *A = create_one_dim_int(950, "random");

	for (int c = 5; c < 330; c++)
	  for (int b = 4; b < 860; b++)
	    for (int a = 3; a < 750; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-4][c-5]/41;
	      
	      A[a]=A[a+3]/14;
	      
	      A[a]=36+C[a][b][c]*B[a][b]/D[a][b];
	    }

    return 0;
}