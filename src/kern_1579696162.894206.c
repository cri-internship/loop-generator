#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(40, 930, 40, "random");
	int *B = create_one_dim_int(200, "random");
	int *C = create_one_dim_int(360, "random");
	int *A = create_one_dim_int(60, "random");

	for (int b = 2; b < 930; b++)
	  for (int a = 3; a < 40; a++)
	  {
	    
	     A[a]=0;
	     A[a+3]=29;
	    
	     B[a]=C[a];
	     B[a+2]=A[a];
	    
	     C[a]=B[a]+D[a][b][a]-A[a];
	     C[a-3]=A[a]/B[a]-D[a][b][a];
	    
	     int var_a=D[a][b][a]+10;
	     int var_b=D[a][b-2][a-1]*31;
	  }

    return 0;
}