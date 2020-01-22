#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(60, 290, "random");
	int *B = create_one_dim_int(430, "random");
	int **A = create_two_dim_int(810, 630, "random");

	for (int d = 5; d < 290; d++)
	  for (int c = 3; c < 60; c++)
	    for (int b = 3; b < 60; b++)
	      for (int a = 3; a < 60; a++)
	      {
	        
	       A[a][b]=A[a-3][b-5]*8;
	        
	       C[a][b]=C[a-3][b-3]+43;
	        
	       B[a]=A[a][b]+B[a]*10;
	       A[a][b]=A[a][b+4]+B[a]*C[a][b];
	      }

    return 0;
}