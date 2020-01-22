#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(790, 680, "random");
	int *A = create_one_dim_int(90, "random");

	for (int d = 0; d < 677; d++)
	  for (int c = 3; c < 90; c++)
	    for (int b = 3; b < 90; b++)
	      for (int a = 3; a < 90; a++)
	      {
	        
	       A[a]=A[a-3]+B[a][b];
	        
	       B[a][b]=A[a]+B[a][b];
	        
	       B[a][b]=B[a+4][b+3]/2;
	      }

    return 0;
}