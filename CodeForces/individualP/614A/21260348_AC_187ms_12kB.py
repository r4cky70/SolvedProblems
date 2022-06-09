a, b, c = map(int, raw_input().split())
i = 0
x = pow(c, 0)
flag = False
while(x <= b):
  if(x >= a):
    print "%d " % x,
    flag = True;
  i+=1
  x = pow(c, i)
if(flag == False): print "-1\n"
