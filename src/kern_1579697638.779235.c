#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(370, 610, 940, "ones");
	int **B = create_two_dim_int(340, 810, "ones");

	for (int b = 0; b < 606; b++)
	  for (int a = 0; a < 338; a++)
	  {
	    
	     B[a][b]=B[a+2][b+1]+17;
	    
	     B[a][b]=B[a][b+2]-4;
	    
	     A[a][b][a]=A[a+4][b+4][a+1]-12;
	    
	     A[a][b][a]=45;
	  }

    return 0;
}