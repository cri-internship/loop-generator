#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(730, 160, "ones");
	int ***C = create_three_dim_int(350, 860, 840, "ones");
	int *B = create_one_dim_int(720, "ones");
	int *A = create_one_dim_int(160, "ones");

	for (int d = 2; d < 160; d++)
	  for (int c = 3; c < 156; c++)
	    for (int b = 3; b < 156; b++)
	      for (int a = 3; a < 156; a++)
	      {
	        
	       B[a]=B[a-2]/6;
	        
	       D[a][b]=D[a-3][b-2]+41;
	        
	       A[a]=A[a+4]/B[a]-C[a][b][c];
	        
	       B[a]=B[a+5]-14;
	      }

    return 0;
}