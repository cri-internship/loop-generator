#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(960, 570, "ones");
	int *A = create_one_dim_int(930, "ones");

	for (int c = 0; c < 570; c++)
	  for (int b = 5; b < 925; b++)
	    for (int a = 5; a < 925; a++)
	    {
	      
	      A[a]=A[a-2]-B[a][b];
	      
	      A[a]=A[a-5]*B[a][b];
	      
	      A[a]=A[a+5]-B[a][b];
	      
	      B[a][b]=B[a+4][b]*4;
	      
	      A[a]=A[a]+B[a][b];
	      B[a][b]=A[a+1]*45;
	    }

    return 0;
}