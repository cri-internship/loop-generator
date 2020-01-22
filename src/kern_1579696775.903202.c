#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(760, 430, "ones");
	int *C = create_one_dim_int(280, "ones");
	int ***A = create_three_dim_int(160, 10, 930, "ones");

	for (int b = 1; b < 430; b++)
	  for (int a = 4; a < 276; a++)
	  {
	    
	     B[a][b]=B[a-2][b]*24;
	    
	     C[a]=C[a+4]*23;
	    
	     B[a][b]=C[a]+A[a][b][a];
	    
	     int var_a=B[a][b]*1;
	     int var_b=B[a+3][b]*45;
	  }

    return 0;
}