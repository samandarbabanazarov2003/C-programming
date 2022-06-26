int main(){
	int a;
	scanf(" %d", &a);

	while(a--)
	{
		int javob = 0;
		int b;

		scanf(" %d", &b);
		if(b % 2  != 0)
		{
			javob = (b / 2) + 1;
		}
		
		printf("%d\n", javob);
	}
	return 0;
}





int main()
{
	int order;
	int tolov;

	scanf(" %d %d", &order, &tolov);

	int qaytim = 0;

	switch(order)
	{
		case 1:
			printf("Americano\n");
			qaytim = tolov - 500; break;
		case 2:
			printf("Caffe Latte\n");
			qaytim = tolov - 400; break;
		case 3:
			printf("Lemon Tea\n");
			qaytim = tolov - 300; break;
	}

	printf("%d %d\n", qaytim / 500, qaytim % 500 / 100);

	return 0;
}
