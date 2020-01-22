#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(740, 930, "random");
	int *A = create_one_dim_int(640, "random");
	int ***C = create_three_dim_int(260, 980, 340, "random");

	for (int c = 3; c < 340; c++)
	  for (int b = 0; b < 980; b++)
	    for (int a = 4; a < 260; a++)
	    {
	      
	      C[a][b][c]=A[a]+B[a][b];
	      A[a]=C[a][b][c];
	      
	      int var_a=C[a][b][c]*43;
	      int var_b=C[a-4][b][c-3]/14;
	    }

    return 0;
}