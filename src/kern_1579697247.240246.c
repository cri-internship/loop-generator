#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(730, 400, 400, "random");
	int **A = create_two_dim_int(200, 250, "random");

	for (int b = 3; b < 250; b++)
	  for (int a = 2; a < 200; a++)
	  {
	    
	     A[a][b]=9;
	     A[a-2][b-3]=40;
	    
	     B[a][b][a]=A[a][b];
	     B[a+1][b+2][a+2]=A[a][b];
	    
	     B[a][b][a]=B[a][b][a]*14;
	     A[a][b]=B[a+2][b+2][a]+14;
	  }

    return 0;
}