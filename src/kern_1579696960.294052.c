#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(280, 60, 180, "ones");
	int *B = create_one_dim_int(120, "ones");
	int *D = create_one_dim_int(210, "ones");
	int **C = create_two_dim_int(260, 800, "ones");
	int **E = create_two_dim_int(560, 410, "ones");

	for (int d = 1; d < 410; d++)
	  for (int c = 5; c < 118; c++)
	    for (int b = 5; b < 118; b++)
	      for (int a = 5; a < 118; a++)
	      {
	        
	       D[a]=D[a-2]+16;
	        
	       E[a][b]=E[a-5][b-1]+17;
	        
	       C[a][b]=C[a+2][b+3]-38;
	        
	       B[a]=B[a+2]-A[a][b][c]*D[a];
	      }

    return 0;
}