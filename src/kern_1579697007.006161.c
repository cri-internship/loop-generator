#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(400, "ones");
	int ***C = create_three_dim_int(220, 560, 730, "ones");
	int ***A = create_three_dim_int(210, 970, 770, "ones");

	for (int b = 3; b < 557; b++)
	  for (int a = 4; a < 217; a++)
	  {
	    
	     B[a]=9;
	     B[a-2]=13;
	    
	     C[a][b][a]=A[a][b][a];
	     C[a+1][b+3][a+3]=B[a]/B[a];
	    
	     C[a][b][a]=A[a][b][a];
	  }

    return 0;
}