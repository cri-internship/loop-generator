#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(630, 560, "ones");
	int ***C = create_three_dim_int(440, 380, 240, "ones");
	int ***B = create_three_dim_int(380, 270, 340, "ones");

	for (int b = 2; b < 266; b++)
	  for (int a = 4; a < 376; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b][a-2]/A[a][b]*1;
	    
	     B[a][b][a]=B[a+4][b+2][a]-C[a][b][a];
	    
	     A[a][b]=A[a+1][b+2]-3;
	    
	     B[a][b][a]=B[a][b+4][a+4]/39;
	    
	     C[a][b][a]=B[a][b][a]/C[a][b][a]+A[a][b];
	     B[a][b][a]=B[a-4][b][a-3]/A[a][b];
	  }

    return 0;
}