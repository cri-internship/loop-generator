#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(720, "zeros");
	int *B = create_one_dim_int(860, "zeros");
	int **C = create_two_dim_int(880, 730, "zeros");
	int **A = create_two_dim_int(200, 370, "zeros");

	for (int d = 4; d < 368; d++)
	  for (int c = 5; c < 197; c++)
	    for (int b = 5; b < 197; b++)
	      for (int a = 5; a < 197; a++)
	      {
	        
	       C[a][b]=C[a][b+4]*D[a]-B[a]+A[a][b];
	        
	       B[a]=B[a+2]/45;
	        
	       D[a]=D[a+1]-C[a][b];
	        
	       A[a][b]=7;
	       A[a+3][b+2]=16;
	        
	       A[a][b]=5;
	        
	       int var_a=A[a][b]+20;
	       int var_b=A[a-4][b-4]*18;
	        
	       C[a][b]=B[a]-31/D[a];
	       D[a]=B[a-5]*D[a];
	      }

    return 0;
}