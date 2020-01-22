#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(650, "ones");
	int *A = create_one_dim_int(940, "ones");
	int ***D = create_three_dim_int(280, 740, 640, "ones");
	int ***C = create_three_dim_int(100, 140, 960, "ones");

	for (int d = 0; d < 636; d++)
	  for (int c = 0; c < 140; c++)
	    for (int b = 0; b < 98; b++)
	      for (int a = 0; a < 98; a++)
	      {
	        
	       D[a][b][c]=D[a+1][b+2][c+4]+29;
	        
	       C[a][b][c]=C[a+2][b][c+3]/9;
	        
	       A[a]=A[a]*B[a];
	       A[a]=C[a][b][c]*28;
	      }

    return 0;
}