#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(760, 130, "ones");
	int **A = create_two_dim_int(580, 120, "ones");
	int *C = create_one_dim_int(700, "ones");

	for (int d = 5; d < 696; d++)
	  for (int c = 5; c < 696; c++)
	    for (int b = 5; b < 696; b++)
	      for (int a = 5; a < 696; a++)
	      {
	        
	       C[a]=C[a-2]-A[a][b]*B[a][b];
	        
	       C[a]=C[a-5]+A[a][b]/B[a][b];
	        
	       C[a]=C[a+4]/A[a][b];
	      }

    return 0;
}