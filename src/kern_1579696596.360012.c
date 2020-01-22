#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(150, 480, 70, "random");
	int **B = create_two_dim_int(520, 990, "random");
	int **D = create_two_dim_int(490, 910, "random");
	int **A = create_two_dim_int(560, 120, "random");
	int *E = create_one_dim_int(800, "random");

	for (int c = 4; c < 70; c++)
	  for (int b = 2; b < 480; b++)
	    for (int a = 5; a < 150; a++)
	    {
	      
	      B[a][b]=C[a][b][c]/B[a][b]-A[a][b];
	      A[a][b]=C[a-5][b-2][c-4]-3*E[a]/B[a][b];
	    }

    return 0;
}