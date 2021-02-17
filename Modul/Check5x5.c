/*Program : Check5x5.c
* Deskripsi : Pemeriksaan apakah sudah memenuhi persyaratan untuk menang, kalah, atau seri pada papan permainan 5x5.
* Nama : Fadhil Muhammad
* tanggal/ versi : 23 - januari - 2021 / 1 
*/

char check_5X5()
{
	int i,j;

	// Pengecekan Baris

	for(i=0;i<5;i++)
		if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2]&&matrix[i][0]==matrix[i][3])							//checking if the elements of rows are identical
			return matrix[i][0];

	for(i=0;i<5;i++)
		if(matrix[i][1]==matrix[i][2]&&matrix[i][1]==matrix[i][3]&&matrix[i][1]==matrix[i][4])							//checking if the elements of rows are identical
			return matrix[i][1];

	for(i=0;i<5;i++)
		if(matrix[i][2]==matrix[i][3]&&matrix[i][2]==matrix[i][4]&&matrix[i][2]==matrix[i][5])							//checking if the elements of rows are identical
			return matrix[i][2];

	// Pengecekan Kolom

	for(i=0;i<5;i++)
		if(matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i]&&matrix[0][i]==matrix[3][i])							//checking if the elements of columns are identical
			return matrix[0][i];
	
	for(i=0;i<5;i++)
		if(matrix[1][i]==matrix[2][i]&&matrix[1][i]==matrix[3][i]&&matrix[1][i]==matrix[4][i])							//checking if the elements of columns are identical
			return matrix[1][i];
	
	for(i=0;i<5;i++)
		if(matrix[2][i]==matrix[3][i]&&matrix[2][i]==matrix[4][i]&&matrix[2][i]==matrix[5][i])							//checking if the elements of columns are identical
			return matrix[2][i];

	// Pengecekan Diagonal

	if(matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2]&&matrix[0][0]==matrix[3][3])								//checking if (1,1),(2,2) & (3,3) are identical
		return matrix[0][0];
	
	if(matrix[0][1]==matrix[1][2]&&matrix[0][1]==matrix[2][3]&&matrix[0][1]==matrix[3][4])								//checking if (1,3),(2,2) & (3,1) are identical
			return matrix[0][1];

	if(matrix[0][3]==matrix[1][2]&&matrix[0][3]==matrix[2][1]&&matrix[0][3]==matrix[3][0])								
			return matrix[0][3];

	if(matrix[0][4]==matrix[1][3]&&matrix[0][4]==matrix[2][2]&&matrix[0][4]==matrix[3][1])								
			return matrix[0][4];

	if(matrix[1][0]==matrix[2][1]&&matrix[1][0]==matrix[3][2]&&matrix[1][0]==matrix[4][3])								
			return matrix[1][0];
	
	if(matrix[1][1]==matrix[2][2]&&matrix[1][1]==matrix[3][3]&&matrix[1][1]==matrix[4][4])								
			return matrix[1][1];

	if(matrix[1][3]==matrix[2][2]&&matrix[1][3]==matrix[3][1]&&matrix[1][3]==matrix[4][0])								
			return matrix[1][3];

	if(matrix[1][4]==matrix[2][3]&&matrix[1][4]==matrix[3][2]&&matrix[1][4]==matrix[4][1])								
			return matrix[1][4];

	// Pengecekan bila ada index yang kosong

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matrix[i][j]==' ')
				return ' ';																	
		}
	}

	// Jika tidak ada maka seri

	return 'D';
}