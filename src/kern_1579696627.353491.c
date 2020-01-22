#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(380, "ones");
	int **D = create_two_dim_int(90, 940, "ones");
	int ***A = create_three_dim_int(420, 590, 750, "ones");
	int *B = create_one_dim_int(180, "ones");

	for (int d = 5; d < 940; d++)
	  for (int c = 4; c < 90; c++)
	    for (int b = 4; b < 90; b++)
	      for (int a = 4; a < 90; a++)
	      {
	        
	       D[a][b]=D[a-4][b-1]/0;
	        
	       B[a]=39;
	       B[a]=16;
	        
	       A[a][b][c]=D[a][b]/A[a][b][c]-B[a]+8;
	       B[a]=D[a][b-5]-C[a];
	      }

    return 0;
}