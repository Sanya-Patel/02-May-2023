s="abcabcabc"
pat="abc"
temp=""
res=""
c,ws,we=0,0,0
k=len(pat)
while we<len(s):
    temp+=s[we]
    if(we-ws+1==k):
        if temp==pat:
            c+=1
        res=temp[1:]
        ws+=1
        temp=res
    we+=1

print(c)

