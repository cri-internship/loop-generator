#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(60, 640, 460, "zeros");
	double ***A = create_three_dim_double(840, 560, 520, "zeros");
	double ***C = create_three_dim_double(770, 380, 510, "zeros");

	for (int d = 3; d < 510; d++)
	  for (int c = 4; c < 380; c++)
	    for (int b = 0; b < 770; b++)
	      for (int a = 0; a < 770; a++)
	      {
	        
	       C[a][b][c]=C[a][b-4][c-3]+0.623;
	      }

    return 0;
}