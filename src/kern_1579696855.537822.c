#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(560, "zeros");
	int *C = create_one_dim_int(670, "zeros");
	int *A = create_one_dim_int(990, "zeros");
	int **E = create_two_dim_int(410, 360, "zeros");
	int ***D = create_three_dim_int(60, 240, 860, "zeros");

	for (int b = 4; b < 990; b++)
	  for (int a = 4; a < 990; a++)
	  {
	    
	     A[a]=A[a-4]/E[a][b]+B[a]-D[a][b][a]*C[a];
	  }

    return 0;
}