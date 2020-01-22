#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(220, 820, "ones");
	int ***D = create_three_dim_int(750, 720, 960, "ones");
	int *B = create_one_dim_int(600, "ones");
	int ***C = create_three_dim_int(340, 480, 1000, "ones");

	for (int b = 0; b < 479; b++)
	  for (int a = 0; a < 215; a++)
	  {
	    
	     D[a][b][a]=D[a+1][b+2][a+3]/23;
	    
	     A[a][b]=5;
	     A[a+5][b+4]=41;
	    
	     int var_a=C[a][b][a]-5;
	     int var_b=C[a+2][b+1][a+5]*11;
	  }

    return 0;
}