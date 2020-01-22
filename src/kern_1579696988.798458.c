#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(790, "zeros");
	int **D = create_two_dim_int(10, 30, "zeros");
	int ***B = create_three_dim_int(440, 940, 50, "zeros");
	int *E = create_one_dim_int(850, "zeros");
	int *A = create_one_dim_int(950, "zeros");

	for (int d = 4; d < 50; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 4; b < 10; b++)
	      for (int a = 4; a < 10; a++)
	      {
	        
	       E[a]=E[a-4]*21;
	        
	       D[a][b]=D[a-1][b-5]*C[a]+B[a][b][c]-A[a];
	        
	       B[a][b][c]=B[a][b-3][c-4]+34;
	        
	       A[a]=26;
	       float  var_a=A[a]/47;
	        
	       D[a][b]=D[a-2][b-5]/49;
	        
	       B[a][b][c]=B[a-2][b-1][c-2]-E[a]/48+C[a];
	        
	       int var_b=A[a]+50;
	       A[a]=35;
	      }

    return 0;
}