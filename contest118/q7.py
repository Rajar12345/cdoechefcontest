for i in range(int(input())):
  p=int(1e9+7)
  t=(input())
  m=len(t)
  t=t[::-1]
  t="#"+t
  L=[0]*(m+1)
  M=[0]*(m+1)
  L[0]=1
  z=0
  zz=1
  M[0]=1
  for i in range(1,1+m):
    M[i]=M[i-1]*2%p
    if(t[i]!='a'):
      z+=zz
      z%=p
    else:
      L[i]=z
    zz+=L[i]
    zz%=p
  c=0
  bec=0
  t+="#"
  for i in range(1+m,0,-1):
    if(t[i]=='a'):
      c+=1
    bec+=M[c]*L[i-1]
    bec=bec%p
  bec=bec-1
  bec=bec%p
  bec=p+bec
  bec=bec%p
  print(bec)
