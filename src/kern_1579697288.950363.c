#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(910, 820, 740, "ones");
	int **A = create_two_dim_int(480, 370, "ones");
	int *B = create_one_dim_int(810, "ones");
	int *D = create_one_dim_int(940, "ones");
	int **E = create_two_dim_int(200, 230, "ones");

	for (int b = 0; b < 368; b++)
	  for (int a = 4; a < 477; a++)
	  {
	    
	     B[a]=B[a-4]-C[a][b][a]*A[a][b];
	    
	     A[a][b]=A[a+3][b+2]-27;
	    
	     D[a]=D[a+3]-15;
	  }

    return 0;
}