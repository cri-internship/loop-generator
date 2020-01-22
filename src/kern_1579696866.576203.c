#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(460, "random");
	int *C = create_one_dim_int(640, "random");
	int **B = create_two_dim_int(880, 120, "random");
	int *D = create_one_dim_int(700, "random");

	for (int d = 2; d < 460; d++)
	  for (int c = 2; c < 460; c++)
	    for (int b = 2; b < 460; b++)
	      for (int a = 2; a < 460; a++)
	      {
	        
	       A[a]=A[a-1]-C[a]/5;
	        
	       C[a]=A[a]*D[a]/B[a][b];
	       C[a+2]=A[a];
	        
	       A[a]=A[a]+C[a]-D[a];
	       C[a]=A[a-2]+B[a][b]/D[a]*50;
	      }

    return 0;
}