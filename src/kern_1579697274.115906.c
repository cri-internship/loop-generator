#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(780, 680, "ones");
	int **B = create_two_dim_int(820, 190, "ones");

	for (int d = 5; d < 186; d++)
	  for (int c = 5; c < 778; c++)
	    for (int b = 5; b < 778; b++)
	      for (int a = 5; a < 778; a++)
	      {
	        
	       B[a][b]=B[a-2][b-5]*A[a][b];
	        
	       B[a][b]=B[a-5][b-5]*11;
	        
	       B[a][b]=B[a+5][b+4]/A[a][b];
	        
	       A[a][b]=2;
	       A[a-2][b-4]=3;
	        
	       A[a][b]=50;
	        
	       B[a][b]=A[a][b]/16;
	       A[a][b]=A[a-1][b-4]/B[a][b];
	      }

    return 0;
}