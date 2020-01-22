#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(740, 560, "random");
	int **B = create_two_dim_int(860, 270, "random");

	for (int b = 2; b < 560; b++)
	  for (int a = 5; a < 740; a++)
	  {
	    
	     A[a][b]=A[a][b-1]*31;
	    
	     A[a][b]=A[a-3][b]/B[a][b];
	    
	     A[a][b]=A[a-5][b-2]/37;
	  }

    return 0;
}