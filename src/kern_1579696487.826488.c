#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(80, 670, "ones");

	for (int d = 5; d < 667; d++)
	  for (int c = 0; c < 79; c++)
	    for (int b = 0; b < 79; b++)
	      for (int a = 0; a < 79; a++)
	      {
	        
	       A[a][b]=A[a][b-2]+47;
	        
	       A[a][b]=A[a][b-5]+26;
	      }

    return 0;
}