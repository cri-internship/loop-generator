#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(200, "ones");
	int **A = create_two_dim_int(120, 220, "ones");
	int **D = create_two_dim_int(290, 100, "ones");
	int ***C = create_three_dim_int(40, 920, 770, "ones");
	int **E = create_two_dim_int(950, 750, "ones");

	for (int b = 5; b < 100; b++)
	  for (int a = 3; a < 37; a++)
	  {
	    
	     E[a][b]=E[a-3][b-5]-A[a][b]+D[a][b]/B[a]*C[a][b][a];
	    
	     C[a][b][a]=C[a+2][b+1][a+1]-25;
	    
	     C[a][b][a]=C[a+3][b+1][a]/31;
	    
	     D[a][b]=3;
	     D[a-2][b-3]=E[a][b]+C[a][b][a]*A[a][b];
	  }

    return 0;
}