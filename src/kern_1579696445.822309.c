#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(130, "ones");
	int **B = create_two_dim_int(440, 880, "ones");
	int *C = create_one_dim_int(950, "ones");
	int **D = create_two_dim_int(420, 610, "ones");
	int **E = create_two_dim_int(130, 820, "ones");

	for (int d = 3; d < 880; d++)
	  for (int c = 0; c < 440; c++)
	    for (int b = 0; b < 440; b++)
	      for (int a = 0; a < 440; a++)
	      {
	        
	       B[a][b]=B[a][b-3]+34;
	      }

    return 0;
}