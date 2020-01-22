#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(150, 610, "ones");
	int **B = create_two_dim_int(950, 420, "ones");
	int *C = create_one_dim_int(660, "ones");
	int ***D = create_three_dim_int(380, 570, 900, "ones");

	for (int b = 0; b < 415; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     C[a]=C[a-1]+D[a][b][a];
	    
	     C[a]=C[a-5]/17;
	    
	     A[a][b]=A[a][b+1]*39;
	    
	     B[a][b]=B[a+5][b+5]-17;
	    
	     D[a][b][a]=D[a+5][b+1][a+2]*C[a]+A[a][b];
	  }

    return 0;
}