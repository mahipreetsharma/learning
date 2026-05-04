n = int(input("Enter a number : "))
count = 0
for i in range(2, int(n**0.5)+1):
    if n%i==0: count += 1
if count != 1: print("Prime")
else: print("Not Prime")