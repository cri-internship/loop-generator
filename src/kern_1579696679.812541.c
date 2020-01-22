#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(480, "ones");
	int *D = create_one_dim_int(220, "ones");
	int ***C = create_three_dim_int(10, 960, 940, "ones");
	int ***E = create_three_dim_int(510, 870, 10, "ones");
	int ***A = create_three_dim_int(120, 810, 570, "ones");

	for (int d = 0; d < 570; d++)
	  for (int c = 0; c < 809; c++)
	    for (int b = 5; b < 116; b++)
	      for (int a = 5; a < 116; a++)
	      {
	        
	       B[a]=B[a-5]/E[a][b][c]*A[a][b][c];
	        
	       D[a]=D[a-2]+B[a]/C[a][b][c]*A[a][b][c]-C[a][b][c];
	        
	       A[a][b][c]=A[a+4][b+1][c]/19;
	      }

    return 0;
}