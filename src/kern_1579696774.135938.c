#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(480, 620, "zeros");
	int *C = create_one_dim_int(560, "zeros");
	int *D = create_one_dim_int(760, "zeros");
	int ***A = create_three_dim_int(760, 570, 190, "zeros");
	int **E = create_two_dim_int(260, 580, "zeros");

	for (int d = 2; d < 190; d++)
	  for (int c = 5; c < 570; c++)
	    for (int b = 2; b < 480; b++)
	      for (int a = 2; a < 480; a++)
	      {
	        
	       D[a]=29;
	       float  var_a=D[a]+33;
	        
	       B[a][b]=B[a-2][b-5]/E[a][b]+D[a];
	        
	       A[a][b][c]=C[a]/B[a][b]-D[a];
	       A[a-2][b-1][c-2]=B[a][b]/E[a][b]+D[a]-C[a];
	      }

    return 0;
}