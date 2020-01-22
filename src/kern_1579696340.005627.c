#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(850, 540, 260, "zeros");
	int *D = create_one_dim_int(670, "zeros");
	int **B = create_two_dim_int(610, 290, "zeros");
	int ***A = create_three_dim_int(970, 370, 600, "zeros");
	int ***E = create_three_dim_int(750, 10, 410, "zeros");

	for (int c = 3; c < 256; c++)
	  for (int b = 2; b < 6; b++)
	    for (int a = 4; a < 607; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-2][c-3]-50;
	      
	      E[a][b][c]=E[a+5][b+4][c+4]*42;
	      
	      B[a][b]=B[a+3][b+1]-D[a]/C[a][b][c]*A[a][b][c];
	      
	      B[a][b]=B[a][b+4]*E[a][b][c];
	      
	      D[a]=D[a+4]+12;
	      
	      C[a][b][c]=B[a][b]-43+A[a][b][c];
	      
	      D[a]=32;
	    }

    return 0;
}