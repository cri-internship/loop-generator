#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(780, 940, "ones");
	int *C = create_one_dim_int(790, "ones");
	int **D = create_two_dim_int(660, 350, "ones");
	int *B = create_one_dim_int(900, "ones");
	int **E = create_two_dim_int(940, 280, "ones");

	for (int d = 0; d < 940; d++)
	  for (int c = 4; c < 780; c++)
	    for (int b = 4; b < 780; b++)
	      for (int a = 4; a < 780; a++)
	      {
	        
	       B[a]=B[a+1]+A[a][b]/E[a][b];
	        
	       B[a]=8;
	        
	       A[a][b]=1;
	       A[a-2][b]=19;
	        
	       C[a]=B[a]-6/D[a][b]*C[a];
	      }

    return 0;
}