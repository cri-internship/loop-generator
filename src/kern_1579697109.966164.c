#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(80, "random");
	int *A = create_one_dim_int(530, "random");

	for (int d = 3; d < 77; d++)
	  for (int c = 3; c < 77; c++)
	    for (int b = 3; b < 77; b++)
	      for (int a = 3; a < 77; a++)
	      {
	        
	       B[a]=B[a-3]+37;
	        
	       B[a]=B[a-1]+A[a];
	        
	       A[a]=A[a-3]+B[a];
	        
	       B[a]=A[a]+25;
	        
	       int var_a=B[a]/33;
	       int var_b=B[a+3]/3;
	        
	       int var_c=A[a]-19;
	       int var_d=A[a+4]-30;
	      }

    return 0;
}