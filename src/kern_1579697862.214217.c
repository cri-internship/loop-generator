#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(490, 640, "random");
	int **C = create_two_dim_int(470, 320, "random");
	int ***B = create_three_dim_int(330, 890, 150, "random");

	for (int b = 3; b < 636; b++)
	  for (int a = 5; a < 330; a++)
	  {
	    
	     A[a][b]=A[a-5][b-1]/B[a][b][a]*C[a][b];
	    
	     A[a][b]=A[a+2][b]+B[a][b][a]/C[a][b];
	    
	     A[a][b]=A[a+3][b+4]+11/B[a][b][a];
	    
	     A[a][b]=A[a+4][b+1]-48;
	    
	     B[a][b][a]=44;
	     B[a-3][b-3][a-5]=8;
	  }

    return 0;
}