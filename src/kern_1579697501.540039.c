#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(610, 770, "random");
	int ***B = create_three_dim_int(650, 790, 720, "random");
	int *A = create_one_dim_int(560, "random");

	for (int c = 3; c < 770; c++)
	  for (int b = 5; b < 560; b++)
	    for (int a = 5; a < 560; a++)
	    {
	      
	      C[a][b]=C[a][b-3]+2;
	      
	      C[a][b]=C[a-5][b-1]/1;
	      
	      B[a][b][c]=A[a]+C[a][b];
	      C[a][b]=A[a-2]+B[a][b][c];
	    }

    return 0;
}