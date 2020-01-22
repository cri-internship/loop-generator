#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(810, 310, "ones");
	int *A = create_one_dim_int(330, "ones");
	int **C = create_two_dim_int(200, 180, "ones");

	for (int d = 3; d < 175; d++)
	  for (int c = 0; c < 196; c++)
	    for (int b = 0; b < 196; b++)
	      for (int a = 0; a < 196; a++)
	      {
	        
	       A[a]=21;
	       float  var_a=A[a]-19;
	        
	       B[a][b]=B[a+5][b+2]-35;
	        
	       C[a][b]=C[a+4][b+5]*37;
	        
	       B[a][b]=C[a][b]+25;
	        
	       int var_b=C[a][b]*21;
	       int var_c=C[a][b-3]*14;
	        
	       A[a]=C[a][b]+B[a][b]-B[a][b];
	       B[a][b]=C[a+3][b+2]-B[a][b];
	      }

    return 0;
}