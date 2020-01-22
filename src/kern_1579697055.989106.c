#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(920, 360, 840, "random");

	for (int d = 0; d < 838; d++)
	  for (int c = 0; c < 360; c++)
	    for (int b = 0; b < 919; b++)
	      for (int a = 0; a < 919; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b][c+2]*36;
	      }

    return 0;
}