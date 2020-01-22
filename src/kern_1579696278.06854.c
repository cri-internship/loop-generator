#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 950, "random");
	int *C = create_one_dim_int(780, "random");
	int **A = create_two_dim_int(540, 350, "random");

	for (int b = 5; b < 345; b++)
	  for (int a = 5; a < 45; a++)
	  {
	    
	     A[a][b]=A[a-5][b-5]/B[a][b];
	    
	     B[a][b]=B[a][b+1]-0;
	    
	     A[a][b]=A[a+4][b+3]*45;
	    
	     B[a][b]=B[a+5][b]-1;
	    
	     int var_a=B[a][b]/36;
	     int var_b=B[a+3][b+2]*6;
	  }

    return 0;
}