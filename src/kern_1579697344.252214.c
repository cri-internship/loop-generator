#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(360, 460, "random");
	int *C = create_one_dim_int(260, "random");
	int *A = create_one_dim_int(1000, "random");
	int ***D = create_three_dim_int(860, 280, 890, "random");
	int **B = create_two_dim_int(150, 850, "random");

	for (int d = 2; d < 890; d++)
	  for (int c = 3; c < 280; c++)
	    for (int b = 0; b < 255; b++)
	      for (int a = 0; a < 255; a++)
	      {
	        
	       A[a]=A[a+1]+D[a][b][c];
	        
	       C[a]=B[a][b]*A[a]/E[a][b]+A[a];
	       C[a+1]=A[a]*E[a][b]/D[a][b][c];
	        
	       C[a]=A[a]+E[a][b]-D[a][b][c];
	        
	       C[a]=D[a][b][c]*C[a]+A[a]-19/B[a][b];
	       E[a][b]=D[a][b-3][c-2]/7*E[a][b];
	      }

    return 0;
}