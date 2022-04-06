typedef struct {
	int int_value;
	unsigned int unsigned_value;
	float float_value;
	char *string;
} simple_struct;

void add(int *base, int value){
	*base += value;
}

void example_break() {
	int sum = 0;

	add(&sum,3);

	for(int i = 0; i < 100; i++) {
		add(&sum,i);
	}

	sum = 1;
	while(sum <= 315){
		add(&sum, sum / 2 + 1);
	}

	return;
}

void example_watchpoint(){
	int a[100];

	for(int i = 0; i <= 100; i++)
		a[i] = i;

	return;
}

void example_variables(){
	int a = 3;

	a *= 5;

	int b[5] = {5,4,3,2,1};

	b[3] = 2;

	int *c = b;

	char *string = malloc(10);

	memset(string,'C',10);

	string[9] = 0;

	return;
}

void example_expressions(){
	int x = 5, y = x;

	x += 1;
	y += 1;

	x *= y;

	return;

}

void example_memory(){
	simple_struct *sstr = malloc(sizeof(simple_struct));

	sstr -> int_value = 0;
	sstr -> float_value = 3.5;
	sstr -> unsigned_value = -1;
	sstr -> string = malloc(10);

	memset(sstr -> string,'B',10);

	sstr -> string[9] = 0;

	sstr -> float_value = 4.3;
	sstr -> int_value = 5;
	sstr -> unsigned_value = !(sstr -> unsigned_value);
}

