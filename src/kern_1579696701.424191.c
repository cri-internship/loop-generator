#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(270, 1000, 730, "random");
	int **A = create_two_dim_int(760, 140, "random");

	for (int b = 5; b < 140; b++)
	  for (int a = 5; a < 270; a++)
	  {
	    
	     A[a][b]=A[a-5][b-5]*18;
	    
	     int var_a=B[a][b][a]-50;
	     int var_b=B[a-3][b][a-3]+35;
	    
	     int var_c=A[a][b]-18;
	     int var_d=A[a-2][b-1]+9;
	  }

    return 0;
}