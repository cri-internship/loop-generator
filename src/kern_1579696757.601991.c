#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(40, 70, "ones");
	int **C = create_two_dim_int(940, 660, "ones");
	int *A = create_one_dim_int(450, "ones");

	for (int d = 4; d < 657; d++)
	  for (int c = 4; c < 450; c++)
	    for (int b = 4; b < 450; b++)
	      for (int a = 4; a < 450; a++)
	      {
	        
	       C[a][b]=C[a-4][b-4]*11;
	        
	       A[a]=A[a-2]+B[a][b];
	        
	       C[a][b]=C[a+3][b+3]*25;
	        
	       A[a]=C[a][b]/A[a]*B[a][b];
	       C[a][b]=C[a-4][b-1]/B[a][b];
	      }

    return 0;
}