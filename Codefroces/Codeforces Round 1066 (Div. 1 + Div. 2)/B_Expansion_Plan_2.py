'''
Although Punpun didn’t really want to think about what the 
point of having dreams that could never come true was… 
To have dreams and worries that you could talk frankly about… In a way, 
that was probably a more fulfilling lifestyle than his own, Punpun admitted. 
Being cool was merely a 
paper-thin difference away from being empty.
'''

def se(n,x,y,o):
    x,y=abs(x),abs(y)
    c4=o.count('4')
    c8=o.count('8')
    if max(x,y)<=c8:
        return True
    if min(x,y)<=c8:
        md=max(x,y)-c8
    else:
        md=(x-c8)+(y-c8)
    if md<=c4 and (c4-md)%2==0:
        return True
    return False

def m():
    t=int(input())
    for _ in range(t):
        n,x,y=map(int,input().split())
        o=input().strip()
        r=se(n,x,y,o)
        print("YES" if r else "NO")

if __name__=="__main__":
    m()