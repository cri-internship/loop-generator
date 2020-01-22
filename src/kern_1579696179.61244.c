#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(150, 450, 90, "random");
	int **D = create_two_dim_int(920, 80, "random");
	int ***A = create_three_dim_int(860, 360, 700, "random");
	int *C = create_one_dim_int(420, "random");

	for (int b = 2; b < 450; b++)
	  for (int a = 2; a < 150; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-2]/C[a]-D[a][b]+A[a][b][a];
	    
	     C[a]=C[a-2]/29;
	  }

    return 0;
}