#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(980, 50, 210, "ones");
	int **B = create_two_dim_int(630, 230, "ones");
	int *C = create_one_dim_int(610, "ones");
	int **D = create_two_dim_int(710, 990, "ones");
	int **E = create_two_dim_int(930, 660, "ones");

	for (int c = 0; c < 209; c++)
	  for (int b = 0; b < 46; b++)
	    for (int a = 1; a < 610; a++)
	    {
	      
	      A[a][b][c]=A[a][b+4][c+1]+B[a][b]-45;
	      
	      E[a][b]=E[a+5][b+2]-C[a]*A[a][b][c]+D[a][b];
	      
	      E[a][b]=E[a][b+2]*A[a][b][c]-D[a][b]/B[a][b];
	      
	      B[a][b]=B[a][b]/E[a][b]+D[a][b]*C[a]-A[a][b][c];
	      C[a]=B[a+3][b+5]/A[a][b][c]+D[a][b]*C[a]-E[a][b];
	      
	      D[a][b]=C[a]/B[a][b]+E[a][b];
	      A[a][b][c]=C[a-1]/D[a][b];
	    }

    return 0;
}