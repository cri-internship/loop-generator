#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(200, 740, 650, "random");
	int *B = create_one_dim_int(850, "random");

	for (int d = 0; d < 648; d++)
	  for (int c = 0; c < 736; c++)
	    for (int b = 1; b < 198; b++)
	      for (int a = 1; a < 198; a++)
	      {
	        
	       B[a]=20;
	       float  var_a=B[a]-37;
	        
	       B[a]=B[a-1]-A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+4][c+2]/B[a];
	        
	       B[a]=B[a+3]-0;
	      }

    return 0;
}