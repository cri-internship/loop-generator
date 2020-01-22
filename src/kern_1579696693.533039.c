#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(440, 190, "random");
	int *C = create_one_dim_int(830, "random");
	int ***D = create_three_dim_int(830, 800, 780, "random");
	int ***A = create_three_dim_int(930, 790, 500, "random");

	for (int b = 0; b < 787; b++)
	  for (int a = 0; a < 827; a++)
	  {
	    
	     B[a][b]=C[a]+B[a][b]-A[a][b][a]*D[a][b][a];
	     C[a]=A[a][b][a]*B[a][b]-D[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+3][a+4]+36;
	    
	     C[a]=D[a][b][a];
	  }

    return 0;
}