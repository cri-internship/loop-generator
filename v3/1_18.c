#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../_init.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

	float ***result = create_three_dim(5292, 5292, 5292);
	float **A = create_two_dim(5292, 5292);
	float ***B = create_three_dim(5292, 5292, 5292);
	float ***C = create_three_dim(5292, 5292, 5292);

	for (int c = 0; c < 5292; c++)
	  for (int b = 0; b < 5292; b++)
	    for (int a = 0; a < 5292; a++)
	    {
	      result[c][b][a] = B[b][b][c]-A[c][a]/C[a][b][a]+A[c][b]-A[c][a]*C[c][a][b]*C[c][c][b]+A[b][a]+C[c][b][c]+C[a][b][a]*A[c][a]/0.6363973661;
	    }

    return 0;
}