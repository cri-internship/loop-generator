#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(140, "ones");
	int **E = create_two_dim_int(310, 350, "ones");
	int ***A = create_three_dim_int(50, 570, 160, "ones");
	int *D = create_one_dim_int(930, "ones");
	int **B = create_two_dim_int(100, 550, "ones");

	for (int d = 0; d < 349; d++)
	  for (int c = 0; c < 95; c++)
	    for (int b = 0; b < 95; b++)
	      for (int a = 0; a < 95; a++)
	      {
	        
	       B[a][b]=B[a+5][b+5]+19;
	        
	       B[a][b]=B[a+3][b+5]-E[a][b]+D[a]*C[a]/A[a][b][c];
	        
	       C[a]=C[a+4]-B[a][b]*B[a][b]/D[a];
	        
	       D[a]=E[a][b]/B[a][b];
	       C[a]=E[a+1][b+1]-B[a][b]+A[a][b][c]/C[a]*D[a];
	      }

    return 0;
}