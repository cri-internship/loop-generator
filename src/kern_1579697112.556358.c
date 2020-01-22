#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(870, 270, "ones");
	int *A = create_one_dim_int(900, "ones");

	for (int d = 5; d < 269; d++)
	  for (int c = 3; c < 867; c++)
	    for (int b = 3; b < 867; b++)
	      for (int a = 3; a < 867; a++)
	      {
	        
	       A[a]=A[a+5]+49;
	        
	       A[a]=22;
	        
	       B[a][b]=20;
	       B[a+3][b+1]=32;
	        
	       B[a][b]=A[a]-B[a][b];
	       A[a]=A[a+1]/B[a][b];
	        
	       B[a][b]=B[a][b]*A[a];
	       B[a][b]=B[a-3][b-5]*A[a];
	        
	       B[a][b]=B[a][b]+A[a];
	       B[a][b]=B[a-2][b-2]-A[a];
	      }

    return 0;
}