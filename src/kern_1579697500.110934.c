#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(560, 150, 270, "ones");
	int **A = create_two_dim_int(100, 710, "ones");

	for (int d = 0; d < 267; d++)
	  for (int c = 0; c < 148; c++)
	    for (int b = 0; b < 560; b++)
	      for (int a = 0; a < 560; a++)
	      {
	        
	       B[a][b][c]=49;
	       B[a][b][c]=B[a][b][c]/A[a][b];
	        
	       B[a][b][c]=B[a][b+2][c+3]+A[a][b];
	      }

    return 0;
}