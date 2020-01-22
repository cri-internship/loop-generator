#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(530, "random");
	int ***B = create_three_dim_int(840, 200, 870, "random");
	int **A = create_two_dim_int(470, 490, "random");
	int **C = create_two_dim_int(500, 120, "random");

	for (int b = 0; b < 115; b++)
	  for (int a = 0; a < 466; a++)
	  {
	    
	     C[a][b]=C[a+1][b+5]/B[a][b][a]+A[a][b]*D[a];
	    
	     A[a][b]=A[a][b]/C[a][b]+C[a][b];
	     B[a][b][a]=A[a+4][b+4]+9;
	  }

    return 0;
}