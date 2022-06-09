n1, n2, k = map(int, raw_input().split());
x = k; cont = 0;
if(1 >= n1 and 1 <= n2):
	print "1",
	cont += 1
while x <= n2:
	if(x >= n1):
		print "%d" % x,
		cont += 1;
	x *= k;
if(cont == 0): print("-1");
