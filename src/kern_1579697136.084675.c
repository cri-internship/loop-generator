#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(300, "zeros");
	int ***B = create_three_dim_int(200, 790, 1000, "zeros");
	int *C = create_one_dim_int(150, "zeros");

	for (int d = 0; d < 995; d++)
	  for (int c = 5; c < 789; c++)
	    for (int b = 3; b < 150; b++)
	      for (int a = 3; a < 150; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-5][c]+A[a]*C[a];
	        
	       C[a]=C[a-2]*37;
	        
	       B[a][b][c]=C[a];
	        
	       A[a]=31;
	       A[a+5]=50;
	        
	       int var_a=A[a]/6;
	       int var_b=A[a-3]+3;
	      }

    return 0;
}