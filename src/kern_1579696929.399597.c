#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(130, "ones");
	int *D = create_one_dim_int(50, "ones");
	int *A = create_one_dim_int(720, "ones");
	int *B = create_one_dim_int(370, "ones");

	for (int d = 4; d < 45; d++)
	  for (int c = 4; c < 45; c++)
	    for (int b = 4; b < 45; b++)
	      for (int a = 4; a < 45; a++)
	      {
	        
	       C[a]=C[a-1]*22;
	        
	       C[a]=C[a-4]-12;
	        
	       B[a]=B[a+5]*C[a]+D[a];
	        
	       C[a]=C[a+3]/32;
	        
	       int var_a=A[a]*36;
	       int var_b=A[a-1]-27;
	        
	       int var_c=D[a]-28;
	        
	       int var_e=D[a]*29;
	       int var_f=D[a+5]*31;
	      }

    return 0;
}