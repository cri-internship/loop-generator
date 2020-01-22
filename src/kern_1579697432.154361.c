#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(700, 180, 50, "random");
	int ***B = create_three_dim_int(210, 220, 120, "random");
	int *E = create_one_dim_int(250, "random");
	int *D = create_one_dim_int(80, "random");
	int **A = create_two_dim_int(840, 420, "random");

	for (int d = 0; d < 249; d++)
	  for (int c = 0; c < 249; c++)
	    for (int b = 0; b < 249; b++)
	      for (int a = 0; a < 249; a++)
	      {
	        
	       E[a]=E[a+1]/A[a][b];
	      }

    return 0;
}