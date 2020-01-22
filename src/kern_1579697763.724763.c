#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(580, 270, "random");
	int **B = create_two_dim_int(310, 950, "random");

	for (int d = 5; d < 266; d++)
	  for (int c = 0; c < 307; c++)
	    for (int b = 0; b < 307; b++)
	      for (int a = 0; a < 307; a++)
	      {
	        
	       B[a][b]=B[a][b-5]/A[a][b];
	        
	       A[a][b]=A[a+2][b+3]/22;
	        
	       A[a][b]=46;
	        
	       B[a][b]=A[a][b];
	      }

    return 0;
}