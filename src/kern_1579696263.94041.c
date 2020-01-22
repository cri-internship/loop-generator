#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(340, 950, 550, "random");
	int **A = create_two_dim_int(690, 100, "random");
	int *B = create_one_dim_int(300, "random");

	for (int b = 4; b < 96; b++)
	  for (int a = 5; a < 300; a++)
	  {
	    
	     A[a][b]=A[a][b-3]/42;
	    
	     A[a][b]=A[a][b-4]+48-C[a][b][a];
	    
	     A[a][b]=A[a][b-2]*15;
	    
	     B[a]=C[a][b][a]-A[a][b];
	     A[a][b]=C[a-1][b-1][a-5]+B[a];
	    
	     int var_a=B[a]/4;
	     int var_b=B[a-1]*25;
	  }

    return 0;
}