double _var = 3.0;

double var()
{
  return _var;
}

void setVar(double v)
{
  _var = v;
}

int fact(int n)
{
  if (n <= 1) return 1;
  else return n*fact(n-1);
}

int mod(int n, int m)
{
	return(n % m);
}
