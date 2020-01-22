#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(130, 270, "random");
	int ***C = create_three_dim_int(100, 50, 590, "random");
	int **B = create_two_dim_int(90, 640, "random");
	int *E = create_one_dim_int(90, "random");
	int **A = create_two_dim_int(890, 440, "random");

	for (int c = 0; c < 88; c++)
	  for (int b = 0; b < 88; b++)
	    for (int a = 0; a < 88; a++)
	    {
	      
	      D[a][b]=E[a]*B[a][b]+D[a][b];
	      B[a][b]=E[a+2]+A[a][b];
	    }

    return 0;
}