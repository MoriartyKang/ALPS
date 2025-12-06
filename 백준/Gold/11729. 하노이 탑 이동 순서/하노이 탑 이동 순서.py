n=int(input())

def hanoi(num,start,end,mid):
    if num==1:
        print(start,end)
        return
    hanoi(num-1,start,mid,end)
    print(start,end)
    hanoi(num-1,mid,end,start)

print(2**n-1)
hanoi(n,1,3,2)