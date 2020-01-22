#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(510, 840, "zeros");
	int *B = create_one_dim_int(450, "zeros");

	for (int d = 0; d < 837; d++)
	  for (int c = 5; c < 450; c++)
	    for (int b = 5; b < 450; b++)
	      for (int a = 5; a < 450; a++)
	      {
	        
	       B[a]=B[a-3]-32;
	        
	       A[a][b]=A[a+2][b+2]*B[a];
	        
	       A[a][b]=A[a+5][b]+30;
	        
	       int var_a=A[a][b]+34;
	       int var_b=A[a][b]*0;
	        
	       A[a][b]=B[a]/A[a][b];
	       B[a]=B[a-5]*A[a][b];
	      }

    return 0;
}