#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(610, 640, "random");
	int **C = create_two_dim_int(510, 110, "random");
	int *B = create_one_dim_int(730, "random");

	for (int d = 2; d < 108; d++)
	  for (int c = 5; c < 506; c++)
	    for (int b = 5; b < 506; b++)
	      for (int a = 5; a < 506; a++)
	      {
	        
	       B[a]=B[a+3]/15;
	        
	       A[a][b]=47;
	       A[a-5][b]=48;
	        
	       A[a][b]=A[a][b]*C[a][b];
	       C[a][b]=A[a-4][b-2]-B[a]*B[a];
	        
	       B[a]=B[a]+47-A[a][b];
	       C[a][b]=B[a-3]*A[a][b];
	        
	       C[a][b]=C[a][b]+B[a]-A[a][b];
	       A[a][b]=C[a+4][b+2]-B[a];
	      }

    return 0;
}