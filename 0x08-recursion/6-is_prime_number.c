/**
 * is_prime_helper - checks if a number is prime recursively
 * @n: the number to check
 * @i: the current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	/* Check if number is less than 2 or even */
	if (n < 2 || (n % 2 == 0 && n != 2))
		return (0);

	/* Check if number is 2 */
	if (n == 2)
		return (1);

	/* Check if i^2 is greater than n */
	if (i * i > n)
		return (1);

	/* Check if i divides n evenly */
	if (n % i == 0)
		return (0);

	/* Make recursive call with i incremented by 2 */
	return (is_prime_helper(n, i + 2));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/* Call helper function with initial value of i equal to 3 */
	return (is_prime_helper(n, 3));
}
