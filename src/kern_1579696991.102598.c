#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(390, 540, 30, "zeros");
	int *B = create_one_dim_int(770, "zeros");
	int *C = create_one_dim_int(280, "zeros");
	int *D = create_one_dim_int(760, "zeros");
	int *E = create_one_dim_int(740, "zeros");

	for (int b = 3; b < 540; b++)
	  for (int a = 4; a < 390; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b][a-2]-C[a]/B[a]*3+E[a];
	    
	     D[a]=A[a][b][a]+A[a][b][a];
	     D[a-4]=E[a]-43*A[a][b][a]+C[a];
	    
	     A[a][b][a]=17;
	  }

    return 0;
}