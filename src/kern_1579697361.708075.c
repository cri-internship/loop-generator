#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(630, 50, "zeros");
	int *B = create_one_dim_int(240, "zeros");

	for (int d = 0; d < 48; d++)
	  for (int c = 5; c < 235; c++)
	    for (int b = 5; b < 235; b++)
	      for (int a = 5; a < 235; a++)
	      {
	        
	       B[a]=B[a+5]+10;
	        
	       B[a]=A[a][b];
	        
	       A[a][b]=3;
	       A[a+3][b+2]=23;
	        
	       A[a][b]=B[a];
	      }

    return 0;
}