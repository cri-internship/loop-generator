#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(300, 530, "random");
	int **C = create_two_dim_int(10, 680, "random");
	int *A = create_one_dim_int(970, "random");
	int *E = create_one_dim_int(970, "random");
	int **B = create_two_dim_int(360, 650, "random");

	for (int d = 5; d < 675; d++)
	  for (int c = 4; c < 7; c++)
	    for (int b = 4; b < 7; b++)
	      for (int a = 4; a < 7; a++)
	      {
	        
	       E[a]=E[a-1]-27;
	        
	       C[a][b]=C[a-4][b-5]/E[a]*D[a][b];
	        
	       A[a]=A[a-2]-C[a][b]+B[a][b]*B[a][b];
	        
	       E[a]=39;
	        
	       C[a][b]=C[a][b]+A[a]-D[a][b];
	       E[a]=C[a+3][b+5]+E[a];
	        
	       B[a][b]=C[a][b]*E[a]/D[a][b];
	       A[a]=C[a-2][b-4]*D[a][b]-B[a][b]/A[a];
	      }

    return 0;
}