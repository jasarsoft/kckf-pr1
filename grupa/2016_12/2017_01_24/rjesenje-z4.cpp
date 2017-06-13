int aritmeticka_sredina(int x, int y)
{
	int s = 0;

	for (int i = x; i <= y; i++)
	{
		
		
		s = s + i;
		
	}
	return s / ( y - x + 1);
}