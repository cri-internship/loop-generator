#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(980, 170, "ones");
	int *A = create_one_dim_int(130, "ones");

	for (int d = 5; d < 167; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       B[a][b]=B[a-2][b-5]*A[a];
	        
	       B[a][b]=B[a+5][b+3]+40;
	        
	       A[a]=49;
	       A[a-5]=44;
	        
	       A[a]=B[a][b]*A[a];
	       B[a][b]=B[a-3][b-3]-A[a];
	      }

    return 0;
}