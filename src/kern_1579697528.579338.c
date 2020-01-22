#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(420, 440, "ones");
	int **B = create_two_dim_int(580, 710, "ones");

	for (int d = 0; d < 435; d++)
	  for (int c = 0; c < 419; c++)
	    for (int b = 0; b < 419; b++)
	      for (int a = 0; a < 419; a++)
	      {
	        
	       A[a][b]=B[a][b];
	       A[a][b+5]=26;
	        
	       B[a][b]=A[a][b]/B[a][b];
	       A[a][b]=A[a+1][b]*B[a][b];
	      }

    return 0;
}