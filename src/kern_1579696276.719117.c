#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(160, 260, 190, "ones");
	int **B = create_two_dim_int(250, 930, "ones");
	int *A = create_one_dim_int(780, "ones");

	for (int b = 3; b < 255; b++)
	  for (int a = 5; a < 155; a++)
	  {
	    
	     B[a][b]=B[a-1][b-3]-30;
	    
	     B[a][b]=B[a-5][b-3]+C[a][b][a]/A[a];
	    
	     C[a][b][a]=C[a+1][b+4][a+3]/B[a][b]-A[a];
	    
	     C[a][b][a]=A[a]*B[a][b];
	  }

    return 0;
}