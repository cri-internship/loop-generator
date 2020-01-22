#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(910, "random");
	int **A = create_two_dim_int(550, 660, "random");
	int ***B = create_three_dim_int(380, 390, 230, "random");
	int *C = create_one_dim_int(530, "random");

	for (int c = 0; c < 525; c++)
	  for (int b = 0; b < 525; b++)
	    for (int a = 0; a < 525; a++)
	    {
	      
	      B[a][b][c]=C[a]+D[a];
	      D[a]=C[a+5]*B[a][b][c];
	    }

    return 0;
}