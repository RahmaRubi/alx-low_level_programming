/**
*_pow_recursion - a recursive function return the power
*@x: first paramter
*@y: second paramter
*Return: 1 0r 0 
*/

int _pow_recursion(int x, int y)
{
if ( y == 0)
return (1);
else 
{
return (x * _pow_recursion(x, y - 1));

}

}
