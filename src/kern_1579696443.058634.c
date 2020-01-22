#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(960, "random");
	int ***A = create_three_dim_int(190, 110, 600, "random");
	int *C = create_one_dim_int(320, "random");
	int *B = create_one_dim_int(170, "random");

	for (int d = 3; d < 317; d++)
	  for (int c = 3; c < 317; c++)
	    for (int b = 3; b < 317; b++)
	      for (int a = 3; a < 317; a++)
	      {
	        
	       D[a]=D[a+1]/9;
	        
	       C[a]=C[a+3]-15;
	        
	       D[a]=D[a+3]-B[a];
	        
	       C[a]=19;
	      }

    return 0;
}