#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(530, 850, 630, "random");
	int *B = create_one_dim_int(320, "random");
	int *D = create_one_dim_int(800, "random");
	int ***A = create_three_dim_int(420, 600, 770, "random");

	for (int d = 0; d < 629; d++)
	  for (int c = 0; c < 598; c++)
	    for (int b = 4; b < 315; b++)
	      for (int a = 4; a < 315; a++)
	      {
	        
	       B[a]=B[a-4]*C[a][b][c]-44;
	        
	       C[a][b][c]=C[a+2][b+5][c+1]+9;
	        
	       B[a]=A[a][b][c]-D[a]+C[a][b][c];
	        
	       A[a][b][c]=27;
	       A[a+2][b+2][c]=23;
	        
	       A[a][b][c]=B[a]-C[a][b][c];
	        
	       int var_a=B[a]+40;
	       int var_b=B[a+5]+9;
	      }

    return 0;
}