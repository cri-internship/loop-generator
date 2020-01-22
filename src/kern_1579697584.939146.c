#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(930, 750, 760, "random");
	int **A = create_two_dim_int(400, 10, "random");

	for (int b = 4; b < 8; b++)
	  for (int a = 4; a < 395; a++)
	  {
	    
	     A[a][b]=A[a-1][b-4]+B[a][b][a];
	    
	     A[a][b]=A[a-4][b-1]*B[a][b][a];
	    
	     A[a][b]=A[a-2][b-4]*21;
	    
	     B[a][b][a]=B[a][b][a]-A[a][b];
	     A[a][b]=B[a+1][b+3][a+4]*27;
	    
	     int var_a=A[a][b]/34;
	     int var_b=A[a+5][b+2]+24;
	  }

    return 0;
}