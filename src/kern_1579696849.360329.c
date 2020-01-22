#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(350, "zeros");
	int **C = create_two_dim_int(90, 610, "zeros");
	int *B = create_one_dim_int(530, "zeros");
	int *A = create_one_dim_int(480, "zeros");

	for (int d = 0; d < 609; d++)
	  for (int c = 5; c < 86; c++)
	    for (int b = 5; b < 86; b++)
	      for (int a = 5; a < 86; a++)
	      {
	        
	       B[a]=B[a-5]/18;
	        
	       D[a]=D[a+5]*C[a][b]/B[a]-A[a];
	        
	       C[a][b]=C[a+4][b+1]+30-B[a];
	        
	       B[a]=B[a+2]/A[a]+C[a][b];
	      }

    return 0;
}