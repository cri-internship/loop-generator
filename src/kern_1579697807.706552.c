#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(920, 770, "ones");
	int *C = create_one_dim_int(570, "ones");
	int *B = create_one_dim_int(570, "ones");

	for (int d = 3; d < 570; d++)
	  for (int c = 3; c < 570; c++)
	    for (int b = 3; b < 570; b++)
	      for (int a = 3; a < 570; a++)
	      {
	        
	       B[a]=B[a-1]*8;
	        
	       B[a]=2;
	        
	       C[a]=B[a]*A[a][b];
	       B[a]=B[a-3]-44/A[a][b];
	      }

    return 0;
}