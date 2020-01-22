#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(920, "random");
	int ***C = create_three_dim_int(130, 50, 60, "random");
	int **A = create_two_dim_int(760, 500, "random");

	for (int b = 5; b < 496; b++)
	  for (int a = 1; a < 755; a++)
	  {
	    
	     A[a][b]=A[a-1][b-5]+C[a][b][a]*B[a];
	    
	     A[a][b]=A[a][b]*C[a][b][a]+6;
	     C[a][b][a]=A[a+5][b+2]*B[a];
	    
	     B[a]=A[a][b]*B[a];
	     A[a][b]=A[a+2][b+4]-C[a][b][a]/B[a];
	  }

    return 0;
}