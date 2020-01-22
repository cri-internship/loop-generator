#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(40, 350, 700, "ones");
	int **A = create_two_dim_int(300, 100, "ones");

	for (int d = 3; d < 700; d++)
	  for (int c = 5; c < 98; c++)
	    for (int b = 3; b < 40; b++)
	      for (int a = 3; a < 40; a++)
	      {
	        
	       A[a][b]=25;
	       float  var_a=A[a][b]+22;
	        
	       A[a][b]=A[a-3][b-1]*19;
	        
	       B[a][b][c]=B[a-2][b-4][c-1]*32;
	        
	       B[a][b][c]=15;
	      }

    return 0;
}