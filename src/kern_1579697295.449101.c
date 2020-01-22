#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(30, 430, "random");
	int *A = create_one_dim_int(210, "random");
	int **B = create_two_dim_int(440, 350, "random");

	for (int d = 0; d < 350; d++)
	  for (int c = 5; c < 440; c++)
	    for (int b = 5; b < 440; b++)
	      for (int a = 5; a < 440; a++)
	      {
	        
	       B[a][b]=B[a-5][b]+49;
	      }

    return 0;
}