#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(460, "ones");
	int *A = create_one_dim_int(810, "ones");
	int *C = create_one_dim_int(370, "ones");
	int **D = create_two_dim_int(40, 870, "ones");
	int ***B = create_three_dim_int(990, 960, 440, "ones");

	for (int d = 3; d < 870; d++)
	  for (int c = 5; c < 40; c++)
	    for (int b = 5; b < 40; b++)
	      for (int a = 5; a < 40; a++)
	      {
	        
	       D[a][b]=D[a-5][b-3]/1;
	      }

    return 0;
}