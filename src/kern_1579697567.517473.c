#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(320, "ones");
	int **A = create_two_dim_int(170, 910, "ones");

	for (int d = 0; d < 910; d++)
	  for (int c = 4; c < 168; c++)
	    for (int b = 4; b < 168; b++)
	      for (int a = 4; a < 168; a++)
	      {
	        
	       B[a]=B[a-1]/A[a][b];
	        
	       B[a]=36;
	        
	       B[a]=A[a][b]*B[a];
	       A[a][b]=A[a+2][b]+B[a];
	      }

    return 0;
}