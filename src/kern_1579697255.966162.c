#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(710, "zeros");
	int ***B = create_three_dim_int(320, 350, 70, "zeros");
	int *A = create_one_dim_int(690, "zeros");
	int ***D = create_three_dim_int(50, 330, 530, "zeros");

	for (int c = 5; c < 67; c++)
	  for (int b = 5; b < 325; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      A[a]=A[a-2]-D[a][b][c]+B[a][b][c];
	      
	      C[a]=C[a-3]+4-D[a][b][c];
	      
	      B[a][b][c]=B[a-2][b-1][c-5]/C[a]+D[a][b][c]*42;
	      
	      D[a][b][c]=D[a][b+5][c]+12;
	      
	      D[a][b][c]=C[a];
	      
	      A[a]=C[a]-B[a][b][c]/D[a][b][c];
	      
	      B[a][b][c]=10-D[a][b][c];
	    }

    return 0;
}