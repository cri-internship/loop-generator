#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(850, 400, "ones");
	int ***A = create_three_dim_int(1000, 300, 560, "ones");

	for (int d = 4; d < 400; d++)
	  for (int c = 5; c < 850; c++)
	    for (int b = 5; b < 850; b++)
	      for (int a = 5; a < 850; a++)
	      {
	        
	       B[a][b]=B[a-5][b-4]/42;
	      }

    return 0;
}