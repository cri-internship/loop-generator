#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(940, 270, 460, "ones");
	int *C = create_one_dim_int(320, "ones");
	int **A = create_two_dim_int(100, 730, "ones");

	for (int b = 4; b < 269; b++)
	  for (int a = 3; a < 98; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-4][a-3]-17;
	    
	     A[a][b]=15;
	     A[a+2][b+5]=16;
	    
	     B[a][b][a]=A[a][b];
	  }

    return 0;
}