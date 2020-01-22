#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(60, 180, 870, "zeros");
	int *C = create_one_dim_int(920, "zeros");
	int **A = create_two_dim_int(80, 90, "zeros");
	int **E = create_two_dim_int(690, 760, "zeros");
	int **B = create_two_dim_int(270, 540, "zeros");

	for (int b = 5; b < 180; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     B[a][b]=B[a-5][b-4]*D[a][b][a];
	    
	     E[a][b]=E[a][b+2]*A[a][b]/C[a]-B[a][b]+9;
	    
	     D[a][b][a]=D[a][b][a]-E[a][b];
	     A[a][b]=D[a-5][b-5][a-1]*B[a][b]/A[a][b];
	  }

    return 0;
}