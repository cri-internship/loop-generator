#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(250, 630, "random");
	int *A = create_one_dim_int(350, "random");

	for (int b = 0; b < 625; b++)
	  for (int a = 0; a < 245; a++)
	  {
	    
	     B[a][b]=A[a];
	     B[a+5][b+2]=A[a];
	    
	     int var_a=B[a][b]+2;
	     int var_b=B[a+1][b+5]/11;
	  }

    return 0;
}