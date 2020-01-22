#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(260, 690, 310, "ones");
	int **C = create_two_dim_int(390, 640, "ones");
	int **B = create_two_dim_int(160, 210, "ones");
	int *D = create_one_dim_int(430, "ones");

	for (int b = 4; b < 210; b++)
	  for (int a = 5; a < 160; a++)
	  {
	    
	     int var_a=D[a]-36;
	     D[a]=6;
	    
	     B[a][b]=32;
	     B[a-5][b-4]=46;
	    
	     B[a][b]=A[a][b][a]/D[a];
	     C[a][b]=A[a-1][b][a-1]*C[a][b]/B[a][b]+B[a][b];
	  }

    return 0;
}