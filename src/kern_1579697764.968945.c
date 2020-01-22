#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(710, "ones");
	int *C = create_one_dim_int(60, "ones");
	int ***D = create_three_dim_int(610, 810, 760, "ones");
	int **E = create_two_dim_int(520, 350, "ones");
	int *B = create_one_dim_int(170, "ones");

	for (int b = 1; b < 350; b++)
	  for (int a = 5; a < 56; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-1][a-5]+39;
	    
	     D[a][b][a]=E[a][b]+D[a][b][a]/26;
	     E[a][b]=24;
	    
	     C[a]=31;
	     C[a-5]=5;
	    
	     C[a]=B[a]-D[a][b][a];
	  }

    return 0;
}