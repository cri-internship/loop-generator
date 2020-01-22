#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(530, 760, 780, "ones");
	int *B = create_one_dim_int(470, "ones");

	for (int b = 4; b < 760; b++)
	  for (int a = 3; a < 467; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-4][a-3]*24;
	    
	     B[a]=B[a-1]+38;
	    
	     A[a][b][a]=A[a][b-3][a-1]-B[a];
	    
	     B[a]=B[a+3]+A[a][b][a];
	  }

    return 0;
}