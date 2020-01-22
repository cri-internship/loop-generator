#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(30, 820, 80, "ones");
	int *D = create_one_dim_int(90, "ones");
	int **C = create_two_dim_int(130, 550, "ones");
	int **B = create_two_dim_int(810, 590, "ones");

	for (int b = 1; b < 550; b++)
	  for (int a = 4; a < 85; a++)
	  {
	    
	     C[a][b]=C[a-4][b-1]+A[a][b][a]-D[a];
	    
	     D[a]=D[a+2]/3;
	    
	     B[a][b]=B[a+4][b+5]-15;
	    
	     D[a]=B[a][b]/C[a][b]+B[a][b];
	  }

    return 0;
}