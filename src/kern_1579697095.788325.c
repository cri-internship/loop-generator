#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(1000, "random");
	int **A = create_two_dim_int(590, 300, "random");

	for (int b = 1; b < 300; b++)
	  for (int a = 0; a < 590; a++)
	  {
	    
	     A[a][b]=B[a];
	     A[a][b-1]=28;
	    
	     int var_a=B[a]+50;
	  }

    return 0;
}