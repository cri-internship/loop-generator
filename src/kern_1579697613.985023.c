#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(910, "random");
	int **A = create_two_dim_int(830, 860, "random");
	int **C = create_two_dim_int(410, 580, "random");

	for (int d = 3; d < 857; d++)
	  for (int c = 4; c < 826; c++)
	    for (int b = 4; b < 826; b++)
	      for (int a = 4; a < 826; a++)
	      {
	        
	       A[a][b]=A[a-4][b-3]*45;
	        
	       A[a][b]=A[a+4][b+3]/C[a][b]+B[a];
	        
	       B[a]=B[a+1]-45;
	        
	       B[a]=28;
	        
	       int var_a=A[a][b]-38;
	       int var_b=A[a+4][b]*22;
	      }

    return 0;
}