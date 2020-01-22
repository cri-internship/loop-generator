#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(890, 590, 810, "random");
	int *A = create_one_dim_int(930, "random");
	int *B = create_one_dim_int(250, "random");
	int ***D = create_three_dim_int(420, 380, 20, "random");
	int *C = create_one_dim_int(160, "random");

	for (int d = 2; d < 810; d++)
	  for (int c = 1; c < 590; c++)
	    for (int b = 1; b < 890; b++)
	      for (int a = 1; a < 890; a++)
	      {
	        
	       E[a][b][c]=E[a-1][b-1][c-2]/10;
	      }

    return 0;
}