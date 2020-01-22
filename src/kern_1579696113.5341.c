#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(80, 370, "zeros");

	for (int b = 3; b < 366; b++)
	  for (int a = 4; a < 77; a++)
	  {
	    
	     A[a][b]=A[a+2][b+4]+37;
	    
	     A[a][b]=A[a+1][b+1]*11;
	    
	     int var_a=A[a][b]-3;
	     int var_b=A[a-4][b-3]-45;
	  }

    return 0;
}