#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(980, "ones");
	int *B = create_one_dim_int(90, "ones");
	int **A = create_two_dim_int(210, 840, "ones");
	int **C = create_two_dim_int(570, 120, "ones");

	for (int d = 2; d < 120; d++)
	  for (int c = 0; c < 570; c++)
	    for (int b = 0; b < 570; b++)
	      for (int a = 0; a < 570; a++)
	      {
	        
	       C[a][b]=A[a][b];
	       C[a][b-2]=50-B[a];
	      }

    return 0;
}