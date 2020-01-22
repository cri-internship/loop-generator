#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(200, "zeros");
	int **A = create_two_dim_int(660, 990, "zeros");

	for (int b = 4; b < 990; b++)
	  for (int a = 4; a < 198; a++)
	  {
	    
	     A[a][b]=A[a-4][b-4]/B[a];
	    
	     A[a][b]=B[a];
	    
	     B[a]=33;
	     B[a+1]=43;
	    
	     A[a][b]=B[a]/A[a][b];
	     B[a]=B[a-2]-A[a][b];
	    
	     int var_c=B[a]/8;
	     int var_d=B[a+2]-21;
	  }

    return 0;
}