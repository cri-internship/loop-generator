#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(70, 190, "random");
	int *B = create_one_dim_int(380, "random");

	for (int d = 2; d < 186; d++)
	  for (int c = 5; c < 67; c++)
	    for (int b = 5; b < 67; b++)
	      for (int a = 5; a < 67; a++)
	      {
	        
	       B[a]=B[a-5]*14;
	        
	       A[a][b]=21;
	       A[a+3][b+3]=B[a];
	        
	       A[a][b]=23;
	        
	       B[a]=B[a]-A[a][b];
	       A[a][b]=B[a+4]/A[a][b];
	        
	       B[a]=B[a]-10;
	       A[a][b]=B[a+5]-A[a][b];
	        
	       int var_a=A[a][b]-41;
	       int var_b=A[a+1][b+4]*46;
	      }

    return 0;
}