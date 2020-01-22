#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(690, 80, "ones");
	int *A = create_one_dim_int(150, "ones");
	int ***C = create_three_dim_int(520, 130, 690, "ones");

	for (int b = 3; b < 79; b++)
	  for (int a = 2; a < 150; a++)
	  {
	    
	     A[a]=17+C[a][b][a];
	     C[a][b][a]=A[a]*9+C[a][b][a];
	    
	     B[a][b]=B[a+5][b+1]/4;
	    
	     int var_a=C[a][b][a]/12;
	     int var_b=C[a-1][b-3][a-2]*15;
	  }

    return 0;
}