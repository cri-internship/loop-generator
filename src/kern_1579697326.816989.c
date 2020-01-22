#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(110, "zeros");
	int **D = create_two_dim_int(200, 710, "zeros");
	int ***C = create_three_dim_int(500, 700, 110, "zeros");
	int *A = create_one_dim_int(90, "zeros");

	for (int b = 5; b < 90; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     D[a][b]=A[a]-C[a][b][a]*B[a]+4;
	     C[a][b][a]=A[a-5]/0-B[a];
	  }

    return 0;
}