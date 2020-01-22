#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(30, "random");
	int **D = create_two_dim_int(870, 460, "random");
	int *E = create_one_dim_int(830, "random");
	int *A = create_one_dim_int(160, "random");
	int **B = create_two_dim_int(150, 350, "random");

	for (int d = 0; d < 460; d++)
	  for (int c = 0; c < 26; c++)
	    for (int b = 0; b < 26; b++)
	      for (int a = 0; a < 26; a++)
	      {
	        
	       D[a][b]=C[a]-E[a];
	       C[a]=D[a][b]*B[a][b]+26;
	        
	       C[a]=C[a+4]+D[a][b]*A[a]-E[a]/D[a][b];
	      }

    return 0;
}