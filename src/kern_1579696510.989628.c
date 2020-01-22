#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(790, 510, 760, "random");
	int *B = create_one_dim_int(30, "random");

	for (int b = 4; b < 508; b++)
	  for (int a = 4; a < 30; a++)
	  {
	    
	     B[a]=B[a-2]+A[a][b][a];
	    
	     A[a][b][a]=45;
	     A[a-2][b-4][a-4]=B[a];
	    
	     int var_a=A[a][b][a]*6;
	     int var_b=A[a+1][b+2][a+4]*5;
	  }

    return 0;
}