#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(540, "zeros");
	int **C = create_two_dim_int(460, 400, "zeros");
	int *D = create_one_dim_int(650, "zeros");
	int **A = create_two_dim_int(1000, 650, "zeros");

	for (int d = 0; d < 399; d++)
	  for (int c = 5; c < 458; c++)
	    for (int b = 5; b < 458; b++)
	      for (int a = 5; a < 458; a++)
	      {
	        
	       D[a]=D[a-3]+B[a]/C[a][b];
	        
	       A[a][b]=A[a+3][b+3]+D[a]-42;
	        
	       B[a]=D[a]/A[a][b];
	       C[a][b]=D[a-5]/C[a][b];
	        
	       A[a][b]=C[a][b]/D[a]*A[a][b];
	       D[a]=C[a+2][b+1]-B[a]*A[a][b];
	      }

    return 0;
}