#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(220, 550, 200, "ones");
	int **A = create_two_dim_int(140, 220, "ones");

	for (int b = 3; b < 215; b++)
	  for (int a = 3; a < 136; a++)
	  {
	    
	     A[a][b]=B[a][b][a];
	     A[a-3][b]=B[a][b][a];
	    
	     B[a][b][a]=A[a][b];
	     B[a-2][b-3][a]=A[a][b];
	    
	     int var_a=A[a][b]-16;
	     int var_b=A[a+4][b+5]-26;
	  }

    return 0;
}