#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 320, "zeros");
	int ***A = create_three_dim_int(940, 990, 890, "zeros");
	int **E = create_two_dim_int(650, 540, "zeros");
	int ***C = create_three_dim_int(620, 420, 640, "zeros");
	int *D = create_one_dim_int(790, "zeros");

	for (int c = 1; c < 885; c++)
	  for (int b = 5; b < 320; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      A[a][b][c]=A[a][b-4][c-1]*E[a][b]/41+C[a][b][c];
	      
	      A[a][b][c]=B[a][b]/D[a];
	      
	      B[a][b]=B[a][b]*A[a][b][c]-C[a][b][c]/20;
	      A[a][b][c]=B[a-5][b-5]+C[a][b][c]-D[a]/E[a][b]*A[a][b][c];
	      
	      int var_a=D[a]/41;
	      int var_b=D[a+4]*14;
	    }

    return 0;
}