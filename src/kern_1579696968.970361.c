#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(780, 880, 270, "random");
	int **D = create_two_dim_int(510, 460, "random");
	int **B = create_two_dim_int(100, 510, "random");
	int ***C = create_three_dim_int(510, 60, 930, "random");
	int *E = create_one_dim_int(210, "random");

	for (int c = 1; c < 210; c++)
	  for (int b = 1; b < 210; b++)
	    for (int a = 1; a < 210; a++)
	    {
	      
	      A[a][b][c]=E[a]*B[a][b]/D[a][b];
	      B[a][b]=E[a-1]/A[a][b][c]*C[a][b][c]-D[a][b];
	    }

    return 0;
}