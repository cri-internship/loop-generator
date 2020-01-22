#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(590, 140, "random");
	int ***A = create_three_dim_int(70, 260, 160, "random");
	int **D = create_two_dim_int(640, 280, "random");
	int *C = create_one_dim_int(830, "random");
	int **E = create_two_dim_int(70, 630, "random");

	for (int d = 3; d < 830; d++)
	  for (int c = 3; c < 830; c++)
	    for (int b = 3; b < 830; b++)
	      for (int a = 3; a < 830; a++)
	      {
	        
	       C[a]=C[a-3]+3/E[a][b];
	      }

    return 0;
}