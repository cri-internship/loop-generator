#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(410, 480, "ones");
	int *C = create_one_dim_int(340, "ones");
	int **D = create_two_dim_int(440, 310, "ones");
	int *A = create_one_dim_int(280, "ones");

	for (int d = 2; d < 307; d++)
	  for (int c = 5; c < 338; c++)
	    for (int b = 5; b < 338; b++)
	      for (int a = 5; a < 338; a++)
	      {
	        
	       B[a][b]=B[a-5][b-1]/D[a][b]*A[a]-13;
	        
	       D[a][b]=D[a-3][b-2]+13;
	        
	       D[a][b]=D[a+3][b+1]/29;
	        
	       B[a][b]=C[a];
	        
	       B[a][b]=C[a]*D[a][b]/B[a][b];
	       C[a]=C[a+2]/D[a][b];
	      }

    return 0;
}