#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(980, 330, 900, "random");

	for (int d = 0; d < 900; d++)
	  for (int c = 0; c < 328; c++)
	    for (int b = 0; b < 978; b++)
	      for (int a = 0; a < 978; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+2][c]+0.723;
	      }

    return 0;
}