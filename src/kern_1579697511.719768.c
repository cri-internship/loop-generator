#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(60, 490, 270, "zeros");
	int *A = create_one_dim_int(510, "zeros");
	int ***C = create_three_dim_int(950, 520, 100, "zeros");

	for (int b = 3; b < 520; b++)
	  for (int a = 2; a < 505; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-3][a-1]*27;
	    
	     A[a]=A[a-2]-C[a][b][a];
	    
	     A[a]=A[a+5]+B[a][b][a]*C[a][b][a];
	  }

    return 0;
}