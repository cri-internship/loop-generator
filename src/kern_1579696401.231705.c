#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(510, 530, "zeros");

	for (int b = 5; b < 525; b++)
	  for (int a = 4; a < 505; a++)
	  {
	    
	     A[a][b]=A[a-1][b-5]/6;
	    
	     A[a][b]=A[a+5][b+5]*31;
	    
	     A[a][b]=A[a][b+4]+39;
	  }

    return 0;
}