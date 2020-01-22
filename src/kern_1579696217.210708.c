#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(330, "zeros");
	int **C = create_two_dim_int(510, 790, "zeros");
	int *A = create_one_dim_int(50, "zeros");
	int ***D = create_three_dim_int(440, 690, 400, "zeros");
	int ***B = create_three_dim_int(160, 710, 580, "zeros");

	for (int b = 0; b < 50; b++)
	  for (int a = 0; a < 50; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     A[a]=E[a]*D[a][b][a]+C[a][b]-C[a][b];
	  }

    return 0;
}