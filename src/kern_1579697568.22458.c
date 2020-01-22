#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(680, "ones");
	int ***C = create_three_dim_int(790, 980, 480, "ones");
	int **A = create_two_dim_int(960, 760, "ones");

	for (int b = 1; b < 756; b++)
	  for (int a = 5; a < 680; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-1][a-5]/1;
	    
	     A[a][b]=22;
	     A[a+5][b+4]=B[a];
	    
	     A[a][b]=B[a]+0;
	     C[a][b][a]=B[a-2]+C[a][b][a]*A[a][b];
	  }

    return 0;
}