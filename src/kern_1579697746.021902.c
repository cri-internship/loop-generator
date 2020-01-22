#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(800, 640, 110, "random");
	int **C = create_two_dim_int(20, 590, "random");
	int *B = create_one_dim_int(260, "random");

	for (int c = 4; c < 590; c++)
	  for (int b = 5; b < 16; b++)
	    for (int a = 5; a < 16; a++)
	    {
	      
	      B[a]=B[a-5]*2;
	      
	      C[a][b]=C[a-1][b-4]/4;
	      
	      C[a][b]=C[a+4][b]+13;
	      
	      B[a]=5-C[a][b];
	      
	      A[a][b][c]=B[a]*A[a][b][c];
	      C[a][b]=B[a]*A[a][b][c]-C[a][b];
	    }

    return 0;
}