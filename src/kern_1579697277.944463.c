#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(580, "random");
	int **A = create_two_dim_int(150, 690, "random");

	for (int d = 4; d < 685; d++)
	  for (int c = 5; c < 146; c++)
	    for (int b = 5; b < 146; b++)
	      for (int a = 5; a < 146; a++)
	      {
	        
	       A[a][b]=A[a+4][b+5]*17;
	        
	       B[a]=A[a][b]+B[a];
	       A[a][b]=A[a+2][b]*B[a];
	        
	       int var_a=B[a]/43;
	       int var_b=B[a-4]*38;
	        
	       int var_c=A[a][b]+10;
	       int var_d=A[a-5][b-4]/13;
	      }

    return 0;
}