#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(120, "zeros");
	int *A = create_one_dim_int(500, "zeros");
	int ***C = create_three_dim_int(530, 420, 460, "zeros");

	for (int b = 4; b < 420; b++)
	  for (int a = 3; a < 116; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-4][a]-16;
	    
	     B[a]=B[a-3]-C[a][b][a]+A[a];
	    
	     C[a][b][a]=C[a-1][b][a-2]-B[a];
	    
	     A[a]=C[a][b][a]/14;
	     A[a+5]=6;
	    
	     B[a]=B[a]/A[a];
	     C[a][b][a]=B[a+4]/C[a][b][a]*A[a];
	  }

    return 0;
}