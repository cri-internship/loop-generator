#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(570, "zeros");
	int **C = create_two_dim_int(920, 680, "zeros");
	int *B = create_one_dim_int(960, "zeros");
	int **A = create_two_dim_int(420, 280, "zeros");

	for (int b = 1; b < 276; b++)
	  for (int a = 5; a < 418; a++)
	  {
	    
	     A[a][b]=A[a][b-1]*31;
	    
	     B[a]=44;
	     float  var_a=B[a]*34;
	    
	     A[a][b]=A[a+2][b+4]+39;
	    
	     D[a]=48;
	     D[a-3]=1;
	    
	     B[a]=23;
	  }

    return 0;
}