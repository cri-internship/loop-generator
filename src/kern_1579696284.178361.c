#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(230, 570, "zeros");
	int *B = create_one_dim_int(300, "zeros");

	for (int b = 4; b < 570; b++)
	  for (int a = 5; a < 230; a++)
	  {
	    
	     A[a][b]=A[a-5][b-4]*6;
	    
	     B[a]=B[a-3]/18;
	    
	     B[a]=B[a+1]-27;
	  }

    return 0;
}