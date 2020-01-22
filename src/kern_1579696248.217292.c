#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(390, "ones");
	int ***B = create_three_dim_int(190, 380, 750, "ones");
	int ***A = create_three_dim_int(850, 840, 810, "ones");

	for (int b = 1; b < 380; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     B[a][b][a]=20;
	     B[a-5][b-1][a-5]=19;
	  }

    return 0;
}