#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(240, "random");
	int **C = create_two_dim_int(420, 780, "random");
	int ***B = create_three_dim_int(550, 970, 640, "random");

	for (int c = 0; c < 637; c++)
	  for (int b = 0; b < 966; b++)
	    for (int a = 0; a < 546; a++)
	    {
	      
	      B[a][b][c]=B[a+4][b+4][c+3]-39;
	    }

    return 0;
}