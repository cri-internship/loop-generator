#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(180, 510, 210, "ones");
	double ***B = create_three_dim_double(540, 40, 140, "ones");

	for (int d = 0; d < 138; d++)
	  for (int c = 0; c < 38; c++)
	    for (int b = 0; b < 536; b++)
	      for (int a = 0; a < 536; a++)
	      {
	        
	       B[a][b][c]=0.818;
	       B[a+4][b+2][c+2]=0.074;
	      }

    return 0;
}