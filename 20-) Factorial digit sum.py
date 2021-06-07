product = 1

for x in range(1, 101):
	product *= x

ans = 0
for y in str(product):
	ans += int(y)

print(ans)
