#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(590, 30, 730, "ones");
	int **D = create_two_dim_int(310, 870, "ones");
	int **A = create_two_dim_int(130, 650, "ones");
	int **B = create_two_dim_int(770, 220, "ones");

	for (int b = 5; b < 28; b++)
	  for (int a = 3; a < 130; a++)
	  {
	    
	     D[a][b]=D[a-3][b-5]*31;
	    
	     B[a][b]=B[a-1][b-1]/48;
	    
	     C[a][b][a]=46;
	     C[a+4][b+2][a+1]=29;
	    
	     A[a][b]=12;
	     A[a-2][b-2]=25;
	  }

    return 0;
}