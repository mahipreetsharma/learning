a = [1,2,3,5]
s = "Mahipreet@Gmail.Com"
s = s.lower()
s = s.split('@')
s[1]=s[1].split('.')
s = s[0]+(s[1][0]+s[1][1])

print(s)