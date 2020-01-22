#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(700, 90, 660, "random");
	int ***B = create_three_dim_int(810, 800, 160, "random");
	int ***A = create_three_dim_int(380, 200, 970, "random");
	int *D = create_one_dim_int(40, "random");

	for (int b = 5; b < 90; b++)
	  for (int a = 5; a < 380; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-5][a-5]-28;
	    
	     A[a][b][a]=17;
	     A[a-5][b-4][a-2]=35;
	  }

    return 0;
}