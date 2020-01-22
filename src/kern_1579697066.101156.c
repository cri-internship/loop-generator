#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(90, "zeros");
	int *A = create_one_dim_int(210, "zeros");
	int **C = create_two_dim_int(560, 810, "zeros");

	for (int c = 4; c < 810; c++)
	  for (int b = 5; b < 90; b++)
	    for (int a = 5; a < 90; a++)
	    {
	      
	      C[a][b]=C[a-5][b-4]*26;
	      
	      B[a]=B[a-4]+13;
	      
	      B[a]=26;
	      
	      A[a]=B[a];
	      A[a+2]=C[a][b];
	      
	      C[a][b]=A[a]+C[a][b];
	      B[a]=A[a]*B[a]+C[a][b];
	    }

    return 0;
}