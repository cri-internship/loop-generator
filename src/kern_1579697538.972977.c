#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(340, 850, "ones");
	int **B = create_two_dim_int(600, 500, "ones");

	for (int d = 0; d < 497; d++)
	  for (int c = 0; c < 596; c++)
	    for (int b = 0; b < 596; b++)
	      for (int a = 0; a < 596; a++)
	      {
	        
	       B[a][b]=B[a+2][b+1]-25;
	        
	       B[a][b]=36;
	      }

    return 0;
}