#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(630, 740, 730, "ones");
	int **B = create_two_dim_int(870, 30, "ones");

	for (int b = 3; b < 28; b++)
	  for (int a = 1; a < 630; a++)
	  {
	    
	     B[a][b]=B[a][b+2]-38;
	    
	     B[a][b]=A[a][b][a]/42;
	     A[a][b][a]=A[a-1][b-3][a-1]/B[a][b];
	  }

    return 0;
}