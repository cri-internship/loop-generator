#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(130, 140, 580, "zeros");
	int *B = create_one_dim_int(420, "zeros");
	int *E = create_one_dim_int(220, "zeros");
	int ***A = create_three_dim_int(210, 600, 910, "zeros");
	int **D = create_two_dim_int(310, 410, "zeros");

	for (int b = 4; b < 140; b++)
	  for (int a = 2; a < 130; a++)
	  {
	    
	     B[a]=B[a-1]*E[a]-D[a][b]+C[a][b][a]/A[a][b][a];
	    
	     C[a][b][a]=C[a-2][b-1][a-1]*47;
	    
	     E[a]=E[a+1]/26;
	    
	     C[a][b][a]=13;
	  }

    return 0;
}