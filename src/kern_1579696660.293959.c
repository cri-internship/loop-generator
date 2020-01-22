#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(500, 610, "ones");
	int *C = create_one_dim_int(160, "ones");
	int ***E = create_three_dim_int(200, 140, 190, "ones");
	int ***A = create_three_dim_int(940, 290, 610, "ones");
	int *B = create_one_dim_int(620, "ones");

	for (int c = 3; c < 605; c++)
	  for (int b = 4; b < 286; b++)
	    for (int a = 3; a < 155; a++)
	    {
	      
	      B[a]=B[a-3]-A[a][b][c]/C[a]*D[a][b];
	      
	      D[a][b]=D[a-2][b-4]*B[a]-E[a][b][c];
	      
	      A[a][b][c]=29;
	      A[a][b-1][c-3]=11;
	      
	      D[a][b]=C[a]-A[a][b][c]+E[a][b][c]/B[a];
	      
	      A[a][b][c]=21;
	      
	      C[a]=35;
	      C[a+5]=47;
	      
	      B[a]=D[a][b]/E[a][b][c]*A[a][b][c];
	      C[a]=D[a+1][b+2]/B[a]+C[a];
	    }

    return 0;
}