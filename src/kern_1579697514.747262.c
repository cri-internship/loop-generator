#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(210, 250, "random");
	int *A = create_one_dim_int(840, "random");

	for (int d = 0; d < 249; d++)
	  for (int c = 0; c < 207; c++)
	    for (int b = 0; b < 207; b++)
	      for (int a = 0; a < 207; a++)
	      {
	        
	       B[a][b]=B[a+3][b+1]-43;
	        
	       B[a][b]=A[a];
	      }

    return 0;
}