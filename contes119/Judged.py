n = int(input())

for _ in range(n):  # Use _ to indicate unused loop variable
   a, b, z, z1, z2 = map(int, input().split())

   if a + b + z + z1 + z2 >= 4:
       print('YES')
   else:
       print('NO')
