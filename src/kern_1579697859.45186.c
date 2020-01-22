#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(620, 650, 720, "random");
	int ***B = create_three_dim_int(220, 780, 510, "random");
	int *D = create_one_dim_int(160, "random");
	int *A = create_one_dim_int(690, "random");

	for (int c = 1; c < 506; c++)
	  for (int b = 2; b < 650; b++)
	    for (int a = 4; a < 157; a++)
	    {
	      
	      D[a]=D[a-4]/1;
	      
	      B[a][b][c]=B[a+5][b+5][c+4]+31;
	      
	      B[a][b][c]=B[a][b+1][c+3]/A[a]+D[a];
	      
	      D[a]=D[a+3]-4;
	      
	      A[a]=0;
	      A[a+4]=C[a][b][c]/D[a]-C[a][b][c];
	      
	      B[a][b][c]=C[a][b][c]-B[a][b][c]+A[a]*D[a];
	      A[a]=C[a-1][b-2][c-1]*D[a]/B[a][b][c];
	    }

    return 0;
}