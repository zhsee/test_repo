void test_function(void)
{
	printf("testing\n");
}

int get_prime(int nth)
{
	int number = 2;
	int count = 0;
	while (1) {
		int div;
		for (div = 2; div < number; div++) {
			if ( number % div == 0)
				break;
		}
		if (div == number)
			count++;
		if (nth == count)
			break;
		number++;
	}
	return number;
}

int main(int argc, char *argv[])
{
	int ret;
	int nth_prime;
	int val;
	if (argc > 2 || argc == 1) {
		printf("ERR: program only takes 1 input (nth prime)\n");
		ret = -1;
		goto failed;
	}
	nth_prime = atoi(argv[1]);
	val = get_prime(nth_prime);
	printf("Reset: %d-th prime = %d\n", nth_prime, val);

	return 0;
failed:
	return ret;
}
