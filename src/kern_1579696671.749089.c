#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(920, 360, "random");
	int ***A = create_three_dim_int(20, 870, 620, "random");

	for (int b = 0; b < 866; b++)
	  for (int a = 0; a < 15; a++)
	  {
	    
	     A[a][b][a]=A[a+5][b+4][a+5]/22;
	    
	     A[a][b][a]=25;
	  }

    return 0;
}