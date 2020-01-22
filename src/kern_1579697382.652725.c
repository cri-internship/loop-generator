#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(100, "zeros");
	int *D = create_one_dim_int(940, "zeros");
	int ***C = create_three_dim_int(110, 840, 630, "zeros");
	int **A = create_two_dim_int(500, 740, "zeros");

	for (int b = 0; b < 935; b++)
	  for (int a = 0; a < 935; a++)
	  {
	    
	     D[a]=C[a][b][a]-B[a];
	     D[a+5]=A[a][b]-A[a][b];
	  }

    return 0;
}