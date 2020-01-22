#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(560, 600, 800, "random");
	int ***A = create_three_dim_int(560, 710, 940, "random");

	for (int d = 5; d < 940; d++)
	  for (int c = 4; c < 710; c++)
	    for (int b = 5; b < 560; b++)
	      for (int a = 5; a < 560; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-4][c-5]+B[a][b][c];
	      }

    return 0;
}