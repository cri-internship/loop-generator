#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(140, "ones");
	int **C = create_two_dim_int(140, 130, "ones");
	int *B = create_one_dim_int(600, "ones");
	int **D = create_two_dim_int(350, 900, "ones");

	for (int d = 1; d < 900; d++)
	  for (int c = 5; c < 137; c++)
	    for (int b = 5; b < 137; b++)
	      for (int a = 5; a < 137; a++)
	      {
	        
	       D[a][b]=D[a-1][b-1]-A[a]/B[a];
	        
	       A[a]=A[a+3]+9;
	        
	       A[a]=28;
	        
	       B[a]=C[a][b]+D[a][b]*C[a][b];
	       B[a+2]=C[a][b];
	        
	       B[a]=B[a]-44+D[a][b]*A[a];
	       A[a]=B[a+1]*A[a];
	        
	       int var_b=A[a]-17;
	       int var_c=A[a-5]*23;
	      }

    return 0;
}