#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(590, 80, "zeros");
	int *B = create_one_dim_int(260, "zeros");
	int **C = create_two_dim_int(390, 710, "zeros");

	for (int d = 2; d < 78; d++)
	  for (int c = 1; c < 258; c++)
	    for (int b = 1; b < 258; b++)
	      for (int a = 1; a < 258; a++)
	      {
	        
	       A[a][b]=A[a][b-2]/C[a][b]-B[a];
	        
	       A[a][b]=A[a-1][b]*13;
	        
	       C[a][b]=C[a+1][b+5]*A[a][b];
	        
	       C[a][b]=C[a][b+5]*B[a]+A[a][b];
	        
	       B[a]=B[a+2]*A[a][b];
	      }

    return 0;
}