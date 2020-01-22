#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(270, 380, 730, "zeros");
	int ***C = create_three_dim_int(600, 120, 500, "zeros");
	int *B = create_one_dim_int(730, "zeros");
	int **A = create_two_dim_int(80, 170, "zeros");

	for (int b = 1; b < 120; b++)
	  for (int a = 5; a < 267; a++)
	  {
	    
	     D[a][b][a]=D[a+3][b+5][a+2]*17;
	    
	     C[a][b][a]=A[a][b]-D[a][b][a]/B[a];
	     C[a-2][b-1][a-5]=35*D[a][b][a]/B[a];
	  }

    return 0;
}