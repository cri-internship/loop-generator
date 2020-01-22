#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(850, 850, 60, "zeros");
	double ***D = create_three_dim_double(660, 260, 50, "zeros");
	double ***A = create_three_dim_double(160, 70, 520, "zeros");
	double ***B = create_three_dim_double(780, 30, 630, "zeros");

	for (int c = 0; c < 48; c++)
	  for (int b = 0; b < 67; b++)
	    for (int a = 0; a < 155; a++)
	    {
	      
	      D[a][b][c]=D[a+5][b+4][c+2]/A[a][b][c]*C[a][b][c]-0.783;
	      
	      A[a][b][c]=A[a+5][b+3][c+2]*D[a][b][c]-D[a][b][c];
	      
	      D[a][b][c]=0.003;
	    }

    return 0;
}