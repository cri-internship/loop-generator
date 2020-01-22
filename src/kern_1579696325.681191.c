#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(580, "ones");
	int *A = create_one_dim_int(150, "ones");

	for (int d = 5; d < 145; d++)
	  for (int c = 5; c < 145; c++)
	    for (int b = 5; b < 145; b++)
	      for (int a = 5; a < 145; a++)
	      {
	        
	       B[a]=B[a-3]-A[a];
	        
	       A[a]=A[a-5]/B[a];
	        
	       B[a]=38;
	        
	       A[a]=31;
	        
	       int var_c=A[a]-49;
	       int var_d=A[a+5]+45;
	      }

    return 0;
}