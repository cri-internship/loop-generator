#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(210, 330, "ones");
	int *D = create_one_dim_int(810, "ones");
	int *C = create_one_dim_int(820, "ones");
	int *B = create_one_dim_int(620, "ones");

	for (int c = 5; c < 327; c++)
	  for (int b = 5; b < 205; b++)
	    for (int a = 5; a < 205; a++)
	    {
	      
	      C[a]=C[a-5]/A[a][b]*48;
	      
	      A[a][b]=A[a][b-5]+33;
	      
	      C[a]=C[a-3]+D[a]-D[a];
	      
	      A[a][b]=A[a+5][b+3]-C[a]*B[a];
	    }

    return 0;
}