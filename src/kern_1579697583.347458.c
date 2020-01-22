#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(380, 670, "random");
	int **B = create_two_dim_int(20, 250, "random");

	for (int b = 5; b < 246; b++)
	  for (int a = 5; a < 15; a++)
	  {
	    
	     B[a][b]=B[a+5][b+4]+39;
	    
	     B[a][b]=19;
	    
	     A[a][b]=A[a][b]*B[a][b];
	     B[a][b]=A[a-3][b-2]/B[a][b];
	  }

    return 0;
}