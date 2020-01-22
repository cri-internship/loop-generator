#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(780, 810, "random");
	int ***B = create_three_dim_int(330, 530, 810, "random");

	for (int b = 4; b < 528; b++)
	  for (int a = 2; a < 327; a++)
	  {
	    
	     A[a][b]=A[a-2][b-4]-B[a][b][a];
	    
	     A[a][b]=A[a-2][b-1]-B[a][b][a];
	    
	     A[a][b]=A[a][b+3]*42;
	    
	     B[a][b][a]=B[a+3][b+2][a+2]-A[a][b];
	  }

    return 0;
}