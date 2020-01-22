#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(760, 950, 590, "ones");
	int **B = create_two_dim_int(480, 20, "ones");
	int **C = create_two_dim_int(300, 180, "ones");

	for (int d = 0; d < 180; d++)
	  for (int c = 0; c < 297; c++)
	    for (int b = 0; b < 297; b++)
	      for (int a = 0; a < 297; a++)
	      {
	        
	       C[a][b]=C[a+3][b]*19;
	      }

    return 0;
}