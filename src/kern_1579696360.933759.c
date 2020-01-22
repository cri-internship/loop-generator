#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(810, 620, "zeros");
	int **B = create_two_dim_int(810, 110, "zeros");

	for (int c = 5; c < 110; c++)
	  for (int b = 2; b < 808; b++)
	    for (int a = 2; a < 808; a++)
	    {
	      
	      B[a][b]=B[a-1][b-2]/A[a][b];
	      
	      A[a][b]=9;
	      A[a-2][b-5]=30;
	      
	      A[a][b]=18;
	      
	      B[a][b]=A[a][b]-B[a][b];
	      A[a][b]=A[a][b-1]+B[a][b];
	    }

    return 0;
}