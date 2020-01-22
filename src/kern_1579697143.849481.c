#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(410, "random");
	int **B = create_two_dim_int(170, 90, "random");

	for (int d = 5; d < 87; d++)
	  for (int c = 5; c < 165; c++)
	    for (int b = 5; b < 165; b++)
	      for (int a = 5; a < 165; a++)
	      {
	        
	       B[a][b]=B[a-5][b]*16;
	        
	       int var_a=A[a]/31;
	       A[a]=12;
	        
	       B[a][b]=20;
	        
	       A[a]=B[a][b]/27;
	       B[a][b]=B[a-3][b]*12;
	        
	       int var_b=B[a][b]+26;
	       int var_c=B[a+5][b+3]+23;
	      }

    return 0;
}