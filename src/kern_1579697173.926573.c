#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(870, "random");
	int **A = create_two_dim_int(300, 170, "random");

	for (int d = 4; d < 170; d++)
	  for (int c = 5; c < 300; c++)
	    for (int b = 5; b < 300; b++)
	      for (int a = 5; a < 300; a++)
	      {
	        
	       B[a]=B[a-4]+29;
	        
	       A[a][b]=A[a-1][b-3]-5;
	        
	       B[a]=35;
	        
	       int var_a=A[a][b]+17;
	       int var_b=A[a][b-4]/22;
	        
	       int var_c=A[a][b]/22;
	       int var_d=A[a-5][b]/9;
	      }

    return 0;
}