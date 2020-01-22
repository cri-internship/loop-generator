#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(740, 290, "random");
	int *C = create_one_dim_int(800, "random");
	int *B = create_one_dim_int(870, "random");
	int ***E = create_three_dim_int(450, 570, 400, "random");
	int ***A = create_three_dim_int(30, 990, 870, "random");

	for (int d = 0; d < 870; d++)
	  for (int c = 0; c < 986; c++)
	    for (int b = 5; b < 25; b++)
	      for (int a = 5; a < 25; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+4][c]+22;
	        
	       C[a]=11;
	       C[a-5]=37;
	        
	       int var_a=B[a]*4;
	       int var_b=B[a+2]*21;
	        
	       C[a]=C[a]+E[a][b][c]/B[a]*A[a][b][c]-B[a];
	       B[a]=C[a+4]+D[a][b]-B[a]/E[a][b][c];
	      }

    return 0;
}