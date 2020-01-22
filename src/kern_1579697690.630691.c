#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(720, "ones");
	int ***B = create_three_dim_int(140, 290, 670, "ones");

	for (int b = 1; b < 720; b++)
	  for (int a = 1; a < 720; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     A[a-1]=B[a][b][a];
	    
	     A[a]=23;
	  }

    return 0;
}