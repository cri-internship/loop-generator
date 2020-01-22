#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(200, 300, "ones");

	for (int b = 5; b < 300; b++)
	  for (int a = 4; a < 195; a++)
	  {
	    
	     A[a][b]=A[a-1][b-1]+10;
	    
	     A[a][b]=A[a+5][b]+5;
	    
	     int var_a=A[a][b]*1;
	     int var_b=A[a-4][b-5]/13;
	  }

    return 0;
}