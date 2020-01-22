#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(990, 940, 380, "random");
	int *A = create_one_dim_int(560, "random");
	int ***C = create_three_dim_int(210, 560, 850, "random");

	for (int c = 0; c < 846; c++)
	  for (int b = 0; b < 556; b++)
	    for (int a = 0; a < 206; a++)
	    {
	      
	      B[a][b][c]=C[a][b][c]/25;
	      C[a][b][c]=C[a+4][b+4][c+4]*B[a][b][c]-B[a][b][c];
	    }

    return 0;
}