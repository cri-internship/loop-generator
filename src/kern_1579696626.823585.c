#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(280, "zeros");
	int **A = create_two_dim_int(790, 90, "zeros");
	int ***C = create_three_dim_int(960, 130, 610, "zeros");
	int *D = create_one_dim_int(510, "zeros");

	for (int d = 3; d < 90; d++)
	  for (int c = 1; c < 279; c++)
	    for (int b = 1; b < 279; b++)
	      for (int a = 1; a < 279; a++)
	      {
	        
	       A[a][b]=A[a][b-2]*B[a]/D[a];
	        
	       B[a]=B[a-1]-C[a][b][c]+A[a][b];
	        
	       B[a]=B[a+1]-A[a][b]/D[a];
	        
	       A[a][b]=C[a][b][c]-D[a]/B[a];
	        
	       int var_a=D[a]+31;
	       int var_b=D[a+5]*20;
	      }

    return 0;
}