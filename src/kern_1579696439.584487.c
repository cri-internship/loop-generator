#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(160, 580, 450, "random");
	int ***A = create_three_dim_int(910, 850, 180, "random");

	for (int b = 0; b < 577; b++)
	  for (int a = 0; a < 158; a++)
	  {
	    
	     A[a][b][a]=A[a+4][b][a]-B[a][b][a];
	    
	     int var_a=B[a][b][a]/19;
	     int var_b=B[a+1][b+3][a+2]-50;
	  }

    return 0;
}