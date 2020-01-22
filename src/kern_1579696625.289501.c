#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(430, 670, 220, "random");
	int **A = create_two_dim_int(180, 500, "random");
	int **C = create_two_dim_int(790, 200, "random");

	for (int b = 2; b < 199; b++)
	  for (int a = 5; a < 175; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-2][a-5]-1;
	    
	     A[a][b]=49;
	     A[a+5][b+1]=0;
	    
	     A[a][b]=25;
	    
	     C[a][b]=17;
	     C[a][b+1]=40;
	  }

    return 0;
}