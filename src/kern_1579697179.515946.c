#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(750, 790, 710, "random");
	int ***C = create_three_dim_int(270, 590, 380, "random");
	int *B = create_one_dim_int(640, "random");
	int *D = create_one_dim_int(720, "random");

	for (int c = 0; c < 710; c++)
	  for (int b = 0; b < 788; b++)
	    for (int a = 0; a < 718; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+2][c]-22;
	      
	      D[a]=C[a][b][c]-B[a];
	      D[a+2]=A[a][b][c]-C[a][b][c]+B[a];
	    }

    return 0;
}